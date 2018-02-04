/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKActivityChartPoint : NSObject <HKChartPoint> {
    NSNumber * _activeEnergyBurnedMinusWorkouts;
    HKActivityCache * _activityCache;
    NSDate * _date;
    HKActivityChartPointSummary * _summary;
    HKUnit * _unit;
    NSNumber * _workoutActiveEnergyBurned;
    NSArray * _workoutTimes;
    NSArray * _workouts;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_calculateEnergyBurned;
- (void)_createSummary;
- (void)_populateWorkoutTimes;
- (id)allYValues;
- (id)initWithActivityCache:(id)arg1 workouts:(id)arg2 unit:(id)arg3;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (id)userInfo;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end
