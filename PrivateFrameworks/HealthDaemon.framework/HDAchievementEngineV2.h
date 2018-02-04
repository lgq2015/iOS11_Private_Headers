/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAchievementEngineV2 : NSObject {
    HDAchievementDataStoreV2 * _achievementStore;
    NSCalendar * _calendar;
    <HDDailyActivityGoalDetectionDelegate> * _dailyGoalDetectionDelegate;
    <HDAchievementEngineDataProviding> * _dataProvider;
    bool  _enableExtraLogging;
    NSCalendar * _fixedCalendar;
    NSDate * _fixedNowDate;
    NSDate * _now;
}

@property (nonatomic, retain) HDAchievementDataStoreV2 *achievementStore;
@property (nonatomic, retain) NSCalendar *calendar;
@property (nonatomic) <HDDailyActivityGoalDetectionDelegate> *dailyGoalDetectionDelegate;
@property (nonatomic) <HDAchievementEngineDataProviding> *dataProvider;
@property (nonatomic) bool enableExtraLogging;
@property (getter=_fixedCalendar, setter=_setFixedCalendar:, nonatomic, retain) NSCalendar *fixedCalendar;
@property (getter=_fixedNowDate, setter=_setFixedNowDate:, nonatomic, retain) NSDate *fixedNowDate;
@property (nonatomic, retain) NSDate *now;
@property (nonatomic, readonly) double nowTimeIntervalSinceReferenceDate;

- (void).cxx_destruct;
- (id)_fixedCalendar;
- (id)_fixedNowDate;
- (id)_lastEarnableDateOfDefinition:(id)arg1 inEnvironment:(id)arg2;
- (struct { long long x1; long long x2; double x3; double x4; double x5; double x6; double x7; long long x8; long long x9; long long x10; long long x11; double x12; double x13; struct { unsigned long long x_14_1_1; unsigned long long x_14_1_2; double x_14_1_3; } x14; struct { unsigned long long x_15_1_1; unsigned long long x_15_1_2; double x_15_1_3; } x15; struct { unsigned long long x_16_1_1; unsigned long long x_16_1_2; double x_16_1_3; } x16; bool x17; bool x18; double x19; })_runForActivityDataWithInitialState:(struct { long long x1; long long x2; double x3; double x4; double x5; double x6; double x7; long long x8; long long x9; long long x10; long long x11; double x12; double x13; struct { unsigned long long x_14_1_1; unsigned long long x_14_1_2; double x_14_1_3; } x14; struct { unsigned long long x_15_1_1; unsigned long long x_15_1_2; double x_15_1_3; } x15; struct { unsigned long long x_16_1_1; unsigned long long x_16_1_2; double x_16_1_3; } x16; bool x17; bool x18; double x19; })arg1 forGoalType:(unsigned long long)arg2 goalDisplayName:(id)arg3 shouldAlertGoalComplete:(bool)arg4 goalMetHandler:(id /* block */)arg5;
- (void)_setFixedCalendar:(id)arg1;
- (void)_setFixedNowDate:(id)arg1;
- (void)_updateAllGoalsMonthlyTotals;
- (void)_updateDistanceMonthlyTotals;
- (id)achievementStore;
- (id)calendar;
- (id)dailyGoalDetectionDelegate;
- (id)dataProvider;
- (bool)enableExtraLogging;
- (id)initWithAchievementStore:(id)arg1;
- (id)now;
- (double)nowTimeIntervalSinceReferenceDate;
- (unsigned long long)runForNewExerciseDataAlertingDailyGoals:(bool)arg1;
- (unsigned long long)runForNewMoveDataAlertingDailyGoals:(bool)arg1;
- (unsigned long long)runForNewStandDataAlertingDailyGoals:(bool)arg1;
- (unsigned long long)runForNewWorkouts;
- (void)runForTriggers:(unsigned long long)arg1 withEnvironment:(id)arg2;
- (void)setAchievementStore:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDailyGoalDetectionDelegate:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (void)setEnableExtraLogging:(bool)arg1;
- (void)setNow:(id)arg1;
- (void)systemTimeZoneDidChange;
- (void)updateMonthlyTotals;

@end
