/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCloudZoneChange : HMFObject {
    HMDCloudZone * _cloudZone;
    NSUUID * _identifier;
    HMDCloudGroupChange * _rootGroupChange;
    bool  _temporaryCache;
}

@property (nonatomic, readonly) NSArray *allTransactionStoreRowIDs;
@property (nonatomic) HMDCloudZone *cloudZone;
@property (nonatomic, readonly) bool controllerIdentifierChanged;
@property (nonatomic, readonly) bool decryptionFailed;
@property (nonatomic, readonly) bool encryptionFailed;
@property (nonatomic, readonly) bool hasValidChanges;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSArray *objectChanges;
@property (nonatomic, readonly) CKRecordID *privateZoneRootRecordID;
@property (nonatomic, readonly) NSArray *processedTransactionStoreRowIDs;
@property (nonatomic, retain) HMDCloudGroupChange *rootGroupChange;
@property (getter=isTemporaryCache, nonatomic, readonly) bool temporaryCache;

+ (id)shortDescription;

- (void).cxx_destruct;
- (void)addChangeWithDeletedRecordID:(id)arg1;
- (void)addChangeWithObjectChange:(id)arg1;
- (void)addChangeWithRecord:(id)arg1;
- (id)allTransactionStoreRowIDs;
- (id)cachedCloudRecordWithObjectID:(id)arg1;
- (id)changeWithObjectID:(id)arg1;
- (id)changeWithRecordName:(id)arg1;
- (id)cloudZone;
- (bool)controllerIdentifierChanged;
- (bool)decryptionFailed;
- (id)description;
- (bool)doesRecordExistInCacheWithObjectID:(id)arg1;
- (bool)doesRecordExistWithObjectID:(id)arg1;
- (bool)encryptionFailed;
- (void)fetchBatchToUpload:(id /* block */)arg1;
- (void)flushAllChangesToCache;
- (bool)hasValidChanges;
- (id)identifier;
- (id)init;
- (id)initWithZone:(id)arg1 temporaryCache:(bool)arg2;
- (bool)isTemporaryCache;
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(id /* block */)arg1;
- (bool)moreChangesToProcess;
- (id)objectChanges;
- (id)privateZoneRootRecordID;
- (id)processedTransactionStoreRowIDs;
- (void)removeChangeWithObjectID:(id)arg1;
- (id)rootGroupChange;
- (void)setAllChangedAsProcessed;
- (void)setCloudZone:(id)arg1;
- (void)setDeleteAsProcessedWithRecordID:(id)arg1;
- (void)setRootGroupChange:(id)arg1;
- (void)setSaveAsProcessedWithRecord:(id)arg1;
- (id)shortDescription;
- (id)transactionStoreRowIDsForObjectID:(id)arg1;

@end
