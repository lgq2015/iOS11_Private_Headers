/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDSubmissionManager : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver> {
    NSMutableArray * _actions;
    _HDAWDPeriodicAction * _fitnessDailyAction;
    int  _fitnessDailyCollectionEnabledNotifyToken;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _serverConnectionsByComponentId;
    bool  _started;
    id /* block */  _testHandler;
}

@property (nonatomic, readonly) double activitySummaryQueryTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ testHandler;

- (void).cxx_destruct;
- (long long)_CDACountWithDatabase:(id)arg1 error:(id*)arg2;
- (id)_actions;
- (bool)_activitySummaryForActivitySummaryIndex:(long long)arg1 activitySummaryOut:(id*)arg2 error:(id*)arg3;
- (bool)_addRowCountDeltaToEvent:(id)arg1 profile:(id)arg2 currentDate:(id)arg3;
- (bool)_computeAndSubmitAchievementCountMetric:(bool)arg1;
- (bool)_computeAndSubmitDatabaseStatsMetric:(bool)arg1;
- (bool)_computeAndSubmitFitnessDailyReportWithAction:(id)arg1 force:(bool)arg2;
- (bool)_computeAndSubmitHealthTypesDifferentialPrivacyMetric;
- (bool)_computeAndSubmitSleepAlarmDailyReportWithAction:(id)arg1 force:(bool)arg2;
- (bool)_computeAndSubmitSleepAlarmStatistics:(bool)arg1;
- (long long)_countOfObjectsWithSQLQuery:(id)arg1 database:(id)arg2 error:(id*)arg3 bindingHandler:(id /* block */)arg4;
- (long long)_deletedRowCountWithDatabase:(id)arg1 error:(id*)arg2;
- (bool)_enumerateAppleStandHoursFromDate:(id)arg1 toDate:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (id)_exerciseMinuteHoursFromDate:(id)arg1 toDate:(id)arg2 error:(id*)arg3;
- (id)_hasWatchSourcesWithDatabase:(id)arg1 error:(id*)arg2;
- (id)_hourlyStatisticsCollectionForStartDate:(id)arg1 endDate:(id)arg2 quantityType:(id)arg3 statisticsOptions:(unsigned long long)arg4 error:(id*)arg5;
- (long long)_int64ForKeyPrefix:(id)arg1 profile:(id)arg2 date:(id*)arg3 error:(id*)arg4;
- (long long)_manuallyEnteredTypesCountWithDatabase:(id)arg1 error:(id*)arg2;
- (id)_newActivitySummaryQueryHelperWithFilter:(id)arg1 initialResultsHandler:(id /* block */)arg2;
- (long long)_nonAppleSourcesCountWithDatabase:(id)arg1 error:(id*)arg2;
- (long long)_nonAppleSourcesWithDataSince:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (long long)_objectRowCountWithDatabase:(id)arg1 afterRowId:(long long)arg2 error:(id*)arg3;
- (void)_queue_start;
- (void)_queue_updateFitnessDailyCollectionEnabled;
- (void)_registerForFitnessDailyCollection;
- (id)_serverConnectionForComponentId:(unsigned int)arg1;
- (bool)_setInt64:(long long)arg1 keyPrefix:(id)arg2 profile:(id)arg3 date:(id)arg4 error:(id*)arg5;
- (id)_sleepConsistencyEventForMonthPriorToDate:(id)arg1 calendar:(id)arg2;
- (id)_sleepNightEventFromSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 calendar:(id)arg4;
- (id)_sleepSamplesBeforeDate:(id)arg1 days:(long long)arg2 startDate:(id*)arg3 endDate:(id*)arg4 calendar:(id)arg5;
- (id)_statisticsForTimeDeltas:(id)arg1;
- (bool)_submitAchievementCountMetricWithConnection:(id)arg1 container:(id)arg2 earnedAchievements:(id)arg3 calorieGoal:(id)arg4 force:(bool)arg5;
- (bool)_submitMetric:(id)arg1 container:(id)arg2 connection:(id)arg3 force:(bool)arg4;
- (bool)_updateDatabaseStatsEvent:(id)arg1 withSizeFromDatabase:(id)arg2 profile:(id)arg3 currentDate:(id)arg4;
- (id)_updateMonthDeltaToInt64:(long long)arg1 forKey:(id)arg2 profile:(id)arg3 currentDate:(id)arg4 error:(id*)arg5;
- (double)activitySummaryQueryTimeout;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1;
- (bool)isFitnessDailyCollectionEnabled;
- (id)motionToken;
- (id)profile;
- (void)resetTask:(id)arg1;
- (bool)runTask:(id)arg1 error:(id*)arg2;
- (void)setTestHandler:(id /* block */)arg1;
- (id /* block */)testHandler;
- (void)updateFitnessDailyCollectionEnabled;

@end
