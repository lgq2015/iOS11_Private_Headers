/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCQueueManager : NSObject {
    bool  _canSend;
    NSMutableDictionary * _inFlightMessages;
    bool  _messageOutstanding;
    NSMutableArray * _messageQueue;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property bool canSend;
@property (retain) NSMutableDictionary *inFlightMessages;
@property bool messageOutstanding;
@property (retain) NSMutableArray *messageQueue;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)allowMessageSending;
- (bool)canSend;
- (void)cancelQueuedMessages;
- (void)handleSentMessageWithIdentifier:(id)arg1 error:(id)arg2;
- (id)inFlightMessages;
- (id)init;
- (bool)messageOutstanding;
- (id)messageQueue;
- (void)onqueue_allowMessageSending;
- (void)onqueue_attemptToSend;
- (void)onqueue_cancelDaemonMessages;
- (void)onqueue_cancelQueuedMessages;
- (void)onqueue_clearQueuedMessages;
- (void)onqueue_dequeueMessage;
- (void)onqueue_enqueueMessage:(id)arg1;
- (void)onqueue_handleAcceptanceWithCurrentAccepted:(bool)arg1 nextAvailable:(bool)arg2;
- (void)onqueue_handleFailedDaemonConnectionForQueuedMessage:(id)arg1;
- (void)onqueue_handleSentMessageWithIdentifier:(id)arg1 error:(id)arg2;
- (id)onqueue_peekMessage;
- (void)onqueue_sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCanSend:(bool)arg1;
- (void)setInFlightMessages:(id)arg1;
- (void)setMessageOutstanding:(bool)arg1;
- (void)setMessageQueue:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
