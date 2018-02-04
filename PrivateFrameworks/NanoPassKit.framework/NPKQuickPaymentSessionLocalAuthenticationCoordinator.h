/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKQuickPaymentSessionLocalAuthenticationCoordinator : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    LAContext * _completedContext;
    NSData * _completedCredential;
    NSError * _completedError;
    id /* block */  _completionHandler;
    LAContext * _inProgressContext;
    NSObject<OS_dispatch_queue> * _localAuthenticationQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) LAContext *completedContext;
@property (nonatomic, retain) NSData *completedCredential;
@property (nonatomic, retain) NSError *completedError;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) LAContext *inProgressContext;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *localAuthenticationQueue;

- (void).cxx_destruct;
- (void)_invokeCompletionHandlerForInvalidation;
- (void)_performDelegateCallback:(id /* block */)arg1;
- (void)beginLocalAuthenticationWithCompletion:(id /* block */)arg1;
- (id)callbackQueue;
- (id)completedContext;
- (id)completedCredential;
- (id)completedError;
- (id /* block */)completionHandler;
- (id)inProgressContext;
- (id)initWithCallbackQueue:(id)arg1;
- (void)invalidateLocalAuthenticationContexts;
- (id)localAuthenticationQueue;
- (void)setCallbackQueue:(id)arg1;
- (void)setCompletedContext:(id)arg1;
- (void)setCompletedCredential:(id)arg1;
- (void)setCompletedError:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setInProgressContext:(id)arg1;
- (void)setLocalAuthenticationQueue:(id)arg1;

@end
