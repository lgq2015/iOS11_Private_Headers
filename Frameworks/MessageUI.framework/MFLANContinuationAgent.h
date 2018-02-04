/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFLANContinuationAgent : NSObject {
    id /* block */  _connectCallbackBlock;
    MFLANContinuationContext * _continuationContext;
    struct __CFRunLoopSource { } * _serverRunLoopSource;
    bool  _serverRunning;
    struct __CFSocket { } * _socket;
}

@property (nonatomic, readonly) MFLANContinuationContext *continuationContext;
@property (nonatomic, readonly) bool serverRunning;

- (void)_cleanupRunLoopSource;
- (void)_cleanupSocket;
- (id)_getDeviceHostname;
- (void)_socketListenerRunLoop;
- (void)connectToServerWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)continuationContext;
- (void)dealloc;
- (id)init;
- (bool)serverRunning;
- (id)startServerWithCompletion:(id /* block */)arg1;
- (void)stopServer;

@end
