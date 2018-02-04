/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATTaskClient : NSObject <CATTransportDelegate> {
    <CATTaskClientDelegate> * _delegate;
    NSDictionary * _serverUserInfo;
    NSUUID * _sessionUUID;
    NSDictionary * _userInfo;
    NSMutableSet * mActiveRemoteTaskOperations;
    NSMutableArray * mEnqueuedMessages;
    NSMutableArray * mEnqueuedTaskUUIDs;
    CATStateMachine * mFSM;
    bool  mIsStarting;
    NSHashTable * mOrphanedTransports;
    NSMapTable * mRemoteTaskByUUID;
    NSObject<OS_dispatch_group> * mSessionDidInvalidateGroup;
    CATTaskClient * mStrongSelf;
    CATTransport * mTransport;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CATTaskClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *serverUserInfo;
@property (nonatomic, retain) NSUUID *sessionUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CATTransport *transport;
@property (nonatomic, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (void)abandonTransport;
- (void)abandonTransportClearQueuedMessagesAndCancelAllOperationsWithError:(id)arg1;
- (void)activeOperationDidFinish:(id)arg1;
- (id)captureTransport;
- (void)clearQueuedMessagesAndCancelAllOperationsWithError:(id)arg1;
- (void)connectWithTransport:(id)arg1;
- (void)connectWithTransportFromTaskClient:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)delegateDidConnect;
- (void)delegateDidDisconnect;
- (void)delegateDidInterruptWithError:(id)arg1;
- (void)delegateDidInvalidate;
- (void)delegateDidInvalidateAndFinalize;
- (void)delegateWillInvalidate;
- (void)delegateWillInvalidateAndInvalidateSessionWithError:(id)arg1;
- (void)delegatedidReceiveNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (id)description;
- (void)didPrepareTaskOperation:(id)arg1;
- (void)disconnect;
- (void)enqueueMessage:(id)arg1;
- (void)enqueueTaskOperation:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)invalidateWithError:(id)arg1;
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (id)prepareTaskOperationForRequest:(id)arg1;
- (void)processNotificationMessage:(id)arg1;
- (void)processSessionMessage:(id)arg1;
- (void)processTaskMessage:(id)arg1;
- (void)remoteTaskOperation:(id)arg1 preparedMessage:(id)arg2;
- (void)resumeCapturedTransportFromTaskClient:(id)arg1;
- (void)resumeSession;
- (void)resumeTransport:(id)arg1;
- (void)resumeWithTaskUUIDs:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)sendMessageThroughTransport:(id)arg1;
- (id)serverUserInfo;
- (void)sessionDidInvalidate;
- (void)sessionResumedWithTaskUUIDs:(id)arg1;
- (id)sessionUUID;
- (void)setDelegate:(id)arg1;
- (void)setServerUserInfo:(id)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)taskOperationDidFailWithInvalidTaskClient:(id)arg1;
- (void)trackTaskOperation:(id)arg1;
- (id)transport;
- (void)transport:(id)arg1 didFailToSendMessage:(id)arg2 error:(id)arg3;
- (void)transport:(id)arg1 didInterruptWithError:(id)arg2;
- (void)transport:(id)arg1 didReceiveMessage:(id)arg2;
- (void)transport:(id)arg1 didSendMessage:(id)arg2;
- (void)transportDidInvalidate:(id)arg1;
- (void)transportDidResume:(id)arg1;
- (id)userInfo;

@end
