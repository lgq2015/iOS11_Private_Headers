/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSleepPeriodSegment : NSObject {
    long long  _category;
    double  _duration;
    NSDate * _endDate;
    NSArray * _samples;
    NSDate * _startDate;
}

@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly, copy) NSArray *samples;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (long long)category;
- (double)duration;
- (id)endDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 category:(long long)arg3 samples:(id)arg4 duration:(double)arg5;
- (id)samples;
- (id)startDate;

@end
