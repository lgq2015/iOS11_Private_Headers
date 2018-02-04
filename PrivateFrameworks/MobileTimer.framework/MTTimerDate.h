/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTTimerDate : NSObject <MTDictionarySerializable, MTTimerTime> {
    id /* block */  _currentDateProvider;
    NSDate * _date;
}

@property (nonatomic, copy) id /* block */ currentDateProvider;
@property (nonatomic, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double remainingTime;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)currentDateProvider;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithDate:(id)arg1 currentDateProvider:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTime:(id)arg1;
- (double)remainingTime;
- (void)setCurrentDateProvider:(id /* block */)arg1;
- (void)setDate:(id)arg1;

@end
