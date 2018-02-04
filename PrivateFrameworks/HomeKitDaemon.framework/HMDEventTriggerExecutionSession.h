/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDEventTriggerExecutionSession : HMDEventTriggerSession <HMDEventDelegate, HMFDumpState, HMFLogging, HMFTimerDelegate> {
    bool  _actionSetExecutionInProgress;
    NSArray * _actionSets;
    NSMutableArray * _causingDevices;
    NSArray * _endEvents;
    NSPredicate * _evaluationCondition;
    bool  _executionCompleteCalled;
    unsigned long long  _executionState;
    HomeKitEventTriggerExecutionSessionEvent * _metricEvent;
    NSArray * _monitorEvents;
    HMDPredicateUtilities * _predicateUtilities;
    NSArray * _recurrences;
    bool  _restoreInProgress;
    HMDTriggerConfirmationTimer * _secureTriggerConfirmationTimer;
    HMFTimer * _startCharacteristicsMonitorTimer;
    NSMutableArray * _triggerEvents;
    HMDEventTriggerUserConfirmationSession * _userConfirmationSession;
    NSMapTable * _writeRequests;
}

@property (nonatomic) bool actionSetExecutionInProgress;
@property (nonatomic, readonly) NSArray *actionSets;
@property (nonatomic, readonly) NSMutableArray *causingDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *endEvents;
@property (nonatomic, readonly) NSPredicate *evaluationCondition;
@property (nonatomic) bool executionCompleteCalled;
@property (nonatomic) unsigned long long executionState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HomeKitEventTriggerExecutionSessionEvent *metricEvent;
@property (nonatomic, retain) NSArray *monitorEvents;
@property (nonatomic, readonly) bool needsUserConfirmation;
@property (nonatomic, readonly) HMDPredicateUtilities *predicateUtilities;
@property (nonatomic, readonly) NSArray *recurrences;
@property (nonatomic) bool restoreInProgress;
@property (nonatomic, retain) HMDTriggerConfirmationTimer *secureTriggerConfirmationTimer;
@property (nonatomic, retain) HMFTimer *startCharacteristicsMonitorTimer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableArray *triggerEvents;
@property (nonatomic, readonly) HMDEventTriggerUserConfirmationSession *userConfirmationSession;
@property (nonatomic, retain) NSMapTable *writeRequests;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_activateDurationEvents;
- (void)_activateEvents:(id)arg1;
- (void)_activateMonitoringEvents;
- (void)_addEvent:(id)arg1 causingDevice:(id)arg2;
- (void)_callExecutionComplete:(id)arg1;
- (void)_callExecutionComplete:(id)arg1 callDelegate:(bool)arg2;
- (id)_createMonitoringEvents:(id)arg1;
- (void)_directlyExecuteActionSetsWithCompletionHandler:(id /* block */)arg1;
- (void)_evaluateFiringTrigger;
- (void)_executeTriggerAfterEvaluatingCondition:(id)arg1;
- (void)_handleActionSetExecutionResponse:(id)arg1 actionSetError:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleMonitoringEvent:(id)arg1;
- (void)_removeUserDialog;
- (void)_restoreState;
- (void)_submitMetric:(id)arg1;
- (void)_userResponse:(unsigned long long)arg1 device:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionSetExecutionInProgress;
- (id)actionSets;
- (void)addEvent:(id)arg1 causingDevice:(id)arg2;
- (void)cancelSessionIfWaitingForUserResponse;
- (id)causingDevices;
- (bool)containsSecureActionSet;
- (void)dealloc;
- (id)description;
- (id)didOccurEvent:(id)arg1 causingDevice:(id)arg2;
- (id)dumpState;
- (id)durationEndEvents;
- (id)endEvents;
- (void)evaluateFiringTrigger;
- (id)evaluationCondition;
- (bool)executionCompleteCalled;
- (unsigned long long)executionState;
- (id)initWithEventTrigger:(id)arg1 predicateUtilities:(id)arg2 triggerEvent:(id)arg3 causingDevice:(id)arg4 workQueue:(id)arg5 actionSets:(id)arg6 evaluationCondition:(id)arg7 recurrences:(id)arg8 endEvents:(id)arg9 msgDispatcher:(id)arg10;
- (id)logIdentifier;
- (id)metricEvent;
- (id)monitorEvents;
- (bool)needsUserConfirmation;
- (void)postponeRestoreIfWaitingForEndEvent;
- (id)predicateUtilities;
- (id)recurrences;
- (bool)restoreInProgress;
- (id)secureTriggerConfirmationTimer;
- (void)setActionSetExecutionInProgress:(bool)arg1;
- (void)setExecutionCompleteCalled:(bool)arg1;
- (void)setExecutionState:(unsigned long long)arg1;
- (void)setMonitorEvents:(id)arg1;
- (void)setRestoreInProgress:(bool)arg1;
- (void)setSecureTriggerConfirmationTimer:(id)arg1;
- (void)setStartCharacteristicsMonitorTimer:(id)arg1;
- (void)setWriteRequests:(id)arg1;
- (id)startCharacteristicsMonitorTimer;
- (void)timerDidFire:(id)arg1;
- (id)triggerEvents;
- (id)userConfirmationSession;
- (void)userResponse:(unsigned long long)arg1 device:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)valueInActionSetWriteResponse:(id)arg1 actionSetUUID:(id)arg2 accUUID:(id)arg3 serviceID:(id)arg4 characteristicID:(id)arg5;
- (id)writeRequests;

@end
