/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAchievementDefinitionAlertManager : NSObject <HDAchievementAssetObserver, HDAchievementDefinitionAlertSuppressorDelegate, HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver> {
    <HDAchievementDefinitionAlertNotifier> * _alertNotifier;
    <HDAchievementDefinitionAlertSuppressor> * _alertSuppressor;
    HDBackgroundTaskScheduler * _backgroundTaskScheduler;
    NSDate * _dateOverride;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    _HKDelayedOperation * _updateOperation;
    bool  _waitingToRunAfterFirstUnlock;
}

@property (nonatomic, readonly) <HDAchievementDefinitionAlertNotifier> *alertNotifier;
@property (nonatomic, retain) NSDate *dateOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_availableDefinitionIdentifiersWithProfile:(id)arg1 error:(id*)arg2;
+ (void)_clearBookkeepingKeyValuesWithProfile:(id)arg1;
+ (id)_definitionIdentifiersInAlertedState:(unsigned long long)arg1 amongDefinitions:(id)arg2 withProfile:(id)arg3 error:(id*)arg4;
+ (id)_findDefinitionsToAlertWithProfile:(id)arg1 currentDate:(id)arg2 amongDefinitions:(id)arg3 getExpiredDefinitions:(id*)arg4;
+ (id)_findNextDefinitionToScheduleAmongDefinitions:(id)arg1 withCurrentDate:(id)arg2;
+ (bool)_resetAlertedStatesWithProfile:(id)arg1 error:(id*)arg2;
+ (bool)_resetAvailabilityStatesWithProfile:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)_beginObservingDefinitionAvailabilityFactors;
- (void)_definitionAvailabilityDidChange;
- (void)_queue_cleanUpIdentifierAvailabilityWithAvailableIdentifiers:(id)arg1;
- (void)_queue_findAndNotifyAlerts;
- (bool)_queue_markDefinitions:(id)arg1 asAlertedState:(unsigned long long)arg2;
- (void)_queue_markDefinitionsAvailable:(id)arg1;
- (void)_queue_rescheduleBackgroundTaskWithDefinitions:(id)arg1;
- (void)_queue_rescheduleTaskAndUpdateAlertedStates;
- (void)_rescheduleTaskAndUpdateAlertedStates;
- (void)_synthesizeAlert;
- (void)_timeZoneDidChange:(id)arg1;
- (void)_unprotectedUserDefaultKeysDidSync:(id)arg1;
- (void)achievementDefinitionsDidChangeToDefinitions:(id)arg1;
- (id)alertNotifier;
- (void)alertSuppressionStatusDidChange:(id)arg1;
- (id)currentDate;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (id)dateOverride;
- (void)dealloc;
- (id)definitionIdentifiersInAlertedState:(unsigned long long)arg1 withError:(id*)arg2;
- (id)initWithProfile:(id)arg1 backgroundTaskScheduler:(id)arg2 alertSuppressor:(id)arg3 alertNotifier:(id)arg4;
- (bool)markDefinitionIdentifiers:(id)arg1 asAlertedState:(unsigned long long)arg2 error:(id*)arg3;
- (bool)markDefinitionIdentifiers:(id)arg1 asAvailable:(bool)arg2 error:(id*)arg3;
- (id)nextScheduledTaskDate;
- (bool)resetAlertedStatesWithError:(id*)arg1;
- (bool)resetAvailabilityStatesWithError:(id*)arg1;
- (void)setDateOverride:(id)arg1;
- (id)unviewedDefinitionsWithError:(id*)arg1;
- (bool)wantsToAlert;

@end
