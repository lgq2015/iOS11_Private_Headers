/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKWorkoutRecoveryHeartRateQueryUtility : NSObject {
    HKHealthStore * _healthStore;
    HKSampleQuery * _heartRateQuery;
    NSArray * _heartRateSamples;
    id /* block */  _resultsHandler;
    HKWorkout * _workout;
    HKAnchoredObjectQuery * _workoutQuery;
    _HKSampleQueryUtility * _workoutQueryUtility;
    NSDate * _workoutRecoveryEndDate;
}

@property (nonatomic, copy) id /* block */ resultsHandler;

+ (id)_recoveryEndDateWithStartDate:(id)arg1;
+ (id)perMinuteWorkoutRecoveryHeartRateFromHeartRateObjects:(id)arg1 workoutEndDate:(id)arg2 dateFromHeartRateBlock:(id /* block */)arg3;
+ (id)perMinuteWorkoutRecoveryHeartRateFromHeartRates:(id)arg1 workoutEndDate:(id)arg2;
+ (id)perMinuteWorkoutRecoveryHeartRateFromReadings:(id)arg1 workoutEndDate:(id)arg2;
+ (id)predicateForWorkoutRecoveryTimeWithWorkout:(id)arg1;
+ (id)workoutRecoveryDateIntervalForWorkout:(id)arg1 overlappingWorkouts:(id)arg2;
+ (id)workoutRecoveryHeartRatesForWorkout:(id)arg1 recoveryDateInterval:(id)arg2 heartRates:(id)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (void)execute;
- (void)heartRatesPostWorkout:(id)arg1 recoveryInterval:(double)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithHealthStore:(id)arg1 workout:(id)arg2 resultsHandler:(id /* block */)arg3;
- (id /* block */)resultsHandler;
- (void)setResultsHandler:(id /* block */)arg1;
- (void)setupQueries;
- (void)stop;

@end
