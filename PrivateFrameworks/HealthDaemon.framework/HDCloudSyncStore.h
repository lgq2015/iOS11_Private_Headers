/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncStore : NSObject <HDSyncStore, NSCopying> {
    bool  _canPush;
    NSString * _containerIdentifier;
    NSString * _ownerIdentifier;
    HDProfile * _profile;
    NSString * _sharingIdentifier;
    HDSharingPredicate * _sharingPredicate;
    NSUUID * _storeIdentifier;
    long long  _syncEpoch;
    long long  _syncProvenance;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, readonly) bool canPush;
@property (nonatomic, readonly, copy) NSString *containerIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *ownerIdentifier;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) int protocolVersion;
@property (nonatomic, readonly, copy) NSString *sharingIdentifier;
@property (nonatomic, readonly) HDSharingPredicate *sharingPredicate;
@property (nonatomic, readonly, copy) NSUUID *storeIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKRecordZoneID *zoneID;

+ (void)samplesDeletedInProfile:(id)arg1 byUser:(bool)arg2;
+ (id)syncStoreForProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 error:(id*)arg6;
+ (id)syncStoreForProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 sharingIdentifier:(id)arg6 predicate:(id)arg7 error:(id*)arg8;

- (void).cxx_destruct;
- (id)_excludedSyncEntities;
- (bool)canPush;
- (bool)canRecieveSyncObjectsForEntityClass:(Class)arg1;
- (bool)clearAllSyncAnchorsWithError:(id*)arg1;
- (id)containerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)enforceSyncEntityOrdering;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1;
- (id)getPersistedAnchorMapWithError:(id*)arg1;
- (id)initWithProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 sharingIdentifier:(id)arg6 predicate:(id)arg7 error:(id*)arg8;
- (id)orderedSyncEntities;
- (id)ownerIdentifier;
- (bool)persistState:(id)arg1 error:(id*)arg2;
- (id)persistedStateWithError:(id*)arg1;
- (id)profile;
- (int)protocolVersion;
- (id)receivedSyncAnchorMapWithError:(id*)arg1;
- (bool)replacePersistedAnchorMap:(id)arg1 error:(id*)arg2;
- (bool)resetReceivedSyncAnchorMapWithError:(id*)arg1;
- (void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2;
- (void)setZoneID:(id)arg1;
- (id)sharingIdentifier;
- (id)sharingPredicate;
- (bool)shouldContinueAfterAnchorValidationError:(id)arg1;
- (bool)shouldEnforceSequenceOrdering;
- (id)storeIdentifier;
- (bool)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;
- (id)syncEntityDependenciesForSyncEntity:(Class)arg1;
- (long long)syncEpoch;
- (long long)syncProvenance;
- (id)syncStoreDefaultSourceBundleIdentifier;
- (id)syncStoreForEpoch:(long long)arg1;
- (id)syncStoreIdentifier;
- (id)syncStoreTypeIdentifier;
- (id)zoneID;

@end
