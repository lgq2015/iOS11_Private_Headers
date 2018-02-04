/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaRemoteMiddlewareControllerOperation : MPAsyncOperation <MPCMediaRemoteMiddlewareControllerProviding, MPMiddlewareAutomaticDependencyOperation> {
    MPCFuture * _controllerFuture;
    struct NSMapTable { Class x1; } * _inputOperations;
    id /* block */  _invalidationHandler;
    NSArray * _invalidationObservers;
    MPCMediaRemoteMiddleware * _middleware;
    MPCPlayerRequest * _playerRequest;
}

@property (nonatomic, readonly) MPCMediaRemoteController *controller;
@property (nonatomic, retain) MPCFuture *controllerFuture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *inputOperations;
@property (nonatomic, readonly) NSArray *inputsProtocols;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) NSArray *invalidationObservers;
@property (nonatomic, retain) MPCMediaRemoteMiddleware *middleware;
@property (nonatomic, readonly) NSArray *outputProtocols;
@property (nonatomic, retain) MPCPlayerRequest *playerRequest;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)controller;
- (id)controllerFuture;
- (void)execute;
- (id)initWithMiddleware:(id)arg1 playerRequest:(id)arg2;
- (struct NSMapTable { Class x1; }*)inputOperations;
- (id)inputsProtocols;
- (id /* block */)invalidationHandler;
- (id)invalidationObservers;
- (id)middleware;
- (id)outputProtocols;
- (id)playerRequest;
- (void)setControllerFuture:(id)arg1;
- (void)setInputOperations:(struct NSMapTable { Class x1; }*)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMiddleware:(id)arg1;
- (void)setPlayerRequest:(id)arg1;
- (id)timeoutDescription;

@end
