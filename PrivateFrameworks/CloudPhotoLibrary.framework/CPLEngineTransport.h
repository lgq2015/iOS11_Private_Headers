/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineTransport : NSObject <CPLAbstractObject, CPLEngineComponent> {
    CPLEngineLibrary * _engineLibrary;
    CPLPlatformObject * _platformObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

+ (id)platformImplementationProtocol;

- (void).cxx_destruct;
- (id)bestErrorForUnderlyingError:(id)arg1;
- (id)checkRecordsExistenceTaskForRecords:(id)arg1 fetchRecordProperties:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)closeAndDeactivate:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)componentName;
- (id)createGroupForAnalysisDownload;
- (id)createGroupForChangeDownload;
- (id)createGroupForChangeUpload;
- (id)createGroupForFeedback;
- (id)createGroupForInitialDownload;
- (id)createGroupForInitialUpload;
- (id)createGroupForLibraryStateCheck;
- (id)createGroupForMovieStreaming;
- (id)createGroupForPrefetch;
- (id)createGroupForPruningCheck;
- (id)createGroupForResetSync;
- (id)createGroupForResourcesDownload;
- (id)createGroupForSetup;
- (id)createGroupForThumbnailPrefetch;
- (id)createGroupForThumbnailsDownload;
- (id)downloadBatchTaskForSyncAnchor:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)engineLibrary;
- (id)getLibraryInfoAndUpdateState:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getPushEnvironmentWithCompletionHandler:(id /* block */)arg1;
- (void)getStatusDictionaryWithCompletionHandler:(id /* block */)arg1;
- (void)getStatusWithCompletionHandler:(id /* block */)arg1;
- (void)getSystemBudgetsWithCompletionHandler:(id /* block */)arg1;
- (id)inMemoryDownloadTaskForResource:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithEngineLibrary:(id)arg1;
- (void)noteClientIsBeginningSignificantWork;
- (void)noteClientIsEndingSignificantWork;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (id)platformObject;
- (id)queryTaskForCursor:(id)arg1 class:(Class)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)rampingRequestTaskForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)resourceCheckTaskForResources:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)resourcePublishTaskForResource:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)resourcesDownloadTaskWithCompletionHandler:(id /* block */)arg1;
- (id)sendFeedbackTaskForMessages:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setShouldOverride:(bool)arg1 forSystemBudgets:(unsigned long long)arg2;
- (id)setupTaskCreateLibraryIfNecessary:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)simpleDataForSyncAnchor:(id)arg1;
- (id)uploadBatchTaskForBatch:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;

@end
