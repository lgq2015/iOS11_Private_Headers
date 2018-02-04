/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKFirstPartyWorkoutSnapshot : NSObject <NSSecureCoding> {
    unsigned long long  _activityType;
    NSDate * _startDate;
    long long  _state;
    NSArray * _workoutEvents;
}

@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) NSArray *workoutEvents;

+ (bool)supportsSecureCoding;
+ (id)workoutSnapshotWithState:(long long)arg1 activityType:(unsigned long long)arg2 startDate:(id)arg3 workoutEvents:(id)arg4;

- (void).cxx_destruct;
- (id)_initWithState:(long long)arg1 activityType:(unsigned long long)arg2 startDate:(id)arg3 workoutEvents:(id)arg4;
- (unsigned long long)activityType;
- (id)description;
- (double)durationForDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)startDate;
- (long long)state;
- (id)workoutEvents;

@end
