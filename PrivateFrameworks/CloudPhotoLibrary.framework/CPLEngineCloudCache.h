/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineCloudCache : CPLEngineStorage <CPLAbstractObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasFinishedAFullSync;
@property (readonly) bool hasFinishedInitialSync;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (unsigned long long)_indexOfCurrentClassForInitialQueries;
- (bool)_remapRecord:(id)arg1 inBatch:(id)arg2 error:(id*)arg3;
- (bool)addRecord:(id)arg1 isFinal:(bool)arg2 error:(id*)arg3;
- (id)allRecordsIsFinal:(bool)arg1;
- (bool)applyBatch:(id)arg1 isFinal:(bool)arg2 direction:(unsigned long long)arg3 withError:(id*)arg4;
- (Class)classOfRecordsForInitialQuery;
- (id)cloudChangeBatchFromBatch:(id)arg1 usingMapping:(id)arg2 isFinal:(bool)arg3 withError:(id*)arg4;
- (bool)commitStagedChangesWithError:(id*)arg1;
- (bool)confirmAllRecordsWithError:(id*)arg1;
- (bool)deleteRecordWithIdentifier:(id)arg1 isFinal:(bool)arg2 error:(id*)arg3;
- (bool)disableInitialQueriesWithError:(id*)arg1;
- (bool)discardStagedChangesWithError:(id*)arg1;
- (id)downloadTransportGroup;
- (void)getCommittedRecord:(id*)arg1 stagedRecord:(id*)arg2 forIdentifier:(id)arg3;
- (bool)hasFinishedAFullSync;
- (bool)hasFinishedInitialSync;
- (bool)hasRecordWithIdentifier:(id)arg1;
- (id)initialSyncAnchor;
- (bool)markInitialQueryIsDoneForRecordsOfClass:(Class)arg1 error:(id*)arg2;
- (id)recordWithIdentifier:(id)arg1 isConfirmed:(bool*)arg2;
- (id)recordWithIdentifier:(id)arg1 isFinal:(bool)arg2;
- (id)recordsOfClass:(Class)arg1 isFinal:(bool)arg2;
- (id)recordsWithRelatedIdentifier:(id)arg1 isFinal:(bool)arg2;
- (id)remainingClassesForInitialQuery;
- (bool)remapAllRecordsWithPreviousIdentifier:(id)arg1 newIdentifier:(id)arg2 error:(id*)arg3;
- (bool)resetInitialSyncAnchorWithError:(id*)arg1;
- (bool)resetSyncAnchorWithError:(id*)arg1;
- (bool)resetWithError:(id*)arg1;
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithIdentifier:(id)arg2 error:(id*)arg3;
- (bool)setInitialSyncAnchor:(id)arg1 error:(id*)arg2;
- (bool)setSyncAnchor:(id)arg1 error:(id*)arg2;
- (bool)setupAnchorResetTransportGroupWithError:(id*)arg1;
- (bool)setupInitialSyncTransportGroupsWithError:(id*)arg1;
- (bool)setupResetSyncTransportGroupWithError:(id*)arg1;
- (bool)storeDownloadTransportGroup:(id)arg1 error:(id*)arg2;
- (bool)storeUploadTransportGroup:(id)arg1 error:(id*)arg2;
- (id)syncAnchor;
- (bool)updateInitialSyncTransportGroupEstimatedSize:(unsigned long long)arg1 assetCount:(unsigned long long)arg2 error:(id*)arg3;
- (bool)updateRecord:(id)arg1 isFinal:(bool)arg2 error:(id*)arg3;
- (id)uploadTransportGroup;

@end
