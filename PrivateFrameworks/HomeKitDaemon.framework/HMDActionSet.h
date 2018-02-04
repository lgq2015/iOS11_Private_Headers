/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDActionSet : HMFObject <HMDBackingStoreObjectProtocol, HMFDumpState, HMFMessageReceiver, NSSecureCoding> {
    HMDApplicationData * _appData;
    NSMutableArray * _currentActions;
    bool  _executionInProgress;
    HMDHome * _home;
    NSDate * _lastExecutionDate;
    HMFMessageDispatcher * _msgDispatcher;
    NSString * _name;
    NSString * _type;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, retain) HMDApplicationData *appData;
@property (nonatomic, retain) NSMutableArray *currentActions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool executionInProgress;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, retain) NSDate *lastExecutionDate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) NSString *serializedIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)isBuiltinActionSetType:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_execute:(id)arg1 captureCurrentState:(bool)arg2 writeRequestTuples:(id)arg3;
- (void)_executeWriteAction:(id)arg1 captureCurrentState:(bool)arg2 writeRequestTuples:(id)arg3;
- (bool)_fixupActions;
- (id)_generateOverallError:(id)arg1;
- (void)_handleAddActionRequest:(id)arg1;
- (void)_handleAddActionTransaction:(id)arg1 message:(id)arg2;
- (void)_handleRemoveAction:(id)arg1 message:(id)arg2;
- (void)_handleRemoveActionRequest:(id)arg1;
- (void)_handleRemoveActionTransaction:(id)arg1 message:(id)arg2;
- (void)_handleRemoveAppDataModel:(id)arg1 message:(id)arg2;
- (void)_handleRenameActionSetTransaction:(id)arg1 message:(id)arg2;
- (void)_handleRenameRequest:(id)arg1;
- (void)_handleReplaceActionValueRequest:(id)arg1;
- (void)_handleUpdateAppDataModel:(id)arg1 message:(id)arg2;
- (void)_issueReadRequests:(id)arg1;
- (void)_issueWriteRequests:(id)arg1 readResponse:(id)arg2 message:(id)arg3;
- (void)_logDuetEvent:(id)arg1 endDate:(id)arg2 message:(id)arg3;
- (void)_logDuetRoomEvent;
- (id)_logExecuteAction:(id)arg1;
- (void)_processActionSetModelUpdated:(id)arg1 message:(id)arg2;
- (void)_registerForMessages;
- (void)_removeAction:(id)arg1 message:(id)arg2;
- (id)actionWithUUID:(id)arg1;
- (id)actions;
- (id)allCharacteristicsInActionsForServices:(id)arg1;
- (id)appData;
- (id)assistantObject;
- (id)backingStoreObjects:(long long)arg1;
- (bool)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (bool)containsSecureCharacteristic;
- (id)currentActions;
- (void)dealloc;
- (id)description;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (void)execute:(id)arg1;
- (void)executeWithTriggerSource:(id)arg1 captureCurrentState:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)executionInProgress;
- (void)handleExecutionCompleted:(id)arg1 startDate:(id)arg2 error:(id)arg3 readResponse:(id)arg4 response:(id)arg5;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2 type:(id)arg3 home:(id)arg4 queue:(id)arg5;
- (id)lastExecutionDate;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)msgDispatcher;
- (id)name;
- (void)removeAccessory:(id)arg1;
- (void)removeActionForCharacteristic:(id)arg1;
- (void)removeService:(id)arg1;
- (id)serializedIdentifier;
- (void)setAppData:(id)arg1;
- (void)setCurrentActions:(id)arg1;
- (void)setExecutionInProgress:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setLastExecutionDate:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)type;
- (id)url;
- (id)uuid;
- (id)workQueue;

@end
