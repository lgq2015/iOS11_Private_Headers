/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineResourceStorage : CPLEngineStorage <CPLAbstractObject> {
    NSCountedSet * _failedPruneStatsPerResourceType;
    CPLEngineFileStorage * _fileStorage;
    NSMutableSet * _identitiesToCommit;
    NSMutableSet * _identitiesToDelete;
    NSDate * _lastPruneRequestDate;
    NSObject<OS_dispatch_queue> * _pruneStatsQueue;
    unsigned long long  _successfulPruneSize;
    NSCountedSet * _successfulPruneStatsPerResourceType;
    NSURL * _tempFolderURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CPLEngineFileStorage *fileStorage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)checkIsEmpty;
- (bool)compactWithError:(id*)arg1;
- (id)createTempDestinationURLForResource:(id)arg1 error:(id*)arg2;
- (bool)dropResourceForUpload:(id)arg1 error:(id*)arg2;
- (id)fileStorage;
- (bool)hasResource:(id)arg1;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (void)notePruningRequestForResource:(id)arg1 successful:(bool)arg2;
- (void)notePruningRequestForResource:(id)arg1 successful:(bool)arg2 prunedSize:(unsigned long long)arg3;
- (bool)openWithError:(id*)arg1;
- (bool)releaseFileURL:(id)arg1 forResource:(id)arg2 error:(id*)arg3;
- (bool)resetWithError:(id*)arg1;
- (id)retainFileURLForResource:(id)arg1 error:(id*)arg2;
- (unsigned long long)sizeOfOriginalResourcesToUpload;
- (unsigned long long)sizeOfResourcesToUpload;
- (id)status;
- (id)statusDictionary;
- (bool)storeDownloadedResource:(id)arg1 atURL:(id)arg2 error:(id*)arg3;
- (bool)storeResourceForUpload:(id)arg1 error:(id*)arg2;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
