/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKPlayerCredentialController : NSObject {
    GKThreadsafeDictionary * _allCredentialsCache;
    long long  _loginCancelledCount;
    GKThreadsafeDictionary * _primaryCredentialCache;
    ACAccountStore * _store;
}

@property (nonatomic, retain) GKThreadsafeDictionary *allCredentialsCache;
@property long long loginCancelledCount;
@property (readonly) bool loginDisabled;
@property (nonatomic, retain) GKThreadsafeDictionary *primaryCredentialCache;
@property (nonatomic, retain) ACAccountStore *store;

+ (id)accessQueue;
+ (void)migrateOldAccountInformation;
+ (id)sharedController;

- (void)_transact:(id /* block */)arg1 complete:(id /* block */)arg2;
- (id)_transactAndWait:(id /* block */)arg1;
- (id)accessQueue;
- (void)accountStoreDidChange:(id)arg1;
- (id)allCredentialsCache;
- (id)allCredentialsForEnvironment:(long long)arg1;
- (id)credentialForPlayer:(id)arg1 environment:(long long)arg2;
- (id)credentialForUsername:(id)arg1 environment:(long long)arg2;
- (void)dealloc;
- (id)init;
- (void)invalidateCredentialCaches;
- (long long)loginCancelledCount;
- (bool)loginDisabled;
- (unsigned long long)loginStatusForCredential:(id)arg1;
- (id)primaryCredentialCache;
- (id)primaryCredentialForEnvironment:(long long)arg1;
- (id)pushCredentialForEnvironment:(long long)arg1;
- (void)removeAllCredentialsForEnvironment:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)removeCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)replaceCredential:(id)arg1 withCredential:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAllCredentialsCache:(id)arg1;
- (void)setCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setLoginCancelledCount:(long long)arg1;
- (void)setPrimaryCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPrimaryCredentialCache:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (id)suggestedUsername;

@end
