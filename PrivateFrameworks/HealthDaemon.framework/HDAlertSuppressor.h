/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAlertSuppressor : NSObject <HDProcessStateObserver> {
    _HDWorkoutData * _lastWorkoutData;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _suppressActivityKeepaliveTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearSuppressionTimer;
- (void)_invalidateSuppressActivityAlertsForSuspendedProcess:(id)arg1;
- (void)_invalidateSuppressActivityAlertsForWorkout:(id)arg1;
- (void)_startAlertSuppressionTimerForWorkout:(id)arg1;
- (void)_suppressActivityAlertsForWorkout:(id)arg1;
- (id)initWithProfile:(id)arg1 queue:(id)arg2;
- (void)processDidEnterBackground:(id)arg1;
- (void)processDidEnterForeground:(id)arg1;
- (void)processResumed:(id)arg1;
- (void)processSuspended:(id)arg1;
- (void)processTerminated:(id)arg1;
- (void)workoutStarted:(id)arg1;
- (void)workoutStopped:(id)arg1;

@end
