/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAFamilySettingsViewController : ACUIViewController <FAAddFamilyMemberDelegate, FAChildAccountCreationDelegate, FASharedSubscriptionSpecifierProviderDelegeate, RemoteUIControllerDelegate, UINavigationControllerDelegate> {
    ACAccountStore * _accountStore;
    UITableViewCell * _activeCell;
    NSURL * _activeURL;
    PSSpecifier * _addFamilyMemberCell;
    ACAccount * _appleAccount;
    AAGrandSlamSigner * _appleIDGrandSlamSigner;
    RemoteUIController * _appleIDRemoteUIController;
    FAChildAccountCreationController * _childAccountCreationController;
    UINavigationController * _childAccountCreationNavController;
    NSMutableURLRequest * _currentRemoteUIRequest;
    <FAFamilySettingsViewControllerDelegate> * _delegate;
    FACircleRemoteUIDelegate * _faCircleRemoteUIDelegate;
    AAFamilyDetailsResponse * _familyDetailsResponse;
    PSSpecifier * _familyMembersGroup;
    FACircleRemoteUIDelegate * _familyRemoteUIDelegate;
    RemoteUIController * _familyV2RemoteUIController;
    bool  _fetchingPaymentInfo;
    bool  _fetchingPaymentMethodImage;
    ACAccount * _grandSlamAccount;
    AAGrandSlamSigner * _iCloudGrandSlamSigner;
    RemoteUIController * _iCloudRemoteUIController;
    SSAccount * _itunesAccount;
    AAFamilyMember * _memberBeingViewed;
    NSMutableDictionary * _memberDetailsPageSurrogatesByOM;
    CNMonogrammer * _monogrammer;
    NSOperationQueue * _networkingQueue;
    FAFamilyNotificationObserver * _notificationObserver;
    NSArray * _paymentInfoSpecifiers;
    FAFamilyCreditCard * _paymentMethod;
    AAUIProfilePictureStore * _profilePictureStore;
    NSObject * _profilePictureStoreDidChangeObserver;
    FARequestConfigurator * _requestConfigurator;
    AAUIServerUIHookHandler * _serverUIHookHandler;
    FASharedSubscriptionSpecifierProvider * _sharedSubscriptionSpecifierProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FAFamilySettingsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addFamilyMemberButtonWasTapped:(id)arg1;
- (void)_addMemberInline;
- (void)_addMemberWithEventType:(id)arg1;
- (id)_appleIDGrandSlamSigner;
- (void)_createChildAccountButtonWasTapped:(id)arg1;
- (void)_createChildAccountWithContinuationData:(id)arg1;
- (id)_createSpecifierForFamilyMemberCell:(id)arg1;
- (id)_createSpecifierForFamilyMemberGroup;
- (id)_createSpecifierForPendingMember:(id)arg1;
- (id)_createSpecifiersForPaymentInfo;
- (void)_familyMemberCellWasTapped:(id)arg1;
- (void)_fetchFamilyPaymentInfoWithCompletion:(id /* block */)arg1;
- (void)_fetchUpdatedFamilyDetailsWithCompletion:(id /* block */)arg1;
- (void)_handleFamilyDeletion;
- (void)_handleFamilyStatusChange:(id)arg1;
- (void)_handleFamilySubscriptionChanged;
- (void)_handleMemberDeletion:(id)arg1;
- (void)_handleMemberUpdate:(id)arg1;
- (bool)_hasActiveCell;
- (id)_imageFromBundle:(id)arg1;
- (id)_itunesAccount;
- (void)_learnMoreLinkButtonWasTapped:(id)arg1;
- (void)_loadRemoteUIWithRequest:(id)arg1 specifier:(id)arg2 type:(long long)arg3;
- (void)_loadRemoteUIWithRequest:(id)arg1 url:(id)arg2 specifier:(id)arg3 type:(long long)arg4;
- (void)_paymentMethodCellWasTapped:(id)arg1;
- (void)_pendingFamilyMemberCellWasTapped:(id)arg1;
- (void)_reloadPaymentInfoSpecifiersAnimated:(bool)arg1;
- (id)_requestConfigurator;
- (void)_setFresnoRemoteUIDelgate:(id)arg1;
- (id)_sharedSubscriptionSpecifierProvider;
- (id)_sharedSubscriptionSpecifiers;
- (void)_showConnectivityAlert;
- (void)_startSpinnerInCellLoadingRemoteUI:(id)arg1;
- (void)_stopSpinnerInCellLoadingRemoteUI;
- (void)_updateMemberDetailsPageWithLinkedAppleID:(id)arg1;
- (void)addFamilyFamilyMemberViewController:(id)arg1 didCompleteWithSuccess:(bool)arg2;
- (void)addFamilyFamilyMemberViewControllerWantsChildAccountFlow:(id)arg1;
- (void)childAccountCreationController:(id)arg1 didCompleteWithSuccess:(bool)arg2 error:(id)arg3;
- (void)childAccountCreationController:(id)arg1 didLoadRemoteUIWithSuccess:(bool)arg2;
- (void)dealloc;
- (id)delegate;
- (void)didSelectSpecifier:(id)arg1;
- (id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2 familyDetailsResponse:(id)arg3;
- (id)navigationItemToShowInitialLoadingForChildAccountCreationController:(id)arg1;
- (void)reloadSpecifiersForProvider:(id)arg1 oldSpecifiers:(id)arg2 animated:(bool)arg3;
- (id)remoteUIController:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2;
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)specifiers;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
