/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPSystemService : NSObject {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    RPService * _service;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_cleanup;
- (void)_handleRequestSystemInfo:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;

@end
