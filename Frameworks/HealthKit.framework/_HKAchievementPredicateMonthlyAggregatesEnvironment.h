/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAchievementPredicateMonthlyAggregatesEnvironment : _HKBaseAchievementPredicateEnvironment {
    double  _activeCalories;
    double  _activeCaloriesDailyAverage;
    long long  _daysMeetingAllGoals;
    long long  _daysMeetingExerciseGoal;
    long long  _daysMeetingMoveGoal;
    long long  _daysMeetingMoveGoalByFactorOfTwo;
    long long  _daysMeetingStandGoal;
    double  _distanceTraveled;
    double  _exerciseMinutes;
    double  _exerciseMinutesDailyAverage;
    long long  _workouts;
}

@property (nonatomic, readonly) double activeCalories;
@property (nonatomic, readonly) double activeCaloriesDailyAverage;
@property (nonatomic, readonly) long long daysMeetingAllGoals;
@property (nonatomic, readonly) long long daysMeetingExerciseGoal;
@property (nonatomic, readonly) long long daysMeetingMoveGoal;
@property (nonatomic, readonly) long long daysMeetingMoveGoalByFactorOfTwo;
@property (nonatomic, readonly) long long daysMeetingStandGoal;
@property (nonatomic, readonly) double distanceTraveled;
@property (nonatomic, readonly) double exerciseMinutes;
@property (nonatomic, readonly) double exerciseMinutesDailyAverage;
@property (nonatomic, readonly) long long workouts;

- (double)activeCalories;
- (double)activeCaloriesDailyAverage;
- (long long)daysMeetingAllGoals;
- (long long)daysMeetingExerciseGoal;
- (long long)daysMeetingMoveGoal;
- (long long)daysMeetingMoveGoalByFactorOfTwo;
- (long long)daysMeetingStandGoal;
- (double)distanceTraveled;
- (double)exerciseMinutes;
- (double)exerciseMinutesDailyAverage;
- (id)initWithNumberOfDaysInMonth:(unsigned long long)arg1 daysMeetingAllGoals:(long long)arg2 daysMeetingMoveGoal:(long long)arg3 daysMeetingMoveGoalByFactorOfTwo:(long long)arg4 daysMeetingExerciseGoal:(long long)arg5 daysMeetingStandGoal:(long long)arg6 activeCalories:(double)arg7 exerciseMinutes:(double)arg8 distanceTraveled:(double)arg9 workouts:(long long)arg10;
- (long long)workouts;

@end
