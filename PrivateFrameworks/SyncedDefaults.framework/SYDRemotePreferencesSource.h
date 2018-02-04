/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

@interface SYDRemotePreferencesSource : NSObject {
    bool  _forceNextSynchronization;
    long long  _generationCount;
    NSObject<OS_os_transaction> * _isExecutingForClient;
    double  _lastAccess;
    long long  _lastGenerationFromDisk;
    NSObject<OS_dispatch_source> * _memoryWarningSource;
    NSObject<OS_dispatch_queue> * _protectionQueue;
    struct __CFDictionary { } * cache;
    SYDClient * client;
    struct __CFDictionary { } * configurationDictionary;
    struct __CFSet { } * dirtyKeys;
    NSMutableDictionary * externalChanges;
    long long  initialSyncChangeCount;
    unsigned char  isInitialSync;
    struct __CFString { } * preferenceID;
    id /* block */  registrationBlock;
    NSObject<OS_dispatch_queue> * registrationQueue;
    long long  storageChangeCount;
    struct __CFURL { } * urlOnDisk;
}

+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+ (id)SYDRemotePreferencesSourceDidChangeNotification;
+ (void)initialize;
+ (void)migrateSyncedDefaultsForBundleIdentifier:(id)arg1;
+ (void)noteAccountChanges:(id)arg1;
+ (void)resetAllApplicationsWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_cachePlistFromDisk;
- (void)_createMemoryWarningSource;
- (void)_didReceiveMemoryWarning;
- (void)_forceRegistrationNow;
- (void)_locked_syd_end_transaction;
- (void)_locked_syd_start_transaction;
- (void)_storeConfiguration:(struct __CFDictionary { }*)arg1;
- (unsigned char)_synchronizeForced:(unsigned char)arg1;
- (id)_warningSource;
- (long long)configurationValueForKey:(struct __CFString { }*)arg1;
- (struct __CFDictionary { }*)copyConfigurationDictionary;
- (struct __CFDictionary { }*)copyDictionary;
- (id)copyExternalChangesWithChangeCount:(long long*)arg1;
- (struct __CFArray { }*)copyKeyList;
- (void)dealloc;
- (void)discardExternalChangesForChangeCount:(long long)arg1;
- (long long)generationCount;
- (void*)getValueForKey:(struct __CFString { }*)arg1;
- (unsigned char)hasExternalChanges;
- (id)initWithApplicationID:(struct __CFString { }*)arg1 shared:(bool)arg2;
- (id)initWithApplicationID:(struct __CFString { }*)arg1 storeID:(struct __CFString { }*)arg2 shared:(bool)arg3;
- (id)initWithApplicationID:(struct __CFString { }*)arg1 storeID:(struct __CFString { }*)arg2 shared:(bool)arg3 additionalSource:(bool)arg4;
- (id)initWithApplicationID:(struct __CFString { }*)arg1 storeID:(struct __CFString { }*)arg2 shared:(bool)arg3 additionalSource:(bool)arg4 containerPath:(struct __CFString { }*)arg5;
- (unsigned char)isInitialSync;
- (long long)maximumDataLengthPerKey;
- (long long)maximumKeyCount;
- (long long)maximumKeyLength;
- (long long)maximumTotalDataLength;
- (void)ping;
- (void)registerForSynchronizedDefaults;
- (void)scheduleRemoteSynchronization;
- (id)serverSideDebugDescription;
- (void)setDefaultsConfiguration:(id)arg1;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void)synchronizationWithCompletionHandler:(id /* block */)arg1;
- (unsigned char)synchronize;
- (unsigned char)synchronizeForced:(unsigned char)arg1;
- (void)unregisterForSynchronizedDefaults;
- (void)updateConfiguration;

@end
