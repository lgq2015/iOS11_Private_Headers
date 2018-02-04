/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPSystemSession : NSObject {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    RPDevice * _peerDevice;
    id /* block */  _promptForPINHandler;
    RPSession * _rpSession;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) RPDevice *peerDevice;
@property (nonatomic, copy) id /* block */ promptForPINHandler;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_cleanup;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (id /* block */)errorHandler;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)peerDevice;
- (id /* block */)promptForPINHandler;
- (void)requestSystemInfoWithCompletion:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setPromptForPINHandler:(id /* block */)arg1;

@end
