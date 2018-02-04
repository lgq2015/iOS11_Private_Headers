/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSViewServiceViewController : UIViewController <VSIdentityProviderPickerViewControllerDelegate, VSIdentityProviderViewControllerDelegate, VSRemoteNotifierDelegate, VSViewServiceProtocol> {
    VSAuditToken * _auditToken;
    VSOptional * _currentRequest;
    VSOptional * _currentRequestID;
    bool  _didAuthenticateAccount;
    bool  _identityProviderPickerRequired;
    UINavigationController * _navController;
    VSPreferences * _preferences;
    bool  _presentedInHost;
    NSOperationQueue * _privateQueue;
    VSRemoteNotifier * _remoteNotifier;
    VSRestrictionsCenter * _restrictionsCenter;
    VSPersistentStorage * _storage;
}

@property (nonatomic, copy) VSAuditToken *auditToken;
@property (nonatomic, copy) VSOptional *currentRequest;
@property (nonatomic, retain) VSOptional *currentRequestID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didAuthenticateAccount;
@property (readonly) unsigned long long hash;
@property (getter=isIdentityProviderPickerRequired, nonatomic) bool identityProviderPickerRequired;
@property (nonatomic, retain) UINavigationController *navController;
@property (nonatomic, retain) VSPreferences *preferences;
@property (getter=isPresentedInHost, nonatomic) bool presentedInHost;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) VSRemoteNotifier *remoteNotifier;
@property (nonatomic, retain) VSRestrictionsCenter *restrictionsCenter;
@property (nonatomic, retain) VSPersistentStorage *storage;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)_completeRequest:(id)arg1 withResponse:(id)arg2;
- (void)_completeRequestWithResponse:(id)arg1;
- (void)_completeRequestWithResponse:(id)arg1 fromIdentityProvider:(id)arg2;
- (void)_didCancelRequest;
- (void)_dismissInHostIfNecessary;
- (id)_identityProviderRequestForViewServiceRequest:(id)arg1 withAccount:(id)arg2;
- (void)_performRequest:(id)arg1 withIdentifier:(id)arg2;
- (void)_performRequestInternal:(id)arg1 withID:(id)arg2 identityProviders:(id)arg3 accounts:(id)arg4;
- (void)_performRequestWithIdentityProvider:(id)arg1 account:(id)arg2;
- (void)_presentInHostIfNecessary;
- (void)_presentWelcomeMessageForIdentityProvider:(id)arg1 withLogoCacheURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_request:(id)arg1 didFailWithError:(id)arg2;
- (void)_requestDidFailWithError:(id)arg1;
- (void)_showIdentityProviderPickerViewControllerWithIdentityProviders:(id)arg1;
- (id)_viewControllerHost;
- (void)_viewControllerWasDismissed;
- (id)_viewServiceResponseWithIdentityProviderResponse:(id)arg1;
- (void)_willAppearInRemoteViewController;
- (id)auditToken;
- (id)currentRequest;
- (id)currentRequestID;
- (void)dealloc;
- (bool)didAuthenticateAccount;
- (void)dismissIdentityProviderViewController:(id)arg1;
- (void)identityProviderPickerViewController:(id)arg1 didPickIdentityProvider:(id)arg2;
- (void)identityProviderPickerViewControllerDidCancel:(id)arg1;
- (void)identityProviderPickerViewControllerDidPickAdditionalIdentityProviders:(id)arg1;
- (void)identityProviderViewController:(id)arg1 didAuthenticateAccount:(id)arg2 forRequest:(id)arg3;
- (void)identityProviderViewController:(id)arg1 didFinishRequest:(id)arg2 withResult:(id)arg3;
- (void)identityProviderViewControllerDidCancel:(id)arg1;
- (void)identityProviderViewControllerDidFinishLoading:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isIdentityProviderPickerRequired;
- (bool)isPresentedInHost;
- (id)navController;
- (id)preferences;
- (id)privateQueue;
- (id)remoteNotifier;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (id)restrictionsCenter;
- (void)setAuditToken:(id)arg1;
- (void)setCurrentRequest:(id)arg1;
- (void)setCurrentRequestID:(id)arg1;
- (void)setDidAuthenticateAccount:(bool)arg1;
- (void)setIdentityProviderPickerRequired:(bool)arg1;
- (void)setNavController:(id)arg1;
- (void)setPreferences:(id)arg1;
- (void)setPresentedInHost:(bool)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setRemoteNotifier:(id)arg1;
- (void)setRestrictionsCenter:(id)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;

@end
