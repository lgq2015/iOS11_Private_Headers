/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineClientCache : CPLEngineStorage <CPLAbstractObject> {
    NSArray * __lastModifiedProperties;
}

@property (setter=_setLastModifiedProperties:, copy) NSArray *_lastModifiedProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long estimatedLocalLibraryAssetCount;
@property (nonatomic, readonly) unsigned long long estimatedLocalLibrarySize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_lastModifiedProperties;
- (id)_relatedIdentifierForRecordWithIdentifier:(id)arg1;
- (void)_setLastModifiedProperties:(id)arg1;
- (bool)addRecord:(id)arg1 error:(id*)arg2;
- (bool)applyBatch:(id)arg1 direction:(unsigned long long)arg2 withError:(id*)arg3;
- (id)compactedBatchFromExpandedBatch:(id)arg1;
- (unsigned long long)countOfRecordsWithRelatedIdentifier:(id)arg1 class:(Class)arg2;
- (bool)deleteRecordWithIdentifier:(id)arg1 error:(id*)arg2;
- (unsigned long long)estimatedLocalLibraryAssetCount;
- (unsigned long long)estimatedLocalLibrarySize;
- (void)fillRelatedIdentifiersInChange:(id)arg1;
- (bool)hasRecordWithIdentifier:(id)arg1;
- (bool)hasRecordWithRelatedIdentifier:(id)arg1 class:(Class)arg2;
- (id)localChangeBatchFromCloudBatch:(id)arg1 usingMapping:(id)arg2 withError:(id*)arg3;
- (id)recordWithIdentifier:(id)arg1;
- (id)recordsWithRelatedIdentifier:(id)arg1;
- (id)recordsWithRelatedIdentifier:(id)arg1 class:(Class)arg2;
- (id)relatedIdentifierForRecordWithIdentifier:(id)arg1;
- (bool)resetWithError:(id*)arg1;
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithIdentifier:(id)arg2 error:(id*)arg3;
- (id)status;
- (id)statusDictionary;
- (bool)storeEstimatedLocalLibrarySize:(unsigned long long)arg1 estimatedAssetCount:(unsigned long long)arg2 error:(id*)arg3;
- (bool)updateRecord:(id)arg1 error:(id*)arg2;

@end
