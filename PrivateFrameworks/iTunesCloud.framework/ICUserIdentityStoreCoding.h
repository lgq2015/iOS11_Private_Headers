/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICUserIdentityStoreCoding : NSObject <NSSecureCoding> {
    ICValueHistory * _activeAccountHistory;
    ICValueHistory * _activeLockerAccountHistory;
    <ICUserIdentityStoreBackend> * _backend;
    ICDelegateAccountStoreOptions * _delegateAccountStoreOptions;
    long long  _identityStoreStyle;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _uniqueIdentifier;
}

@property (nonatomic, copy) ICValueHistory *activeAccountHistory;
@property (nonatomic, copy) ICValueHistory *activeLockerAccountHistory;
@property (nonatomic, copy) <ICUserIdentityStoreBackend> *backend;
@property (nonatomic, copy) ICDelegateAccountStoreOptions *delegateAccountStoreOptions;
@property (nonatomic, readonly) long long identityStoreStyle;
@property (nonatomic, readonly) long long uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initCommon;
- (id)activeAccountHistory;
- (id)activeLockerAccountHistory;
- (id)backend;
- (id)delegateAccountStoreOptions;
- (void)encodeWithCoder:(id)arg1;
- (long long)identityStoreStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentityStoreStyle:(long long)arg1;
- (void)lock:(id /* block */)arg1;
- (void)setActiveAccountHistory:(id)arg1;
- (void)setActiveLockerAccountHistory:(id)arg1;
- (void)setBackend:(id)arg1;
- (void)setDelegateAccountStoreOptions:(id)arg1;
- (long long)uniqueIdentifier;

@end
