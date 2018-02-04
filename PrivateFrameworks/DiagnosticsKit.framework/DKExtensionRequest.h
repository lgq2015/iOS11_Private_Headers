/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKExtensionRequest : NSObject <DKExtensionHostAdapterDelegate, DKRequest> {
    bool  _canceled;
    bool  _completed;
    NSObject<OS_dispatch_semaphore> * _connectSemaphore;
    id  _context;
    <DKRequestDelegate> * _delegate;
    <DKExtensionAttributes> * _extensionAttributes;
    <NSCopying> * _extensionRequestIdentifier;
    <DKExtensionHostAdapter> * _hostAdapter;
    id  _hostServicesDelegate;
    bool  _interrupted;
    id  _payload;
    BKSProcessAssertion * _processAssertion;
    UIViewController * _remoteViewController;
    <NSCopying> * _requestIdentifier;
}

@property (getter=isCanceled, nonatomic) bool canceled;
@property (getter=isCompleted, nonatomic) bool completed;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *connectSemaphore;
@property (nonatomic, retain) id context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DKRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <DKExtensionAttributes> *extensionAttributes;
@property (nonatomic, retain) <NSCopying> *extensionRequestIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <DKExtensionHostAdapter> *hostAdapter;
@property (nonatomic) id hostServicesDelegate;
@property (getter=isInterrupted, nonatomic) bool interrupted;
@property (nonatomic, retain) id payload;
@property (nonatomic, retain) BKSProcessAssertion *processAssertion;
@property (nonatomic, retain) UIViewController *remoteViewController;
@property (nonatomic, readonly) <NSCopying> *requestIdentifier;
@property (readonly) Class superclass;

+ (id)requestWithExtensionAttributes:(id)arg1;

- (void).cxx_destruct;
- (void)_cancelTimedOutWithInfo:(id)arg1;
- (void)_dismissViewControllerWithCompletion:(id /* block */)arg1;
- (bool)_extensionContext:(id)arg1 hasEntitlement:(id)arg2;
- (void)_finishWithResult:(id)arg1 error:(id)arg2;
- (void)beginWithPayload:(id)arg1;
- (void)cancel;
- (void)cancelExtensionRequest;
- (void)cancelWithError:(id)arg1;
- (void)complete;
- (void)completeWithPayload:(id)arg1 completion:(id /* block */)arg2;
- (id)connectSemaphore;
- (id)connectWithError:(id*)arg1;
- (id)context;
- (id)delegate;
- (id)description;
- (id)extensionAttributes;
- (id)extensionRequestIdentifier;
- (id)hostAdapter;
- (id)hostServicesDelegate;
- (id)initWithExtensionAttributes:(id)arg1;
- (void)interrupt;
- (bool)isCanceled;
- (bool)isCompleted;
- (bool)isInterrupted;
- (id)payload;
- (id)processAssertion;
- (id)remoteViewController;
- (id)requestIdentifier;
- (void)setCanceled:(bool)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setConnectSemaphore:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtensionAttributes:(id)arg1;
- (void)setExtensionRequestIdentifier:(id)arg1;
- (void)setHostAdapter:(id)arg1;
- (void)setHostServicesDelegate:(id)arg1;
- (void)setInterrupted:(bool)arg1;
- (void)setPayload:(id)arg1;
- (void)setProcessAssertion:(id)arg1;
- (void)setRemoteViewController:(id)arg1;

@end
