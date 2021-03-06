/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAchievementPredicateEnvironment : _HKBaseAchievementPredicateEnvironment {
    _HKAchievementPredicateActivityDataEnvironment * _activityData;
    NSString * _currentCountryCode;
    NSString * _currentDefinitionIdentifier;
    _HKAchievementPredicateDatesEnvironment * _dates;
    _HKAchievementPredicateWorkoutsEnvironment * _workouts;
}

@property (nonatomic, readonly) _HKAchievementPredicateActivityDataEnvironment *activityData;
@property (nonatomic, readonly) NSString *currentDefinitionIdentifier;
@property (nonatomic, readonly) _HKAchievementPredicateDatesEnvironment *dates;
@property (nonatomic, readonly) _HKAchievementPredicateWorkoutsEnvironment *workouts;

+ (id)_expressionForAggregateValue:(id)arg1 inMonthOffset:(long long)arg2;
+ (id)expressionForActiveCaloriesBurnedInMonthOffset:(long long)arg1;
+ (id)expressionForDailyAverageActiveCaloriesBurnedInMonthOffset:(long long)arg1;
+ (id)expressionForDailyAverageExerciseMinutesPerDayInMonthOffset:(long long)arg1;
+ (id)expressionForDaysMeetingAllGoalsInMonthOffset:(long long)arg1;
+ (id)expressionForDaysMeetingExerciseGoalInMonthOffset:(long long)arg1;
+ (id)expressionForDaysMeetingMoveGoalByFactorOfTwoInMonthOffset:(long long)arg1;
+ (id)expressionForDaysMeetingMoveGoalInMonthOffset:(long long)arg1;
+ (id)expressionForDaysMeetingStandGoalInMonthOffset:(long long)arg1;
+ (id)expressionForDistanceTraveledInMonthOffset:(long long)arg1;
+ (id)expressionForExerciseMinutesInMonthOffset:(long long)arg1;
+ (id)expressionForWorkoutsCompletedInMonthOffset:(long long)arg1;
+ (id)pairedWatchCountryCode;

- (void).cxx_destruct;
- (id)activityData;
- (id)consecutiveAllGoalsStartingDaysAgo:(id)arg1;
- (id)consecutiveExerciseGoalsStartingDaysAgo:(id)arg1;
- (id)consecutiveMoveGoalsStartingDaysAgo:(id)arg1;
- (id)consecutiveStandGoalsStartingDaysAgo:(id)arg1;
- (id)currentCountryCode;
- (id)currentDefinitionIdentifier;
- (id)dates;
- (id)initWithActivityDataEnvironment:(id)arg1 datesEnvironment:(id)arg2 workoutsEnvironment:(id)arg3;
- (id)maxNumber:(id)arg1 otherNumber:(id)arg2;
- (void)setCurrentDefinitionIdentifier:(id)arg1;
- (void)setCurrentLocale:(id)arg1;
- (id)workouts;

@end
