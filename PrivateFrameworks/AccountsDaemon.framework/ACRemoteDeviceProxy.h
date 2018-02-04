/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACRemoteDeviceProxy : NSObject <IDSServiceDelegate> {
    NSMutableDictionary * _completionHandlersByInternalMessageID;
    NSLock * _completionHandlersLock;
    NSMutableDictionary * _internalMessageIDsByTransportID;
    IDSService * _messageSendingService;
    ACRemoteCommandHandler * _remoteCommandHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dequeueCompletionHandlersForMessageWithInternalID:(id)arg1 success:(bool)arg2 result:(id)arg3 error:(id)arg4;
- (void)_dequeueCompletionHandlersForMessageWithTransportID:(id)arg1 success:(bool)arg2 result:(id)arg3 error:(id)arg4;
- (void)_enqueueCompletionHandler:(id /* block */)arg1 forMessageWithInternalID:(id)arg2 transportID:(id)arg3;
- (bool)_isValidCommandForOutgoingMessage:(id)arg1;
- (long long)_priorityForMessageCarryingCommand:(id)arg1;
- (bool)_sendMessageData:(id)arg1 toDestination:(id)arg2 withPriority:(long long)arg3 bypassDuet:(bool)arg4 transportID:(id*)arg5 error:(id*)arg6;
- (void)_sendReplyForMessage:(id)arg1 withSuccess:(bool)arg2 result:(id)arg3 error:(id)arg4;
- (id)identityServicesCommandQueue;
- (id)init;
- (void)sendCommand:(id)arg1 withAccount:(id)arg2 completion:(id /* block */)arg3;
- (void)sendCommand:(id)arg1 withAccount:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;

@end
