/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFMyriadCoordinator : NSObject <WPHeySiriProtocol> {
    bool  _BTLEReady;
    bool  _clientIsDirectActivating;
    bool  _clientIsListeningAfterRecentWin;
    bool  _clientIsWatchActivation;
    bool  _clientLostDueToTrumping;
    bool  _clientRecentlyLostElection;
    bool  _coordinationEnabled;
    _DKKnowledgeStore * _coreDuetStore;
    NSDateFormatter * _dateFormat;
    id  _delegate;
    NSUUID * _designatedSelfID;
    int  _deviceAdjust;
    NSString * _deviceClass;
    unsigned char  _deviceGroup;
    bool  _ducking;
    WPHeySiri * _heySiriBTLE;
    bool  _inTask;
    BOOL  _incomingAdjustment;
    bool  _lastDecision;
    unsigned long long  _lastDecisionTime;
    unsigned short  _lastPHash;
    NSDate * _lastSiriActivationTime;
    bool  _listenTimerIsRunning;
    NSObject<OS_dispatch_queue> * _myriadReadinessQueue;
    unsigned long long  _myriadState;
    NSObject<OS_dispatch_queue> * _myriadTimerManagementQueue;
    NSObject<OS_dispatch_queue> * _myriadWaitWiProxQueue;
    NSObject<OS_dispatch_queue> * _myriadWorkQueue;
    int  _nDeltaTs;
    int  _nTimesContinued;
    int  _nTimesExtended;
    unsigned long long  _nextState;
    AFPowerAssertionManager * _powerAssertionManager;
    unsigned long long  _previousState;
    NSMutableDictionary * _replies;
    NSMutableDictionary * _replyCounts;
    bool  _supportsExtended;
    NSObject<OS_dispatch_source> * _timer;
    NSString * _timerLabel;
    NSObject<OS_dispatch_source> * _timerSource;
    AFMyriadRecord * _triggerRecord;
    NSDate * _triggerTime;
    NSObject<OS_dispatch_semaphore> * _wiproxReadinessSemaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)clearCurrentCoordinator;
+ (id)currentCoordinator;

- (void).cxx_destruct;
- (void)_CreateDispatchTimerFor:(double)arg1 toExecute:(id /* block */)arg2;
- (void)_CreateDispatchTimerForEvent:(id)arg1 toExecute:(id /* block */)arg2;
- (void)_advertise:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 andMoveTo:(unsigned long long)arg4;
- (void)_advertise:(id)arg1 andMoveTo:(unsigned long long)arg2;
- (void)_advertiseIndefinite:(id)arg1;
- (void)_advertiseSuppressTriggerInOutput;
- (void)_advertiseTrigger;
- (void)_advertiseWith:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 thenExecute:(id /* block */)arg4;
- (void)_duringNextWindowEnterState:(unsigned long long)arg1;
- (void)_duringNextWindowExecute:(id /* block */)arg1;
- (void)_enterState:(unsigned long long)arg1;
- (void)_initDeviceClassAndAdjustments;
- (bool)_okayToSuppressOnOutput;
- (void)_resetActionWindows;
- (void)_setupActionWindows;
- (bool)_shouldContinueFor:(id)arg1;
- (id)_sortedReplies;
- (void)_startAdvertisingFromVoiceTrigger;
- (void)_startAdvertisingFromVoiceTriggerAdjusted:(BOOL)arg1;
- (void)_startListenTimer;
- (void)_startTimer:(id)arg1 for:(float)arg2 thenEnterState:(unsigned long long)arg3;
- (void)_startTimer:(id)arg1 for:(float)arg2 thenExecute:(id /* block */)arg3;
- (void)_startTimer:(id)arg1 until:(id)arg2 thenExecute:(id /* block */)arg3;
- (id)_stateAsString;
- (id)_stateAsString:(unsigned long long)arg1;
- (void)_stopAdvertisingAndListening;
- (void)_unduck;
- (void)_waitWiProx:(long long)arg1 andExecute:(id /* block */)arg2;
- (void)_waitWiProxAndExecute:(id /* block */)arg1;
- (void)_waitWiProxForeverAndExecute:(id /* block */)arg1;
- (id)activityEventStream;
- (void)advertiseWith:(id)arg1;
- (void)advertiseWith:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3;
- (id)continuationRecord;
- (void)dealloc;
- (id)directTriggerRecord;
- (id)emergencyHandledRecord;
- (id)emergencyRecord;
- (void)endAdvertising;
- (void)endAdvertisingAfterDelay:(float)arg1;
- (void)endAdvertisingWithDeviceProhibitions:(id)arg1;
- (void)endTask;
- (void)heySiri:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
- (void)heySiri:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)heySiri:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
- (void)heySiriAdvertisingPending:(id)arg1;
- (void)heySiriDidUpdateState:(id)arg1;
- (void)heySiriStartedAdvertising:(id)arg1;
- (void)heySiriStartedScanning:(id)arg1;
- (void)heySiriStoppedAdvertising:(id)arg1;
- (void)heySiriStoppedScanning:(id)arg1;
- (bool)inTask;
- (id)initWithDelegate:(id)arg1;
- (id)lateSuppressionRecord;
- (void)logCoreDuetResults:(id)arg1;
- (unsigned short)recentEventBump;
- (void)resetReplies;
- (id)responseObject:(unsigned short)arg1;
- (void)startAdvertising:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3;
- (void)startAdvertisingEmergencyHandled;
- (void)startAdvertisingFromDirectTrigger;
- (void)startAdvertisingFromInTaskVoiceTrigger;
- (void)startAdvertisingFromOutgoingTrigger;
- (void)startAdvertisingFromVoiceTrigger;
- (void)startAdvertisingFromVoiceTriggerAdjusted:(BOOL)arg1;
- (void)startListening;
- (void)startResponseAdvertising:(unsigned short)arg1;
- (void)startWatchAdvertisingFromVoiceTrigger;
- (void)stopListening;
- (id)voiceTriggerRecord;

@end
