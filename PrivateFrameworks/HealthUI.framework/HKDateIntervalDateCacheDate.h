/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDateIntervalDateCacheDate : NSObject {
    NSDate * _date;
    long long  _dateType;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) long long dateType;

- (void).cxx_destruct;
- (id)date;
- (long long)dateType;
- (id)description;
- (id)initWithDate:(id)arg1 dateType:(long long)arg2;

@end
