/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

@interface SASProximitySession : NSObject <SASProximitySessionProtocol> {
    NSObject<OS_dispatch_queue> * _actionQueue;
    CUMessageSession * _messageSession;
    bool  connected;
    <SASProximitySessionDelegate> * delegate;
    CUMessageSession * sharingMessageSession;
}

@property (retain) NSObject<OS_dispatch_queue> *actionQueue;
@property (getter=isConnected) bool connected;
@property (readonly, copy) NSString *debugDescription;
@property <SASProximitySessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) CUMessageSession *messageSession;
@property (retain) CUMessageSession *sharingMessageSession;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionFromData:(id)arg1;
- (id)actionQueue;
- (void)activate;
- (id)delegate;
- (void)handleAction:(id)arg1;
- (id)init;
- (void)invalidate;
- (bool)isConnected;
- (id)messageSession;
- (void)receivedAction:(id)arg1 response:(id /* block */)arg2;
- (id)sendAction:(id)arg1;
- (void)setActionQueue:(id)arg1;
- (void)setConnected:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMessageSession:(id)arg1;
- (void)setSharingMessageSession:(id)arg1;
- (id)sharingMessageSession;

@end
