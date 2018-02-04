/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAccount : NSObject <CKDAccountInfoProvider> {
    ACAccountType * _acAccountType;
    bool  _accountWantsFlowControl;
    bool  _accountWantsPushRegistration;
    NSObject<OS_dispatch_queue> * _authTokenCallbackQueue;
    CKDBackingAccount * _backingAccount;
    CKDClientContext * _context;
    CKAccountOverrideInfo * _fakeAccountInfo;
    bool  _haveWarnedAboutServerPreferredPushEnvironment;
    bool  _isAnonymousAccount;
    bool  _isUnitTestingAccount;
    NSString * _lastFailedCloudKitAuthToken;
    NSString * _lastFailediCloudAuthToken;
}

@property (nonatomic, retain) ACAccountType *acAccountType;
@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic) bool accountWantsFlowControl;
@property (nonatomic) bool accountWantsPushRegistration;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *authTokenCallbackQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *authTokenQueue;
@property (nonatomic, readonly) CKDBackingAccount *backingAccount;
@property (nonatomic, readonly) bool canAccessAccount;
@property (nonatomic, readonly) bool canAuthWithCloudKit;
@property (nonatomic) CKDClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CKAccountOverrideInfo *fakeAccountInfo;
@property (nonatomic, readonly) NSString *formattedUsername;
@property (nonatomic, readonly) NSPersonNameComponents *fullName;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool haveWarnedAboutServerPreferredPushEnvironment;
@property (nonatomic, readonly) bool iCloudDriveAllowsCellularAccess;
@property (nonatomic) bool isAnonymousAccount;
@property (nonatomic, readonly) bool isCarryAccount;
@property (nonatomic, readonly) bool isFakeAccount;
@property (nonatomic) bool isUnitTestingAccount;
@property (nonatomic, readonly) bool isiCloudDevEnvironmentAccount;
@property (nonatomic, copy) NSString *lastFailedCloudKitAuthToken;
@property (nonatomic, copy) NSString *lastFailediCloudAuthToken;
@property (nonatomic, readonly) NSString *primaryEmail;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *username;

+ (id)globalAuthTokenQueue;

- (void).cxx_destruct;
- (id)_initWithContext:(id)arg1;
- (id)_lockedCloudKitAuthTokenWithError:(id*)arg1;
- (void)_lockedRenewTokenWithReason:(id)arg1 shouldForce:(bool)arg2 tokenFetchBlock:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)_lockediCloudAuthTokenWithError:(id*)arg1;
- (id)_urlBySettingCustomBaseURL:(id)arg1 onURL:(id)arg2;
- (bool)_userCloudDBURLisInCarryPartition;
- (id)acAccountType;
- (id)accountID;
- (id)accountIdentifier;
- (id)accountStore;
- (bool)accountWantsFlowControl;
- (bool)accountWantsPushRegistration;
- (id)applicationBundle;
- (id)authTokenCallbackQueue;
- (id)authTokenQueue;
- (id)backingAccount;
- (id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
- (id)bundleID;
- (bool)canAccessAccount;
- (bool)canAuthWithCloudKit;
- (void)cloudKitAuthTokenWithCompletionHandler:(id /* block */)arg1;
- (id)config;
- (id)containerID;
- (id)containerScopedUserID;
- (id)context;
- (id)description;
- (id)deviceName;
- (void)displayAuthenticationPromptWithReason:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)dsid;
- (id)fakeAccountInfo;
- (void)fetchConfigurationForOperation:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)fetchContainerScopedUserIDForOperation:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)fetchDeviceIDForOperation:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)fetchPrivateURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchPublicURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchServerEnvironmentForOperation:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)formattedUsername;
- (id)fullName;
- (id)hardwareID;
- (bool)haveWarnedAboutServerPreferredPushEnvironment;
- (void)iCloudAuthTokenWithCompletionHandler:(id /* block */)arg1;
- (bool)iCloudDriveAllowsCellularAccess;
- (id)initAnonymousAccountWithContext:(id)arg1;
- (id)initFakeAccountWithAccountOverrideInfo:(id)arg1 context:(id)arg2;
- (id)initPrimaryAccountWithContext:(id)arg1;
- (id)initWithAccountID:(id)arg1 context:(id)arg2;
- (bool)isAnonymousAccount;
- (bool)isCarryAccount;
- (bool)isDataclassEnabled:(id)arg1;
- (bool)isFakeAccount;
- (bool)isUnitTestingAccount;
- (bool)isiCloudDevEnvironmentAccount;
- (id)languageCode;
- (id)lastFailedCloudKitAuthToken;
- (id)lastFailediCloudAuthToken;
- (id)mescalSession;
- (void)noteFailedNetworkRequest;
- (void)noteFailedProtocolRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (id)primaryEmail;
- (id)regionCode;
- (void)renewCloudKitAuthTokenWithReason:(id)arg1 shouldForce:(bool)arg2 failedToken:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)renewMescalSessionForRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)renewiCloudAuthTokenWithReason:(id)arg1 shouldForce:(bool)arg2 failedToken:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)resetMescalSession;
- (id)serverPreferredPushEnvironment;
- (void)setAcAccountType:(id)arg1;
- (void)setAccountWantsFlowControl:(bool)arg1;
- (void)setAccountWantsPushRegistration:(bool)arg1;
- (void)setAuthTokenCallbackQueue:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHaveWarnedAboutServerPreferredPushEnvironment:(bool)arg1;
- (void)setIsAnonymousAccount:(bool)arg1;
- (void)setIsUnitTestingAccount:(bool)arg1;
- (void)setLastFailedCloudKitAuthToken:(id)arg1;
- (void)setLastFailediCloudAuthToken:(id)arg1;
- (bool)shouldFailAllTasks;
- (id)trafficContainerIdentifier;
- (id)username;
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(id /* block */)arg4;

@end