/* made by EzioChiu
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACAccountStore : NSObject {
    NSMutableDictionary * _accountCache;
    NSString * _clientBundleID;
    id  _daemonAccountStoreDidChangeObserver;
    ACRemoteAccountStoreSession * _remoteAccountStoreSession;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

@property (nonatomic, readonly) NSArray *accounts;
@property (readonly) NSString *effectiveBundleID;
@property (setter=ic_setActiveLockerAccount:, nonatomic, retain) ACAccount *ic_activeLockerAccount;
@property (setter=ic_setActiveStoreAccount:, nonatomic, retain) ACAccount *ic_activeStoreAccount;
@property (nonatomic, readonly, copy) NSArray *ic_allStoreAccounts;
@property (nonatomic, readonly) ACAccount *ic_primaryAppleAccount;
@property (nonatomic, retain) ACRemoteAccountStoreSession *remoteAccountStoreSession;

// Image: /System/Library/Frameworks/Accounts.framework/Accounts

+ (int)accountsWithAccountTypeIdentifierExist:(id)arg1;
+ (bool)canSaveAccountsOfAccountTypeIdentifier:(id)arg1;
+ (long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_connectionFailureError;
- (id)_sanitizeOptionsDictionary:(id)arg1;
- (void)_saveAccount:(id)arg1 verify:(bool)arg2 dataclassActions:(id)arg3 completion:(id /* block */)arg4;
- (id)_unsanitizeError:(id)arg1;
- (id)accessKeysForAccountType:(id)arg1;
- (id)accountIdentifiersEnabledForDataclass:(id)arg1;
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (id)accountIdentifiersEnabledToSyncDataclass:(id)arg1;
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1;
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1 error:(id*)arg2;
- (void)accountTypeWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)accountWithIdentifier:(id)arg1;
- (void)accountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)accountWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)accounts;
- (void)accountsOnPairedDeviceWithAccountType:(id)arg1 completion:(id /* block */)arg2;
- (id)accountsWithAccountType:(id)arg1;
- (void)accountsWithAccountType:(id)arg1 completion:(id /* block */)arg2;
- (void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(id /* block */)arg3;
- (bool)addClientToken:(id)arg1 forAccount:(id)arg2;
- (id)allAccountTypes;
- (id)allCredentialItems;
- (id)allDataclasses;
- (id)appPermissionsForAccountType:(id)arg1;
- (void)cachedAccountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)canSaveAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)childAccountsForAccount:(id)arg1;
- (id)childAccountsForAccount:(id)arg1 error:(id*)arg2;
- (id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2;
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1;
- (void)clearGrantedPermissionsForAccountType:(id)arg1;
- (id)clientTokenForAccount:(id)arg1;
- (void)connectToRemoteAccountStoreUsingEndpoint:(id)arg1;
- (id)credentialForAccount:(id)arg1;
- (id)credentialForAccount:(id)arg1 bundleID:(id)arg2;
- (id)credentialForAccount:(id)arg1 error:(id*)arg2;
- (id)credentialForAccount:(id)arg1 serviceID:(id)arg2;
- (id)credentialForAccount:(id)arg1 serviceID:(id)arg2 error:(id*)arg3;
- (id)credentialItemForAccount:(id)arg1 serviceName:(id)arg2;
- (id)dataclassActionsForAccountDeletion:(id)arg1;
- (id)dataclassActionsForAccountDeletion:(id)arg1 error:(id*)arg2;
- (id)dataclassActionsForAccountSave:(id)arg1;
- (id)dataclassActionsForAccountSave:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)disconnectFromRemoteAccountStore;
- (void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)displayTypeForAccountWithIdentifier:(id)arg1;
- (id)effectiveBundleID;
- (id)enabledDataclassesForAccount:(id)arg1;
- (id)grantedPermissionsForAccountType:(id)arg1;
- (void)handleURL:(id)arg1;
- (bool)hasAccountWithDescription:(id)arg1;
- (id)init;
- (id)initWithEffectiveBundleID:(id)arg1;
- (id)initWithRemoteEndpoint:(id)arg1;
- (id)initWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2;
- (void)insertAccountType:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)insertCredentialItem:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)isPerformingDataclassActionsForAccount:(id)arg1;
- (bool)isPerformingDataclassActionsForAccount:(id)arg1 error:(id*)arg2;
- (bool)isPushSupportedForAccount:(id)arg1;
- (bool)isTetheredSyncingEnabledForDataclass:(id)arg1;
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1;
- (void)notifyRemoteDevicesOfNewAccount:(id)arg1;
- (void)notifyRemoteDevicesOfNewAccount:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)notifyRemoteDevicesOfUpdatedCredentials:(id)arg1;
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(bool)arg3 completion:(id /* block */)arg4;
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(bool)arg4 completion:(id /* block */)arg5;
- (id)parentAccountForAccount:(id)arg1;
- (id)parentAccountForAccount:(id)arg1 error:(id*)arg2;
- (bool)permissionForAccountType:(id)arg1;
- (id)provisionedDataclassesForAccount:(id)arg1;
- (id)remoteAccountStoreSession;
- (void)removeAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id /* block */)arg3;
- (void)removeAccount:(id)arg1 withDeleteSync:(bool)arg2 completion:(id /* block */)arg3;
- (void)removeAccountType:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)removeAccountsFromPairedDeviceWithCompletion:(id /* block */)arg1;
- (void)removeCredentialItem:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)renewCredentialsForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)renewCredentialsForAccount:(id)arg1 force:(bool)arg2 reason:(id)arg3 completion:(id /* block */)arg4;
- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)renewCredentialsForAccount:(id)arg1 reason:(id)arg2 completion:(id /* block */)arg3;
- (void)renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(id /* block */)arg3;
- (void)reportTelemetryForLandmarkEvent:(id /* block */)arg1;
- (void)requestAccessToAccountsWithType:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)requestAccessToAccountsWithType:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)saveAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id /* block */)arg3;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 doVerify:(bool)arg3 completion:(id /* block */)arg4;
- (void)saveCredentialItem:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)saveVerifiedAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 error:(id*)arg4;
- (void)setNotificationsEnabled:(bool)arg1;
- (void)setPermissionGranted:(bool)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3;
- (void)setRemoteAccountStoreSession:(id)arg1;
- (id)supportedDataclassesForAccountType:(id)arg1;
- (id)syncableDataclassesForAccountType:(id)arg1;
- (id)tetheredSyncSourceTypeForDataclass:(id)arg1;
- (void)triggerKeychainMigrationIfNecessary:(id /* block */)arg1;
- (id)typeIdentifierForDomain:(id)arg1;
- (int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1;
- (void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(bool)arg2 withHandler:(id /* block */)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 withHandler:(id /* block */)arg2;
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(id /* block */)arg2;

// Image: /System/Library/Frameworks/Social.framework/Social

+ (bool)SLDuplicateAccountExistsForAccount:(id)arg1 withTypeIdentifier:(id)arg2 andAccountPropertyIDKey:(id)arg3;

- (void)sl_openGoogleAuthenticationSheetForAccount:(id)arg1 shouldConfirm:(bool)arg2 completion:(id /* block */)arg3;
- (void)sl_openGoogleAuthenticationSheetForAccount:(id)arg1 shouldConfirm:(bool)arg2 delegateClassName:(id)arg3 completion:(id /* block */)arg4;
- (void)sl_openGoogleAuthenticationSheetWithAccountDescription:(id)arg1 completion:(id /* block */)arg2;
- (void)sl_openYouTubeAuthenticationSheetWithAccountDescription:(id)arg1 completion:(id /* block */)arg2;
- (void)sl_openYouTubeAuthenticationSheetWithUsername:(id)arg1 accountDescription:(id)arg2 completion:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (void)_performUpdateRequestWithAccount:(id)arg1 completion:(id /* block */)arg2;
- (id)aa_accountsEnabledForDataclass:(id)arg1;
- (id)aa_appleAccountType;
- (id)aa_appleAccountWithAltDSID:(id)arg1;
- (id)aa_appleAccountWithPersonID:(id)arg1;
- (id)aa_appleAccountWithUsername:(id)arg1;
- (id)aa_appleAccounts;
- (void)aa_appleAccountsWithCompletion:(id /* block */)arg1;
- (id)aa_authKitAccountForAltDSID:(id)arg1;
- (id)aa_grandSlamAccountForAltDSID:(id)arg1;
- (id)aa_grandSlamAccountForiCloudAccount:(id)arg1;
- (bool)aa_isUsingiCloud;
- (void)aa_lookupEmailAddresses:(id)arg1 withAppleAccount:(id)arg2 completion:(id /* block */)arg3;
- (id)aa_primaryAppleAccount;
- (void)aa_primaryAppleAccountWithCompletion:(id /* block */)arg1;
- (id)aa_primaryAppleAccountWithPreloadedDataclasses;
- (id)aa_recommendedAppleIDForAccountSignInWithTypeIdentifier:(id)arg1;
- (void)aa_registerAppleAccount:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)aa_registerAppleAccountWithHSA:(id)arg1 completion:(id /* block */)arg2;
- (void)aa_registerAppleAccountWithHSA:(id)arg1 usingCookieHeaders:(id)arg2 completion:(id /* block */)arg3;
- (void)aa_updatePropertiesForAppleAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)aa_updatePropertiesForAppleAccount:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)accountWithAppleID:(id)arg1;
- (id)accountsWithAccountType:(id)arg1 appleID:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication

