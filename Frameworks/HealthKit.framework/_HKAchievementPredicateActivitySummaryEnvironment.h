/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAchievementPredicateActivitySummaryEnvironment : _HKBaseAchievementPredicateEnvironment {
    HKActivitySummary * _activitySummary;
}

@property (nonatomic, retain) HKActivitySummary *activitySummary;
@property (nonatomic, readonly) double briskMinutes;
@property (nonatomic, readonly) double briskMinutesPercent;
@property (nonatomic, readonly) double moveCalories;
@property (nonatomic, readonly) double moveGoalCalories;
@property (nonatomic, readonly) double movePercent;
@property (nonatomic, readonly) double standHours;
@property (nonatomic, readonly) double standPercent;
@property (nonatomic, readonly) long long stepCount;
@property (nonatomic, readonly) double walkingRunningDistanceInKilometers;

- (void).cxx_destruct;
- (id)activitySummary;
- (double)briskMinutes;
- (double)briskMinutesPercent;
- (id)description;
- (id)initWithActivitySummary:(id)arg1;
- (double)moveCalories;
- (double)moveGoalCalories;
- (double)movePercent;
- (void)setActivitySummary:(id)arg1;
- (double)standHours;
- (double)standPercent;
- (long long)stepCount;
- (double)walkingRunningDistanceInKilometers;

@end
