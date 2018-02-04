/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICUserIdentityStoreACAccountBackend : NSObject <ICUserIdentityStoreBackend> {
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    ACAccountStore * _accountStore;
    NSMapTable * _accountToIdentityProperties;
    id  _activeAccountDSIDValue;
    id  _activeLockerAccountDSIDValue;
    NSArray * _allStoreAccounts;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <ICUserIdentityStoreBackendDelegate> * _delegate;
    NSMutableDictionary * _dsidToAccount;
    id  _primaryICloudAccountIdentityPropertiesValue;
    ACAccountType * _storeAccountType;
}

@property (nonatomic, readonly) NSNumber *activeAccountDSID;
@property (nonatomic, readonly) NSNumber *activeLockerAccountDSID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICUserIdentityStoreBackendDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) ICUserIdentityProperties *primaryICloudAccountIdentityProperties;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) ICUserVerificationContext *verificationContextToEstablishAccount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (id)_activeAccountDSID;
- (id)_activeLockerAccountDSID;
- (id)_allStoreAccounts;
- (void)_applyIdentityProperties:(id)arg1 toAccount:(id)arg2;
- (void)_handleITunesStoreAccountsChanged;
- (id)_newUserIdentityPropertiesForAccount:(id)arg1;
- (id)_primaryICloudAccountIdentityProperties;
- (id)_storeAccountForDSID:(id)arg1;
- (id)_storeAccountType;
- (void)_synchronize;
- (id)activeAccountDSID;
- (id)activeLockerAccountDSID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)identityPropertiesForDSID:(id)arg1;
- (id)init;
- (id)initWithACAccountStore:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)primaryICloudAccountIdentityProperties;
- (void)removeIdentityForDSID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setIdentityProperties:(id)arg1 forDSID:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)synchronize;
- (void)updateActiveAccountDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)updateActiveLockerAccountDSID:(id)arg1 completion:(id /* block */)arg2;
- (id)verificationContextForDSID:(id)arg1;
- (id)verificationContextToEstablishAccount;

@end
