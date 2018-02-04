/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriTether : NSObject {
    id /* block */  _attachmentStatusChangedHandler;
    NSObject<OS_xpc_object> * _connection;
    bool  _isAttached;
    int  _notifyToken;
    NSMutableArray * _pendingEvents;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_attach:(id /* block */)arg1;
- (void)_attachmentStatusUpdate:(bool)arg1;
- (id)_connection;
- (void)_connectionInterrupted:(id)arg1;
- (void)_connectionInvalid:(id)arg1;
- (void)_listenForLaunchNotification;
- (void)_logEvent:(id)arg1;
- (void)attach:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (void)setAttachmentStatusChangedHandler:(id /* block */)arg1;
- (void)waitForAttachment:(double)arg1;

@end
