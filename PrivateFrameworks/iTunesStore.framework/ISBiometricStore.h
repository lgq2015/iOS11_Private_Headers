/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISBiometricStore : NSObject {
    NSCache * _contextCache;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSLock * _lock;
    bool  _shouldUseTouchID2;
}

@property long long biometricState;
@property (getter=isBiometricStateEnabled, readonly) bool biometricStateEnabled;
@property (readonly) NSNumber *lastRegisteredAccountIdentifier;

+ (id)diskBasedPaymentSheet;
+ (id)keychainLabelForAccountID:(id)arg1;
+ (id)sharedInstance;
+ (bool)shouldUseTouchID2;

- (void).cxx_destruct;
- (void)_updateTouchIDVersionWithBagKey:(id)arg1;
- (void)_updateUserDefaultsKey:(struct __CFString { }*)arg1 withBooleanValue:(bool)arg2;
- (void)addContextToCache:(id)arg1 withToken:(id)arg2;
- (long long)biometricAvailabilityForAccountIdentifier:(id)arg1;
- (long long)biometricState;
- (bool)canPerformBiometricOptIn;
- (bool)canPerformExtendedTouchIDActionsForAccountIdentifier:(id)arg1;
- (void)clearLastRegisteredAccountIdentifier;
- (id)createAttestationDataForAccountIdentifier:(id)arg1 error:(id*)arg2;
- (bool)deleteKeychainTokensForAccountIdentifier:(id)arg1 error:(id*)arg2;
- (id)fetchContextFromCacheWithToken:(id)arg1 evict:(bool)arg2;
- (unsigned long long)identityMapCount;
- (id)initWithBagListener;
- (bool)isBiometricStateEnabled;
- (bool)isIdentityMapValidForAccountIdentifier:(id)arg1;
- (id)lastRegisteredAccountIdentifier;
- (id)publicKeyDataForAccountIdentifier:(id)arg1 error:(id*)arg2;
- (void)registerAccountIdentifier:(id)arg1;
- (void)saveIdentityMapForAccountIdentifier:(id)arg1;
- (void)setBiometricState:(long long)arg1;
- (bool)shouldUseTouchID2;
- (id)signData:(id)arg1 context:(id)arg2 error:(id*)arg3;

@end
