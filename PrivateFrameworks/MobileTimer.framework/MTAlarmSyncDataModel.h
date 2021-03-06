/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTAlarmSyncDataModel : NSObject <MTAgentDiagnosticDelegate, MTAlarmObserver, MTSource, MTSyncDataModel> {
    <MTAlarmStorage> * _alarmStorage;
    NSMutableArray * _pendingChanges;
    <NAScheduler> * _serializer;
    <MTSyncService> * _syncService;
    <MTSyncStorage> * _syncStorage;
}

@property (nonatomic, readonly) <MTAlarmStorage> *alarmStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *pendingChanges;
@property (nonatomic, readonly) <NAScheduler> *serializer;
@property (readonly) Class superclass;
@property (nonatomic) <MTSyncService> *syncService;
@property (nonatomic, readonly) <MTSyncStorage> *syncStorage;

+ (unsigned long long)_dismissActionForTriggerType:(unsigned long long)arg1;
+ (bool)_doesChange:(id)arg1 conflictWithChange:(id)arg2;
+ (bool)_doesStateChange:(id)arg1 conflictWithChange:(id)arg2;
+ (id)_mergeAlarmChange:(id)arg1 intoState:(id)arg2;
+ (id)_mergeStateChange:(id)arg1 intoState:(id)arg2;
+ (unsigned long long)_snoozeActionForTriggerType:(unsigned long long)arg1;
+ (unsigned long long)_triggerTypeForDismissAction:(unsigned long long)arg1;
+ (unsigned long long)_triggerTypeForSnoozeAction:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_mergeAndFlattenChanges:(id)arg1;
- (void)_mergeStateChange:(id)arg1;
- (void)_performAction:(id)arg1;
- (void)_reconcileExistingChangesWithIncomingChange:(id)arg1 changeToApplyBlock:(id /* block */)arg2;
- (void)_writePendingChanges;
- (id)alarmStorage;
- (id)changes;
- (id)everything;
- (void)handleIncomingAdd:(id)arg1;
- (void)handleIncomingDelete:(id)arg1;
- (void)handleIncomingReset;
- (void)handleIncomingUpdate:(id)arg1;
- (void)handleSentChanges:(id)arg1;
- (id)initWithAlarmStorage:(id)arg1 syncStorage:(id)arg2;
- (id)initWithAlarmStorage:(id)arg1 syncStorage:(id)arg2 scheduler:(id)arg3;
- (void)loadSyncData;
- (id)pendingChanges;
- (void)printDiagnostics;
- (id)serializer;
- (void)setSyncService:(id)arg1;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didFireAlarm:(id)arg2;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (id)sourceIdentifier;
- (long long)supportedDataClasses;
- (id)syncService;
- (id)syncStorage;

@end
