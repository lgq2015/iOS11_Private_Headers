/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSEncryptedCloudKeyValueStore : NSObject {
    id  _accountUpdateObserver;
    NSUbiquitousKeyValueStore * _backingStore;
    NSString * _dsid;
    struct RetainPtr<_PCSIdentitySetData *> { 
        void *m_ptr; 
    }  _pcsIdentitySet;
    struct RetainPtr<_OpaquePCSShareProtection *> { 
        void *m_ptr; 
    }  _pcsShareProtection;
    struct RetainPtr<const __CFData *> { 
        void *m_ptr; 
    }  _serializedPCSObject;
}

@property (nonatomic, readonly) NSUbiquitousKeyValueStore *backingStore;

+ (id)additionalStoreWithIdentifier:(id)arg1;
+ (id)defaultStore;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)_currentPCSConfiguration;
- (id)_dsidForPrimaryAccount;
- (id)_objectForKey:(id)arg1 ofClass:(Class)arg2;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (id)arrayForKey:(id)arg1;
- (id)backingStore;
- (void)dealloc;
- (id)decryptEntry:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (id)encryptPropertyList:(id)arg1;
- (id)initWithStore:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)synchronize;
- (void)synchronizeWithCompletionHandler:(id /* block */)arg1;

@end
