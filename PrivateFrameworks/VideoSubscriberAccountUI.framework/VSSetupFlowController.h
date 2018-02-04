/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSSetupFlowController : NSObject <VSIdentityProviderPickerViewControllerDelegate, VSIdentityProviderViewControllerDelegate, VSRemoteNotifierDelegate, VSSupportedAppsViewControllerDelegate> {
    <VSSetupFlowControllerDelegate> * _delegate;
    NSArray * _freeOnBoardingBundleIDs;
    VSPreferences * _preferences;
    NSOperationQueue * _privateQueue;
    VSRemoteNotifier * _remoteNotifier;
    bool  _signingIn;
    VSPersistentStorage * _storage;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSSetupFlowControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *freeOnBoardingBundleIDs;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSPreferences *preferences;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) VSRemoteNotifier *remoteNotifier;
@property (getter=isSigningIn, nonatomic) bool signingIn;
@property (nonatomic, retain) VSPersistentStorage *storage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appleAccountDidChange:(id)arg1;
- (void)_didStartLoading;
- (void)_dismissAboutPrivacy:(id)arg1;
- (void)_dismissViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)_finishAfterOfferingOptions:(bool)arg1 endingUndoGrouping:(bool)arg2;
- (void)_obtainConsentForBundleIDs:(id)arg1 vouchers:(id)arg2 withAppleAccount:(id)arg3 identityProvider:(id)arg4 endingUndoGrouping:(bool)arg5 arrivedViaNotNowButton:(bool)arg6 arrivedAfterSigningIn:(bool)arg7 goingBack:(bool)arg8;
- (void)_offerAuthenticationWithSupportedAppsButton:(bool)arg1;
- (void)_offerFreeOnBoardingIfNeededAfterOfferingOptions:(bool)arg1 endingUndoGrouping:(bool)arg2 arrivedViaNotNowButton:(bool)arg3 arrivedAfterSigningIn:(bool)arg4 goingBack:(bool)arg5;
- (void)_pickProviderWithViewController:(id)arg1;
- (void)_presentError:(id)arg1;
- (void)_presentViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)_requestAccessWithViewController:(id)arg1;
- (void)_startLoadingAfterOfferingOptions:(bool)arg1 endingUndoGrouping:(bool)arg2 arrivedViaNotNowButton:(bool)arg3 arrivedAfterSigningIn:(bool)arg4 goingBack:(bool)arg5;
- (void)dealloc;
- (id)delegate;
- (void)dismissIdentityProviderViewController:(id)arg1;
- (id)freeOnBoardingBundleIDs;
- (void)identityProviderPickerViewController:(id)arg1 didPickIdentityProvider:(id)arg2;
- (void)identityProviderViewController:(id)arg1 didAuthenticateAccount:(id)arg2 forRequest:(id)arg3;
- (void)identityProviderViewController:(id)arg1 didFinishRequest:(id)arg2 withResult:(id)arg3;
- (void)identityProviderViewControllerDidCancel:(id)arg1;
- (id)init;
- (bool)isSigningIn;
- (void)notNow;
- (id)preferences;
- (id)privateQueue;
- (id)remoteNotifier;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFreeOnBoardingBundleIDs:(id)arg1;
- (void)setPreferences:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setRemoteNotifier:(id)arg1;
- (void)setSigningIn:(bool)arg1;
- (void)setStorage:(id)arg1;
- (void)showAboutPrivacy;
- (void)showSupportedApps;
- (void)startLoadingWhenGoingBack:(bool)arg1;
- (void)startSigningIn;
- (id)storage;
- (void)supportedAppsViewControllerDidFinish:(id)arg1;

@end
