/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKCloudServiceSetupViewController : UIViewController <SFSafariViewControllerDelegate, SKCloudServiceSetupRemoteViewControllerDelegate> {
    SKCloudServiceSetupReloadContext * _activeCloudServiceSetupReloadContext;
    SKCloudServiceSetupConfiguration * _configuration;
    <SKCloudServiceSetupViewControllerDelegate> * _delegate;
    bool  _hasInitializedServiceViewController;
    bool  _isRemoteViewControllerReady;
    id /* block */  _loadCompletionHandler;
    _UIResilientRemoteViewContainerViewController * _remoteViewContainerViewController;
    SFSafariViewController * _safariViewController;
}

@property (nonatomic, readonly, copy) SKCloudServiceSetupConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKCloudServiceSetupViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didReceiveRemoteViewController:(id)arg1;
- (void)_reloadWithActiveCloudServiceSetupReloadContext;
- (void)_requestRemoteViewController;
- (void)cloudServiceSetupRemoteViewController:(id)arg1 didFinishLoadingWithSuccess:(bool)arg2 error:(id)arg3;
- (void)cloudServiceSetupRemoteViewController:(id)arg1 requestsDismissalWithAnimation:(bool)arg2 completion:(id /* block */)arg3;
- (void)cloudServiceSetupRemoteViewController:(id)arg1 requestsDismissingSafariViewControllerAnimated:(bool)arg2 completion:(id /* block */)arg3;
- (void)cloudServiceSetupRemoteViewController:(id)arg1 requestsPresentingSafariViewControllerWithURL:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (void)handleSafariScriptURL:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)overrideCreditCardPresentationWithCompletion:(id /* block */)arg1;
- (void)reloadWithContext:(id)arg1;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(bool)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
