/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchMonitor : NSObject {
    _ATXAppDailyDose * _appDailyDose;
    _ATXAppInfoManager * _appInfoManager;
    _ATXAppLaunchHistogramManager * _appLaunchHistogramManager;
    NSObject<OS_dispatch_queue> * _appLaunchHistoryQueue;
    _ATXAppLaunchSequenceManager * _appLaunchSequenceManager;
    <_CDLocalContext> * _context;
    NSMutableArray * _deltaLog;
    _ATXDuetHelper * _duetHelper;
    NSMutableDictionary * _launchedBundleIds;
    NSObject<OS_dispatch_queue> * _logQueue;
    NSMutableSet * _registrations;
    PETScalarEventTracker * _updateLaunchHistoryTracker;
}

+ (void)_logPredictionForBundleId:(id)arg1 launchReason:(id)arg2 consumerType:(unsigned long long)arg3 consumerSubType:(unsigned char)arg4;

- (void).cxx_destruct;
- (void)_addLaunchWithBundleIdNoLock:(id)arg1 date:(id)arg2 timeZone:(id)arg3 reason:(id)arg4 isExtension:(bool)arg5;
- (void)_addSURFLaunchesDuringLastLaunch;
- (void)_addSurfLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (void)_syncForTests;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3 reason:(id)arg4;
- (id)appInfoManager;
- (id)appLaunchHistogramManager;
- (id)appLaunchSequenceManager;
- (void)clearHistory;
- (id)dailyDose;
- (void)dealloc;
- (void)handleAppLaunchNotification:(id)arg1 reason:(id)arg2;
- (void)handleBacklightChangeNotificationWithValue:(int)arg1;
- (id)init;
- (id)initWithAppInfoManager:(id)arg1 appLaunchHistogramManager:(id)arg2 appLaunchSequenceManager:(id)arg3 appDailyDose:(id)arg4 duetHelper:(id)arg5;
- (id)initWithInMemoryStore;
- (void)mergeAppLaunches:(id)arg1 andBacklightTransitions:(id)arg2 callingAppLaunchBlock:(id /* block */)arg3;
- (void)registerForAppChange;
- (void)registerForBacklightChange;
- (void)start;
- (void)startDeltaRecording;
- (void)stop;
- (id)stopDeltaRecording;
- (void)swapDuetHelper:(id)arg1;
- (void)updateLaunchHistoryFromDuet;
- (void)updateLaunchHistoryFromDuet:(double)arg1 callback:(id /* block */)arg2;

@end
