/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMetadataCache : CKSQLite {
    NSObject<OS_dispatch_queue> * _cacheQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cacheQueue;

+ (id)dbFileName;
+ (id)sharedCache;

- (void).cxx_destruct;
- (id)appContainerIntersectionMetadataForAppContainerTuple:(id)arg1;
- (id)applicationMetadataForApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2;
- (id)cacheQueue;
- (id)containerInfoForContainerID:(id)arg1;
- (id)dateOfLastTokenUpdate;
- (void)expungeWithCurrentAccountIdentifier:(id)arg1 forceRemove:(bool)arg2;
- (id)globalConfiguration;
- (id)init;
- (id)inlock_applicationMetadataForApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2;
- (id)inlock_containerInfoForContainerID:(id)arg1;
- (void)inlock_setDateOfLastTokenUpdate:(id)arg1;
- (id)knownAppContainerTuples;
- (id)knownApplicationBundleIDs;
- (id)pushTokenForAppContainerTuple:(id)arg1;
- (void)removeContainerID:(id)arg1;
- (void)removeKnownApplicationBundleID:(id)arg1;
- (void)setAppContainerIntersectionMetadata:(id)arg1 forAppContainerTuple:(id)arg2;
- (void)setApplicationMetadata:(id)arg1 forApplicationBundleID:(id)arg2 sourceApplicationBundleID:(id)arg3;
- (void)setCacheQueue:(id)arg1;
- (void)setContainerInfo:(id)arg1 forContainerID:(id)arg2;
- (void)setDateOfLastTokenUpdate:(id)arg1;
- (void)setGlobalConfiguration:(id)arg1;
- (void)setPushToken:(id)arg1 forAppContainerTuple:(id)arg2;

@end
