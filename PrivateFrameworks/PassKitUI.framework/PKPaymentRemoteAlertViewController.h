/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentServiceDelegate, SBSHardwareButtonEventConsuming> {
    bool  _appearedOnce;
    bool  _backlightActive;
    bool  _deviceUILocked;
    PKFieldDetectEducationViewController * _educationVC;
    NSArray * _fieldPassUniqueIdentifiers;
    PKFieldProperties * _fieldProperties;
    NSObject<OS_dispatch_group> * _fieldPropertiesLookupGroup;
    bool  _insertedGroupsVC;
    bool  _invalidated;
    SBSAssertion * _lockButtonAssertion;
    <BSInvalidatable> * _lockButtonObserver;
    PKAssertion * _notificationSuppressionAssertion;
    PKPassGroupsViewController * _passGroupsViewController;
    NSString * _passUniqueIdentifier;
    CLInUseAssertion * _passbookForegroundAssertion;
    PKPaymentService * _paymentService;
    long long  _presentationSource;
    unsigned long long  _presentationStartTime;
    bool  _processHomeButtonEvents;
    bool  _shouldInsertGroupsVC;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isSecureForRemoteViewService;
+ (bool)_shouldForwardViewWillTransitionToSize;
+ (id)groupsControllerWithSource:(long long)arg1;

- (void).cxx_destruct;
- (void)_appearIfNecessary;
- (void)_contactlessInterfaceSessionDidAuthorize:(id)arg1;
- (void)_contactlessInterfaceSessionFinishTransaction:(id)arg1;
- (void)_dismissForSource:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_dismissIfRestricted;
- (void)_insertGroupController;
- (void)_invalidate;
- (bool)_notificationIsFromChildViewController:(id)arg1;
- (void)_paymentDidReceiveSuccessfulTransactionNotification:(id)arg1;
- (void)_presentHomeButtonDoubleTapAlertIfNecessary;
- (void)_presentPassAnimated:(bool)arg1;
- (void)_setupGroupController;
- (void)_willAppearInRemoteViewController;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)configureWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)consumeDoublePressUpForButtonKind:(long long)arg1;
- (void)dealloc;
- (void)handleHomeButtonPressed;
- (id)init;
- (void)linkedApplicationOpen:(id)arg1;
- (void)loadView;
- (void)setUserInfo:(id)arg1;
- (bool)shouldAutorotate;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
