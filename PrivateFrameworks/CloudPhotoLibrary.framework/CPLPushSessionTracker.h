/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPushSessionTracker : NSObject {
    NSMutableArray * _addedRecords;
    bool  _applyHasBeenSuccessful;
    NSMutableArray * _changesWithResourceChanges;
    NSMutableArray * _deletedRecordIdentifiers;
    bool  _diffHasBeenSuccessful;
    CPLChangeBatch * _diffedBatch;
    bool  _diffedBatchCanLowerQuota;
    bool  _expandHasBeenSuccessful;
    CPLChangeBatch * _expandedBatch;
    NSMutableDictionary * _fullRecords;
    unsigned long long  _ignoredRecordCount;
    CPLChangeBatch * _incomingBatch;
    NSMutableSet * _incomingBatchRecordIdentifiers;
    NSDate * _now;
    CPLPushChangeTasks * _pushChangeTasks;
    NSMutableDictionary * _resourcesToUpload;
    CPLEngineStore * _store;
    NSMutableDictionary * _storedClientRecords;
    NSMutableDictionary * _storedCloudRecords;
    NSMutableSet * _unquarantinedRecordIdentifiers;
    NSMutableArray * _updatedRecords;
}

@property (nonatomic, readonly) NSArray *addedRecords;
@property (nonatomic, readonly) bool applyHasBeenSuccessful;
@property (nonatomic, readonly) NSArray *deletedRecordIdentifiers;
@property (nonatomic, readonly) bool diffHasBeenSuccessful;
@property (nonatomic, readonly) CPLChangeBatch *diffedBatch;
@property (nonatomic, readonly) bool diffedBatchCanLowerQuota;
@property (nonatomic, readonly) bool expandHasBeenSuccessful;
@property (nonatomic, readonly) CPLChangeBatch *expandedBatch;
@property (nonatomic, readonly) bool hasPushChangeTasks;
@property (nonatomic, readonly) unsigned long long ignoredRecordCount;
@property (nonatomic, readonly) CPLChangeBatch *incomingBatch;
@property (nonatomic, copy) NSDate *now;
@property (nonatomic, readonly) CPLPushChangeTasks *pushChangeTasks;
@property (nonatomic, readonly) NSDictionary *resourcesToUpload;
@property (nonatomic, readonly) CPLEngineStore *store;
@property (nonatomic, readonly) NSSet *unquarantinedRecordIdentifiers;
@property (nonatomic, readonly) NSArray *updatedRecords;

- (void).cxx_destruct;
- (id)addedRecords;
- (bool)applyChangesToClientCacheWithError:(id*)arg1;
- (bool)applyHasBeenSuccessful;
- (bool)computeDiff;
- (bool)computeExpandedBatch;
- (id)deletedRecordIdentifiers;
- (bool)diffHasBeenSuccessful;
- (id)diffedBatch;
- (bool)diffedBatchCanLowerQuota;
- (void)enumerateDiffWithBlock:(id /* block */)arg1;
- (bool)expandHasBeenSuccessful;
- (id)expandedBatch;
- (bool)hasClientRecordWithLocalIdentifier:(id)arg1;
- (bool)hasCloudRecordWithLocalIdentifier:(id)arg1;
- (bool)hasIncomingRecordWithIdentifier:(id)arg1;
- (bool)hasPushChangeTasks;
- (unsigned long long)ignoredRecordCount;
- (id)incomingBatch;
- (id)initWithIncomingBatch:(id)arg1 store:(id)arg2 error:(id*)arg3;
- (bool)knowsClientRecordWithIdentifier:(id)arg1;
- (id)now;
- (id)pushChangeTasks;
- (id)resourcesToUpload;
- (void)setNow:(id)arg1;
- (bool)shouldCancelSyncSessionTryingToUploadChange:(id)arg1;
- (id)store;
- (id)storedClientRecordWithLocalIdentifier:(id)arg1;
- (id)storedCloudRecordWithLocalIdentifier:(id)arg1;
- (id)unquarantinedRecordIdentifiers;
- (id)updatedRecords;

@end
