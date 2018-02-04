/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDMoveAchievementState : _HDAchievementState {
    double  _bestCaloriesBurned;
    long long  _bestConsecutiveGoalsMet;
    double  _bestMetMoveGoalCalories;
    double  _latestGoalMetCalories;
    long long  _lifetimeGoalsMet;
    double  _previousCaloriesBurnedToday;
}

@property (nonatomic) double bestCaloriesBurned;
@property (nonatomic) long long bestConsecutiveGoalsMet;
@property (nonatomic) double bestMetMoveGoalCalories;
@property (nonatomic) double latestGoalMetCalories;
@property (nonatomic) long long lifetimeGoalsMet;
@property (nonatomic) double previousCaloriesBurnedToday;

- (double)bestCaloriesBurned;
- (long long)bestConsecutiveGoalsMet;
- (double)bestMetMoveGoalCalories;
- (double)latestGoalMetCalories;
- (long long)lifetimeGoalsMet;
- (double)previousCaloriesBurnedToday;
- (void)setBestCaloriesBurned:(double)arg1;
- (void)setBestConsecutiveGoalsMet:(long long)arg1;
- (void)setBestMetMoveGoalCalories:(double)arg1;
- (void)setLatestGoalMetCalories:(double)arg1;
- (void)setLifetimeGoalsMet:(long long)arg1;
- (void)setPreviousCaloriesBurnedToday:(double)arg1;

@end
