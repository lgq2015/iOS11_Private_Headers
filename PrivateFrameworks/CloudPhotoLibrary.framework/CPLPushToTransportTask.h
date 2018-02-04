/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPushToTransportTask : CPLEngineSyncTask {
    CPLChangeBatch * _batchToCommit;
    <CPLEngineTransportCheckRecordsExistenceTask> * _checkExistenceTask;
    NSString * _clientCacheIdentifier;
    unsigned long long  _countOfPushedChanges;
    CPLBatchExtractionStrategy * _currentStrategy;
    bool  _deferredCancel;
    unsigned long long  _estimatedCount;
    unsigned long long  _estimatedSize;
    CPLExtractedBatch * _extractedBatch;
    bool  _generatingSomeDerivatives;
    bool  _isUsingOverQuotaStrategy;
    unsigned long long  _lastReportedProgress;
    NSObject<OS_dispatch_queue> * _lock;
    CPLEnginePushRepository * _pushRepository;
    NSMutableDictionary * _recordsNeedingToBeFullyFetched;
    NSMutableDictionary * _recordsToCheckForExistence;
    NSMutableDictionary * _recordsWithForwardCompatibilityCheck;
    NSDictionary * _recordsWithGeneratedResources;
    NSMutableDictionary * _recordsWithResourcesToLookAhead;
    NSMutableDictionary * _recordsWithSparseResources;
    NSMutableDictionary * _recordsWithUntrustedCloudCache;
    bool  _resetStrategy;
    CPLEngineScheduler * _scheduler;
    bool  _shouldCheckResourcesAhead;
    bool  _shouldResetExceedingQuotaOnSuccess;
    bool  _shouldSetupEstimatedSize;
    double  _startOfDerivativesGeneration;
    double  _startOfIteration;
    <CPLEngineTransportGroup> * _transportGroup;
    CPLChangeBatch * _uploadBatch;
    NSArray * _uploadResourceTasks;
    <CPLEngineTransportUploadBatchTask> * _uploadTask;
}

@property (retain) <CPLPushToTransportTaskDelegate> *delegate;

- (void).cxx_destruct;
- (void)_checkForRecordExistence;
- (void)_deleteGeneratedResourcesAfterError:(id)arg1;
- (void)_detectUpdatesNeedingExistenceCheck:(id)arg1;
- (bool)_discardUploadedExtractedBatchWithError:(id*)arg1;
- (void)_doOneIteration;
- (void)_generateDerivativesForNextRecord:(id)arg1;
- (void)_generateNeededDerivatives;
- (bool)_markUploadedTasksDidFinishWithError:(id)arg1 error:(id*)arg2;
- (void)_popNextBatchAndContinue;
- (bool)_prepareResourcesToUploadInBatch:(id)arg1 error:(id*)arg2;
- (void)_prepareUploadBatchWithTransaction:(id)arg1 andStore:(id)arg2;
- (void)_pushTaskDidFinishWithError:(id)arg1;
- (bool)_reenqueueExtractedBatchWithRejectedRecords:(id)arg1 error:(id*)arg2;
- (void)_requireExistenceCheckForRecords:(id)arg1;
- (void)_updateChangeProperties:(id)arg1 withBaseChange:(id)arg2 withCopyProperty:(id /* block */)arg3;
- (void)_uploadBatch;
- (void)cancel;
- (void)cancel:(bool)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (void)launch;
- (void)pause;
- (void)resume;
- (id)taskIdentifier;

@end
