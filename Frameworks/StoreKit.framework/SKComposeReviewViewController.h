/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKComposeReviewViewController : UIViewController {
    _UIAsyncInvocation * _cancelRequest;
    NSURL * _compositionURL;
    <SKComposeReviewDelegate> * _delegate;
    id /* block */  _prepareBlock;
    SKRemoteComposeReviewViewController * _remoteViewController;
    SKInvocationQueueProxy<SKUIServiceComposeReviewViewController> * _serviceProxy;
}

@property (nonatomic) <SKComposeReviewDelegate> *delegate;

- (void)_addRemoteView;
- (void)_didFinishWithResult:(bool)arg1 error:(id)arg2;
- (void)_didPrepareWithResult:(bool)arg1 error:(id)arg2;
- (void)_requestRemoteViewController;
- (void)_tearDownAfterError:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithCompositionURL:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)prepareWithCompletionBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidAppear:(bool)arg1;

@end
