/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCloudShareGroupChange : HMFObject {
    NSMutableArray * _changedObjectIDs;
    NSMutableArray * _changedRecordNames;
    HMDCloudGroupChange * _cloudGroupChange;
    HMDCloudShareGroup * _cloudShareGroup;
}

@property (nonatomic, readonly) NSArray *allTransactionStoreRowIDs;
@property (nonatomic, retain) NSMutableArray *changedObjectIDs;
@property (nonatomic, retain) NSMutableArray *changedRecordNames;
@property (nonatomic, readonly) HMDCloudGroupChange *cloudGroupChange;
@property (nonatomic, readonly) HMDCloudShareGroup *cloudShareGroup;
@property (nonatomic, readonly) bool hasValidChanges;
@property (nonatomic, readonly) NSArray *objectChanges;
@property (nonatomic, readonly) NSArray *processedTransactionStoreRowIDs;

+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_addChange:(id)arg1;
- (void)_determineDeletesFromCache:(id /* block */)arg1;
- (void)addChange:(id)arg1 setAsProcessing:(bool)arg2;
- (void)addChangeWithDeletedRecordID:(id)arg1;
- (void)addChangeWithObjectChange:(id)arg1;
- (void)addChangeWithRecord:(id)arg1;
- (void)addRootRecordChange;
- (id)allTransactionStoreRowIDs;
- (id)changeWithObjectID:(id)arg1;
- (id)changeWithRecordName:(id)arg1;
- (id)changedObjectIDs;
- (id)changedRecordNames;
- (id)cloudGroupChange;
- (id)cloudRecordWithName:(id)arg1;
- (id)cloudRecordWithObjectID:(id)arg1;
- (id)cloudShareGroup;
- (void)collectRecordsForBatch;
- (id)description;
- (void)fetchBatchToUpload:(id /* block */)arg1;
- (void)flushAllChangesToCache;
- (bool)hasValidChanges;
- (id)init;
- (id)initWithShareGroup:(id)arg1 groupChange:(id)arg2;
- (bool)isRootRecord:(id)arg1;
- (bool)isRootRecordName:(id)arg1;
- (bool)isRootRecordRequired;
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(id /* block */)arg1;
- (void)loadCloudRecordsFromCache:(id /* block */)arg1;
- (bool)moreChangesToProcess;
- (id)objectChanges;
- (id)processedTransactionStoreRowIDs;
- (void)removeChangeWithObjectID:(id)arg1;
- (id)rootRecordModelObject;
- (void)setChangedObjectIDs:(id)arg1;
- (void)setChangedRecordNames:(id)arg1;
- (void)setDeleteAsProcessedWithRecordID:(id)arg1;
- (void)setSaveAsProcessedWithRecord:(id)arg1;
- (id)shortDescription;

@end