- (id)_primaryiCloudAccount;
- (id)aida_AppleIDAuthenticationAccountType;
- (id)aida_AppleIDAuthenticationAccounts;
- (id)aida_accountForPrimaryiCloudAccount;
- (id)aida_accountForiCloudAccount:(id)arg1;
- (id)aida_iCloudAccountMatchingAppleIDAuthAccount:(id)arg1;
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(id /* block */)arg3;
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 force:(bool)arg3 completion:(id /* block */)arg4;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (id)br_appleAccountWithPersonID:(id)arg1;
- (id)br_primaryAppleAccount;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

- (void)_daAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 filterOnDataclasses:(bool)arg3 withCompletion:(id /* block */)arg4;
- (id)da_accounts;
- (id)da_accountsEnabledForDADataclasses:(long long)arg1;
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1;
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2;
- (void)da_loadDAAccountsEnabledForDADataclasses:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 withCompletion:(id /* block */)arg3;
- (void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)da_loadDAAccountsWithCompletion:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (id)_gkAccountForAppleID:(id)arg1;
- (id)_gkAllCredentials;
- (id)_gkAllCredentialsForEnvironment:(long long)arg1;
- (id)_gkCredentialForUsername:(id)arg1 environment:(long long)arg2;
- (void)_gkDeleteCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_gkMapAccountsWithBlock:(id /* block */)arg1;
- (id)_gkPrimaryCredentialForEnvironment:(long long)arg1;
- (void)_gkSaveCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_gkSetScope:(unsigned int)arg1 forCredential:(id)arg2 completionHandler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/MobileSync.framework/MobileSync

- (id)_mailAccountTypeIdentifiers;
- (bool)hasMailAccountsForSync;
- (id)mailAccountsForSync;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

+ (id)ic_sharedAccountStore;

- (id)_ic_storeAccountType;
- (id)ic_activeLockerAccount;
- (id)ic_activeStoreAccount;
- (id)ic_allStoreAccounts;
- (id)ic_primaryAppleAccount;
- (void)ic_setActiveLockerAccount:(id)arg1;
- (void)ic_setActiveStoreAccount:(id)arg1;
- (id)ic_storeAccountForStoreAccountID:(id)arg1;

@end
