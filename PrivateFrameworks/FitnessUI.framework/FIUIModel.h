/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIModel : NSObject <FIUIAchievementsModelDelegate> {
    FIUIAchievementsModel * _achievementsModel;
    NSObject<OS_dispatch_queue> * _activityQueryClientQueue;
    NSMutableDictionary * _currentActivityCacheQueryClients;
    NSMutableDictionary * _currentActivitySummaryQueryClients;
    NSDictionary * _currentActivitySummaryQueryCollectionIntervalOverrides;
    HKHealthStore * _healthStore;
    NSHashTable * _observers;
    long long  _queue_activityCacheQueryRetries;
    long long  _queue_activitySummaryQueryRetries;
    HKActivityCache * _queue_currentActivityCacheForClients;
    HKCurrentActivityCacheQuery * _queue_currentActivityCacheQuery;
    HKActivitySummary * _queue_currentActivitySummaryForClients;
    _HKCurrentActivitySummaryQuery * _queue_currentActivitySummaryQuery;
    NSArray * _queue_currentExerciseResults;
    NSArray * _queue_currentMoveResults;
    NSArray * _queue_currentStandResults;
    NSPredicate * _sourcesPredicate;
    NSObject<OS_dispatch_queue> * _sourcesQueue;
    FIUIWeeklyGoalModel * _weeklyGoalModel;
}

@property (nonatomic, readonly) FIUIAchievementsModel *achievementsModel;
@property (nonatomic, retain) NSDictionary *currentActivitySummaryQueryCollectionIntervalOverrides;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) NSPredicate *sourcesPredicate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) FIUIWeeklyGoalModel *weeklyGoalModel;

+ (id)_dailyTotalsQueryFromDate:(id)arg1 toDate:(id)arg2 dataType:(id)arg3 predicate:(id)arg4 sendUpdates:(bool)arg5 handler:(id /* block */)arg6;
+ (id)activityChartQueryForStartDate:(id)arg1 endDate:(id)arg2 moveintervalSize:(id)arg3 exerciseIntervalSize:(id)arg4 handler:(id /* block */)arg5;
+ (id)dailyTotalQueryForDate:(id)arg1 dataType:(id)arg2 predicate:(id)arg3 sendUpdates:(bool)arg4 handler:(id /* block */)arg5;
+ (bool)isWheelchairUser;

- (void).cxx_destruct;
- (id)_createCurrentActivityCacheQuery;
- (id)_createCurrentActivitySummaryQuery;
- (void)_printStatisticsCollection:(id)arg1;
- (void)_printUpdatedStatistics:(id)arg1;
- (void)_queue_restartCurrentActivityCacheQueryAfterError;
- (void)_queue_restartCurrentActivitySummaryQueryAfterError;
- (void)_sendMessageToObservers:(SEL)arg1 withObject:(id)arg2;
- (void)_sendMessageToObservers:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)_setKnownSources:(id)arg1;
- (void)achievementsDidChangeInModel:(id)arg1;
- (id)achievementsModel;
- (void)addObserver:(id)arg1;
- (void)basalEnergyBurnTotalForDate:(id)arg1 completion:(id /* block */)arg2;
- (void)basalMetabolicRateForDate:(id)arg1 completion:(id /* block */)arg2;
- (id)currentActivitySummaryQueryCollectionIntervalOverrides;
- (void)executeQuery:(id)arg1;
- (id)healthStore;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setCurrentActivitySummaryQueryCollectionIntervalOverrides:(id)arg1;
- (id)sourcesPredicate;
- (id)startCurrentActivityCacheWithChartsQueryWithHandler:(id /* block */)arg1;
- (id)startCurrentActivitySummaryQueryWithHandler:(id /* block */)arg1;
- (void)stopCurrentActivityCacheWithGraphsQueryForClientToken:(id)arg1;
- (void)stopCurrentActivitySummaryQueryForClientToken:(id)arg1;
- (void)stopQuery:(id)arg1;
- (id)weeklyGoalModel;
- (void)weeklySummaryInfoForDate:(id)arg1 withCompletion:(id /* block */)arg2;

@end
