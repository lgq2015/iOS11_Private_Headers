/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCloudHomeZoneChange : HMDCloudZoneChange {
    HMDCloudShareGroupChange * _shareGroupChange;
}

@property (nonatomic, retain) HMDCloudShareGroupChange *shareGroupChange;

- (void).cxx_destruct;
- (void)addChangeWithDeletedRecordID:(id)arg1;
- (void)addChangeWithObjectChange:(id)arg1;
- (void)addChangeWithRecord:(id)arg1;
- (id)changeWithObjectID:(id)arg1;
- (id)changeWithRecordName:(id)arg1;
- (void)fetchBatchToUpload:(id /* block */)arg1;
- (void)flushAllChangesToCache;
- (id)initWithZone:(id)arg1 temporaryCache:(bool)arg2;
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(id /* block */)arg1;
- (bool)moreChangesToProcess;
- (id)objectChanges;
- (void)setDeleteAsProcessedWithRecordID:(id)arg1;
- (void)setSaveAsProcessedWithRecord:(id)arg1;
- (void)setShareGroupChange:(id)arg1;
- (id)shareGroupChange;

@end
