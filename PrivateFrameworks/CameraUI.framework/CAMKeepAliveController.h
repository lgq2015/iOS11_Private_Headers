/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMKeepAliveController : NSObject {
    NSObject<OS_xpc_object> * __connection;
    NSObject<OS_dispatch_queue> * __heartbeatQueue;
    NSObject<OS_dispatch_source> * __heartbeatSource;
    NSObject<OS_dispatch_queue> * __keepAliveQueue;
}

@property (setter=_setConnection:, nonatomic, retain) NSObject<OS_xpc_object> *_connection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_heartbeatQueue;
@property (setter=_setHeartbeatSource:, nonatomic, retain) NSObject<OS_dispatch_source> *_heartbeatSource;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_keepAliveQueue;

- (void).cxx_destruct;
- (id)_connection;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_handleHeartbeatConnectionReply:(id)arg1;
- (void)_handleHeartbeatSourceEvent;
- (id)_heartbeatQueue;
- (id)_heartbeatSource;
- (id)_keepAliveQueue;
- (void)_keepAliveQueueCreateConnectionIfNecessary;
- (void)_keepAliveQueueCreateHeartbeatIfNecessary;
- (void)_keepAliveQueueTeardownConnection;
- (void)_keepAliveQueueTeardownHeartbeat;
- (void)_setConnection:(id)arg1;
- (void)_setHeartbeatSource:(id)arg1;
- (void)_setupConnectionIfNecessary;
- (void)_teardownConnection;
- (void)_teardownHeartbeat;
- (void)dealloc;
- (id)init;
- (void)sendCameraRollVisibilityChangedMessage:(bool)arg1;
- (void)startKeepAliveSession;
- (void)stopKeepAliveSession;

@end
