/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
 */

@interface NPSDomainAccessor : NSObject {
    NSObject<OS_dispatch_queue> * _externalQueue;
    NPSDomainAccessorInternal * _internalAccessor;
    NSObject<OS_dispatch_queue> * _invalidationQueue;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *externalQueue;
@property (nonatomic, retain) NPSDomainAccessorInternal *internalAccessor;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *invalidationQueue;
@property (nonatomic, readonly) NSUUID *pairingID;

// Image: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync

+ (id)copyDomainList;
+ (id)copyDomainListForPairingID:(id)arg1 pairingDataStore:(id)arg2;
+ (void)initialize;
+ (void)resolveActivePairedDevicePairingID:(id*)arg1 pairingDataStore:(id*)arg2;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (bool)boolForKey:(id)arg1 keyExistsAndHasValidFormat:(bool*)arg2;
- (id)copyKeyList;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (id)domain;
- (double)doubleForKey:(id)arg1;
- (double)doubleForKey:(id)arg1 keyExistsAndHasValidFormat:(bool*)arg2;
- (id)externalQueue;
- (float)floatForKey:(id)arg1;
- (float)floatForKey:(id)arg1 keyExistsAndHasValidFormat:(bool*)arg2;
- (id)initWithDomain:(id)arg1;
- (id)initWithDomain:(id)arg1 pairedDevice:(id)arg2;
- (id)initWithDomain:(id)arg1 pairingID:(id)arg2 pairingDataStore:(id)arg3;
- (id)initWithDomain:(id)arg1 queue:(id)arg2;
- (id)initWithDomain:(id)arg1 queue:(id)arg2 pairingID:(id)arg3 pairingDataStore:(id)arg4;
- (id)initWithInternalDomainAccessor:(id)arg1 queue:(id)arg2;
- (long long)integerForKey:(id)arg1;
- (long long)integerForKey:(id)arg1 keyExistsAndHasValidFormat:(bool*)arg2;
- (id)internalAccessor;
- (void)invalidate;
- (id)invalidationQueue;
- (long long)longForKey:(id)arg1;
- (long long)longForKey:(id)arg1 keyExistsAndHasValidFormat:(bool*)arg2;
- (id)objectForKey:(id)arg1;
- (void)objectForKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)pairingID;
- (id)queue;
- (void)removeObjectForKey:(id)arg1;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setExternalQueue:(id)arg1;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setInternalAccessor:(id)arg1;
- (void)setInvalidationQueue:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (id)stringArrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)synchronize;
- (void)synchronizeWithCompletionHandler:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion

+ (id)_npto_sharedDomain;

@end
