/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaRemoteMiddlewareMetadataOperation : MPAsyncOperation <MPMiddlewareOperation> {
    id /* block */  _invalidationHandler;
    NSArray * _invalidationObservers;
    MPCMediaRemoteMiddleware * _middleware;
    MPCFuture * _playQueueIdentifiersFuture;
    MPCPlayerRequest * _playerRequest;
    MPCFuture * _playingIdentifierFuture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) NSArray *invalidationObservers;
@property (nonatomic, retain) MPCMediaRemoteMiddleware *middleware;
@property (nonatomic, retain) MPCFuture *playQueueIdentifiersFuture;
@property (nonatomic, retain) MPCPlayerRequest *playerRequest;
@property (nonatomic, retain) MPCFuture *playingIdentifierFuture;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadItemsWithCompletion:(id /* block */)arg1;
- (void)_loadPlayingIdentifierWithCompletion:(id /* block */)arg1;
- (void)execute;
- (id)initWithMiddleware:(id)arg1 playerRequest:(id)arg2;
- (id /* block */)invalidationHandler;
- (id)invalidationObservers;
- (id)middleware;
- (id)playQueueIdentifiersFuture;
- (id)playerRequest;
- (id)playingIdentifierFuture;
- (struct _MSVSignedRange { long long x1; long long x2; })rangeFromTracklistRange:(struct { long long x1; long long x2; })arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMiddleware:(id)arg1;
- (void)setPlayQueueIdentifiersFuture:(id)arg1;
- (void)setPlayerRequest:(id)arg1;
- (void)setPlayingIdentifierFuture:(id)arg1;
- (id)timeoutDescription;

@end
