/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

@interface MediaControlClient : NSObject {
    struct MediaControlClientImp { } * _client;
    id /* block */  _eventHandlerBlock;
    NSObject<OS_dispatch_queue> * _eventHandlerQueue;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void)checkAuthentication;
- (void)dealloc;
- (void)ensureConnected;
- (void)ensureDisconnected;
- (void)getProperty:(id)arg1 qualifier:(id)arg2 completionQueue:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)getSlideshowFeaturesWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)getSlideshowInfoWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)init;
- (struct MediaControlClientImp { }*)internalClient;
- (void)invalidate;
- (void)performRemoteAction:(id)arg1 withParams:(id)arg2 completionQueue:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)sendPhotoData:(id)arg1 completionQueue:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)sendPhotoData:(id)arg1 options:(id)arg2 completionQueue:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)setEventHandlerQueue:(id)arg1 eventHandlerBlock:(id /* block */)arg2;
- (void)setHost:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completionQueue:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)setSlideshowInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)startPresentation:(id)arg1 completionQueue:(id)arg2 completionBlock:(id /* block */)arg3;

@end
