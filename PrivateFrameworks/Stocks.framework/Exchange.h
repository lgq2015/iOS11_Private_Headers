/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface Exchange : NSObject {
    NSDate * _lastCloseDate;
    double  _lastUpdateTime;
    NSString * _name;
    NSDate * _nextOpenDate;
    long long  _status;
    double  _streamInterval;
}

@property (nonatomic, retain) NSDate *lastCloseDate;
@property (nonatomic, readonly) double lastUpdateTime;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSDate *nextOpenDate;
@property (nonatomic) long long status;
@property (nonatomic) double streamInterval;

+ (id)formattedExchangeNameForName:(id)arg1;

- (void).cxx_destruct;
- (void)_updateWithDictionary:(id)arg1 newUpdate:(bool)arg2;
- (id)archiveDictionary;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastCloseDate;
- (double)lastUpdateTime;
- (bool)marketIsAfterHours;
- (bool)marketIsOpen;
- (id)name;
- (id)nextOpenDate;
- (void)setLastCloseDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNextOpenDate:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setStreamInterval:(double)arg1;
- (long long)status;
- (double)streamInterval;
- (void)updateWithDictionary:(id)arg1;

@end
