/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineTransientRepository : CPLEngineStorage <CPLAbstractObject> {
    unsigned long long  _maximumCountOfRecordsInBatches;
    unsigned long long  _popState;
    NSMutableArray * _remainingClassesToBePopped;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maximumCountOfRecordsInBatches;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

+ (id)orderedClassesForChanges;
+ (id)orderedClassesForChangesForLargeSync;
+ (id)orderedClassesForDelete;

- (void).cxx_destruct;
- (bool)_appendBatchToStorage:(id)arg1 alreadyMingled:(bool)arg2 error:(id*)arg3;
- (bool)_popChangeBatchOfChangedRecords:(id*)arg1 maximumCount:(unsigned long long)arg2 stop:(bool*)arg3 error:(id*)arg4;
- (bool)_popChangeBatchOfDeletedRecords:(id*)arg1 maximumCount:(unsigned long long)arg2 error:(id*)arg3;
- (bool)appendBatch:(id)arg1 alreadyMingled:(bool)arg2 error:(id*)arg3;
- (id)changeWithIdentifier:(id)arg1;
- (unsigned long long)countOfAssetChanges;
- (unsigned long long)countOfUnmingledRecords;
- (bool)deleteMingledRecordsWithError:(id*)arg1;
- (bool)hasMingledRecords;
- (bool)hasRecordWithIdentifier:(id)arg1;
- (bool)hasUnmingledRecords;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (unsigned long long)maximumCountOfRecordsInBatches;
- (bool)openWithError:(id*)arg1;
- (bool)popChangeBatch:(id*)arg1 error:(id*)arg2;
- (bool)prepareForMinglingWithError:(id*)arg1;
- (bool)resetMingledRecordsWithError:(id*)arg1;
- (bool)resetTransientRepositoryWithError:(id*)arg1;
- (void)setMaximumCountOfRecordsInBatches:(unsigned long long)arg1;
- (bool)storeTransientSyncAnchor:(id)arg1 error:(id*)arg2;
- (id)transientSyncAnchor;

@end
