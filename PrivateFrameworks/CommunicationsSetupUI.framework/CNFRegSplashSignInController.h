/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegSplashSignInController : CNFRegSignInController <AKTapToSignInViewControllerDelegate> {
    AKTapToSignInViewController * _akSignInVC;
    CNFRegSigninLearnMoreView * _signInView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_controllerToPresentOn;
- (id)_existingLearnMoreViewForSection:(long long)arg1;
- (id)_existingLearnMoreViewForSpecifier:(id)arg1;
- (void)_handleTimeout;
- (void)dealloc;
- (id)specifierList;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tapToSignInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
