/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKAddPassesViewController : UIViewController {
    PKAssertion * _contactlessInterfaceAssertion;
    <PKAddPassesViewControllerDelegate> * _delegate;
    NSArray * _passDataArray;
    unsigned long long  _presentationSource;
    PKRemoteAddPassesViewController * _remoteViewController;
    bool  _succeeded;
    bool  _viewHasAppeared;
    _UIAsyncInvocation * _viewServiceCancelRequest;
}

@property (nonatomic) <PKAddPassesViewControllerDelegate> *delegate;

+ (bool)_shouldForwardViewWillTransitionToSize;
+ (bool)canAddPasses;

- (void).cxx_destruct;
- (void)_applyRemoteViewController:(id)arg1;
- (void)_ingestionDidFinishWithResult:(unsigned long long)arg1;
- (void)_requestRemoteViewController;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)dealloc;
- (id)delegate;
- (id)initWithPass:(id)arg1;
- (id)initWithPasses:(id)arg1;
- (id)initWithPasses:(id)arg1 presentationSource:(unsigned long long)arg2;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (long long)preferredStatusBarStyle;
- (bool)prefersStatusBarHidden;
- (void)setDelegate:(id)arg1;
- (bool)shouldAutorotate;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)succeeded;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
