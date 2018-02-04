/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaRemoteMiddlewarePlaybackStateOperation : MPAsyncOperation <MPMiddlewareOperation> {
    id /* block */  _invalidationHandler;
    NSArray * _invalidationObservers;
    MPCMediaRemoteMiddleware * _middleware;
    MPCFuture * _playbackStateFuture;
    MPCPlayerRequest * _playerRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) NSArray *invalidationObservers;
@property (nonatomic, retain) MPCMediaRemoteMiddleware *middleware;
@property (nonatomic, retain) MPCFuture *playbackStateFuture;
@property (nonatomic, retain) MPCPlayerRequest *playerRequest;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithMiddleware:(id)arg1 playerRequest:(id)arg2;
- (id /* block */)invalidationHandler;
- (id)invalidationObservers;
- (id)middleware;
- (id)playbackStateFuture;
- (id)playerRequest;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMiddleware:(id)arg1;
- (void)setPlaybackStateFuture:(id)arg1;
- (void)setPlayerRequest:(id)arg1;
- (id)timeoutDescription;

@end
