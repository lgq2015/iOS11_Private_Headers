/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCompanionAchievementManager : NSObject <HDAchievementEvaluationDelegate, HDDiagnosticObject, HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate> {
    HDAchievementDataStoreV2 * _achievementStore;
    NSCalendar * _calendar;
    HDCompanionDailyGoalCompletionManager * _dailyGoalCompletionManager;
    HDKeyValueDomain * _defaultsDomain;
    bool  _deleteAchievementsNeedsRetry;
    HDAchievementDetective * _detective;
    int  _fitnessWeekRedefined;
    NSDate * _lastRunDate;
    HDProfile * _profile;
    HDAchievementDetective * _progressDetective;
    NSObject<OS_dispatch_queue> * _queue;
    HDPeriodicActivity * _scheduler;
    bool  _waitingToRun;
    NSNumber * _waitingToRunBackingNumber;
}

@property (nonatomic, retain) HDAchievementDataStoreV2 *achievementStore;
@property (nonatomic, retain) NSCalendar *calendar;
@property (nonatomic, retain) HDCompanionDailyGoalCompletionManager *dailyGoalCompletionManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HDKeyValueDomain *defaultsDomain;
@property (nonatomic) bool deleteAchievementsNeedsRetry;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HDAchievementDetective *detective;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastRunDate;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) HDAchievementDetective *progressDetective;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) HDPeriodicActivity *scheduler;
@property (readonly) Class superclass;
@property (getter=isWaitingToRun, nonatomic) bool waitingToRun;
@property (nonatomic, retain) NSNumber *waitingToRunBackingNumber;

- (void).cxx_destruct;
- (void)_applicationsInstalled:(id)arg1;
- (void)_applicationsUninstalled:(id)arg1;
- (void)_queue_deleteAllAchievements;
- (bool)_queue_performDetectiveRun;
- (void)_systemTimeZoneDidChange:(id)arg1;
- (id)achievementStore;
- (id)calendar;
- (id)createEvaluatedAchievementWithDefinition:(id)arg1;
- (void)daemonReady:(id)arg1;
- (id)dailyGoalCompletionManager;
- (void)dealloc;
- (id)defaultsDomain;
- (bool)deleteAchievementsNeedsRetry;
- (id)detective;
- (id)diagnosticDescription;
- (id)evaluateAchievementExpression:(id)arg1;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (bool)isWaitingToRun;
- (id)lastRunDate;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (bool)periodicActivityRequiresProtectedData:(id)arg1;
- (id)profile;
- (id)progressDetective;
- (id)queue;
- (void)requestRun;
- (id)runImmediately;
- (id)scheduler;
- (void)setAchievementStore:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDailyGoalCompletionManager:(id)arg1;
- (void)setDefaultsDomain:(id)arg1;
- (void)setDeleteAchievementsNeedsRetry:(bool)arg1;
- (void)setDetective:(id)arg1;
- (void)setLastRunDate:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setProgressDetective:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)setWaitingToRun:(bool)arg1;
- (void)setWaitingToRunBackingNumber:(id)arg1;
- (id)waitingToRunBackingNumber;

@end
