/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSourceManager : NSObject {
    HDDatabaseValueCache * _clientSourceCache;
    HDDatabaseValueCache * _localSourceEntityCache;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)_applicationNameForBundleIdentifier:(id)arg1;
+ (bool)_isLocalDeviceBundleIdentifier:(id)arg1;
+ (bool)_isSpartanDeviceBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_applicationsUninstalledNotification:(id)arg1;
- (id)_createSourceEntityForBundleIdentifier:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3 isCurrentDevice:(bool)arg4 productType:(id)arg5 error:(id*)arg6;
- (id)_createSourceEntityForClientWithBundleIdentifier:(id)arg1 name:(id)arg2 entitlements:(id)arg3 error:(id*)arg4;
- (id)_createSourceEntityForLocalDeviceWithError:(id*)arg1;
- (id)_createSourceEntityForSpartanDeviceWithError:(id*)arg1;
- (void)_deleteSourceIfNoSampleFoundWithBundleIdentifier:(id)arg1;
- (id)_fetchClientSourceForPersistentID:(id)arg1 error:(id*)arg2;
- (id)_getNameForBundleIdentifier:(id)arg1 isCurrentDevice:(bool)arg2;
- (id)_predicateForSourceBundleIdentifier:(id)arg1 localOnly:(bool)arg2;
- (id)_sourceForBundleIdentifier:(id)arg1 createSourceBlock:(id /* block */)arg2 modifySourceBlock:(id /* block */)arg3 error:(id*)arg4;
- (unsigned long long)_sourceOptionsForApplicationEntitlements:(id)arg1;
- (id)_sourcePersistentIDsFromSourceEntities:(id)arg1;
- (id)allSourcesForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)allSourcesWithError:(id*)arg1;
- (id)allWatchSourcesWithError:(id*)arg1;
- (id)clientSourceForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)clientSourceForPersistentID:(id)arg1 error:(id*)arg2;
- (id)clientSourceForSourceEntities:(id)arg1 error:(id*)arg2;
- (id)clientSourceForSourceEntity:(id)arg1 error:(id*)arg2;
- (id)clientSourceForUUID:(id)arg1 error:(id*)arg2;
- (id)clientSourcesForSourceIDs:(id)arg1 error:(id*)arg2;
- (id)createOrUpdateSourceForClient:(id)arg1 error:(id*)arg2;
- (bool)createSourcesWithCodables:(id)arg1 provenance:(long long)arg2 error:(id*)arg3;
- (bool)deleteSourceWithBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)healthAppSourceWithError:(id*)arg1;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (id)localDeviceSourceWithError:(id*)arg1;
- (id)localSourceForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)localSourceForSourceID:(id)arg1 error:(id*)arg2;
- (bool)setLocalDeviceSourceUUID:(id)arg1 bundleIdentifier:(id)arg2 error:(id*)arg3;
- (id)sourceEntityForSource:(id)arg1 createOrUpdateIfNecessary:(bool)arg2 error:(id*)arg3;
- (id)sourceForAppleDeviceWithUUID:(id)arg1 identifier:(id)arg2 name:(id)arg3 productType:(id)arg4 createIfNecessary:(bool)arg5 error:(id*)arg6;
- (id)sourceForApplicationIdentifier:(id)arg1 createOrUpdateIfNecessary:(bool)arg2 entitlements:(id)arg3 name:(id)arg4 error:(id*)arg5;
- (id)sourceForClient:(id)arg1 error:(id*)arg2;
- (id)sourceForCodableSource:(id)arg1 provenance:(long long)arg2 createIfNecessary:(bool)arg3 isDeleted:(bool*)arg4 error:(id*)arg5;
- (id)sourceUUIDForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (bool)updateCurrentDeviceNameWithError:(id*)arg1;

@end
