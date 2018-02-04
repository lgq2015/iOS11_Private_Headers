/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncStoreRecord : HDCloudSyncRecord {
    bool  _active;
    NSString * _ownerIdentifier;
    NSString * _pendingOwner;
    HDCloudSyncSequenceRecord * _slotASequenceHeaderRecord;
    HDCloudSyncSequenceRecord * _slotBSequenceHeaderRecord;
    NSUUID * _storeIdentifier;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) NSString *ownerIdentifier;
@property (nonatomic, retain) NSString *pendingOwner;
@property (nonatomic, readonly) NSUUID *storeIdentifier;

+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isStoreRecord:(id)arg1;
+ (bool)isStoreRecordID:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1;
+ (id)recordWithCKRecord:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_indentedSequenceRecordDescription:(id)arg1;
- (id)activeSequenceHeaderRecord;
- (void)addNewSequenceHeaderRecordWithSyncAnchorMap:(id)arg1 includedIdentifiers:(id)arg2;
- (void)addSequenceHeaderRecord:(id)arg1;
- (id)clearCurrentSequenceHeaderRecord;
- (id)clearOldSequenceHeaderRecord;
- (long long)compare:(id)arg1;
- (id)currentSequenceHeaderRecord;
- (id)description;
- (bool)hasActiveSequence;
- (bool)hasSequenceWithFutureProtocolVersion;
- (id)initInSyncCircle:(id)arg1 ownerIdentifier:(id)arg2 storeIdentifier:(id)arg3;
- (id)initWithOwnerIdentifier:(id)arg1 storeIdentifier:(id)arg2 pendingOwner:(id)arg3 active:(bool)arg4 record:(id)arg5 schemaVersion:(long long)arg6;
- (bool)isActive;
- (id)oldSequenceHeaderRecord;
- (id)ownerIdentifier;
- (id)pendingOwner;
- (void)setActive:(bool)arg1;
- (void)setPendingOwner:(id)arg1;
- (id)storeIdentifier;

@end