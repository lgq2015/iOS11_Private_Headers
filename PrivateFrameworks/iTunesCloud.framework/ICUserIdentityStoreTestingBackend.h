/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICUserIdentityStoreTestingBackend : NSObject <ICUserIdentityStoreBackend> {
    NSNumber * _activeAccountDSID;
    NSNumber * _activeLockerAccountDSID;
    <ICUserIdentityStoreBackendDelegate> * _delegate;
    NSMutableDictionary * _identityProperties;
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

+ (void)setDefaultActiveAccountDSID:(id)arg1;
+ (void)setDefaultActiveLockerAccountDSID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_propertiesToSaveForProperties:(id)arg1;
- (id)activeAccountDSID;
- (id)activeLockerAccountDSID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)identityPropertiesForDSID:(id)arg1;
- (id)init;
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
