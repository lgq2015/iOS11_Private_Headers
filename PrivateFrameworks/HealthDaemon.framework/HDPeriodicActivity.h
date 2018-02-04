/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDPeriodicActivity : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver> {
    <HDPeriodicActivityDelegate> * _delegate;
    NSString * _errorCountUserDefaultsKey;
    double  _interval;
    bool  _isWaitingToRun;
    NSString * _lastSuccessfulRunDateUserDefaultsKey;
    NSObject<OS_os_log> * _loggingCategory;
    NSString * _minimumIntervalDefaultsKey;
    NSString * _name;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HDPeriodicActivityDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double interval;
@property (nonatomic, readonly) NSObject<OS_os_log> *loggingCategory;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

+ (id)_userDefaultsKeyForName:(id)arg1 key:(id)arg2;
+ (void)registerDisabledPeriodicActivityWithName:(id)arg1 loggingCategory:(id)arg2;

- (void).cxx_destruct;
- (id)_dateForDefaultsKey:(id)arg1;
- (void)_handleXPCActivityCallback:(id)arg1;
- (void)_performActivity:(id)arg1;
- (void)_queue_activityFinishedWithResult:(long long)arg1 minimumRetryInterval:(double)arg2 error:(id)arg3;
- (id)_queue_criteriaForInterval:(double)arg1;
- (double)_queue_currentInterval;
- (void)_queue_incrementErrorCount;
- (void)_queue_performActivityIfPossibleWithCompletion:(id /* block */)arg1;
- (void)_queue_performActivityIfWaitingWithCompletion:(id /* block */)arg1;
- (void)_queue_performActivityWithCompletion:(id /* block */)arg1;
- (void)_queue_setLastSuccessfulRunDate:(id)arg1;
- (void)_queue_unitTest_activityFiredButRunDeclined;
- (void)_queue_updateCriteriaForActivity:(id)arg1;
- (void)_registerActivity;
- (bool)_requiresProtectedData;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)delegate;
- (id)diagnosticDescription;
- (void)didPerformActivityWithResult:(long long)arg1 minimumRetryInterval:(double)arg2 error:(id)arg3;
- (id)initWithProfile:(id)arg1 name:(id)arg2 interval:(double)arg3 delegate:(id)arg4 loggingCategory:(id)arg5;
- (double)interval;
- (bool)isWaitingToRun;
- (id)lastSuccessfulRunDate;
- (id)loggingCategory;
- (id)name;
- (void)reset;
- (void)synthesizeActivityFire;

@end
