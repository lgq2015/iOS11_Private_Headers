/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRouteConnection : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    void * _externalDevice;
    bool  _invalidated;
    id /* block */  _invalidationHandler;
    NSMutableArray * _pendingConnectionHandlers;
    id /* block */  _receivedCustomDataHandler;
}

@property (getter=isConnected, nonatomic, readonly) bool connected;
@property (nonatomic, readonly) void*externalDevice;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ receivedCustomDataHandler;

- (void).cxx_destruct;
- (void)_connectionDidReceiveCustomData:(id)arg1;
- (void)_connectionStateDidChange:(unsigned int)arg1 error:(id)arg2;
- (void)becomeActiveOriginWithCompletionHandler:(id /* block */)arg1;
- (void)connectWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void*)externalDevice;
- (id)initWithExternalDevice:(void*)arg1;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (bool)isConnected;
- (bool)isInvalidated;
- (id /* block */)receivedCustomDataHandler;
- (void)resignActiveOriginWithCompletionHandler:(id /* block */)arg1;
- (void)sendCustomData:(id)arg1;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setReceivedCustomDataHandler:(id /* block */)arg1;

@end
