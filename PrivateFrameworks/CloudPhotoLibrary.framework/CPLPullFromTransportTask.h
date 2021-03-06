/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPullFromTransportTask : CPLEngineSyncTask {
    NSString * _clientCacheIdentifier;
    Class  _currentQueryClass;
    <CPLEngineTransportDownloadBatchTask> * _downloadTask;
    <CPLEngineTransportGetLibraryInfoTask> * _getLibraryInfoTask;
    bool  _gotSomeChanges;
    bool  _ignoreNewBatches;
    NSData * _initialSyncAnchor;
    bool  _isPrePushPhase;
    NSData * _lastKnownSyncAnchor;
    <CPLEngineTransportQueryTask> * _queryTask;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _rewindFeatureVersion;
    NSData * _rewindSyncAnchor;
    <CPLEngineTransportGroup> * _transportGroup;
    bool  _useCourtesyMingling;
    CPLFeatureVersionHistory * _versionHistory;
}

@property (retain) <CPLPullFromTransportTaskDelegate> *delegate;
@property (setter=setPrePushPhase:, nonatomic) bool isPrePushPhase;

- (void).cxx_destruct;
- (void)_checkServerFeatureVersion:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)_checkStateBeforeContinuingInTransaction:(id)arg1;
- (void)_extractAndMingleAssetsIfPossibleFromBatch:(id)arg1 inTransaction:(id)arg2;
- (void)_handleNewBatchFromChanges:(id)arg1 newSyncAnchor:(id)arg2;
- (void)_handleNewBatchFromChanges:(id)arg1 newSyncAnchor:(id)arg2 inTransaction:(id)arg3;
- (void)_handleNewBatchFromQuery:(id)arg1 newCursor:(id)arg2;
- (void)_handleNewBatchFromQuery:(id)arg1 newCursor:(id)arg2 inTransaction:(id)arg3;
- (void)_launch;
- (void)_launchFetchChangesFromSyncAnchor:(id)arg1;
- (void)_launchNextQueryTask;
- (void)_launchPullTasksAndDisableQueries:(bool)arg1;
- (void)_launchQueryForClass:(Class)arg1 cursor:(id)arg2;
- (void)_updateLastFeatureVersionAndRelaunchFetchChangesFromSyncAnchor:(id)arg1;
- (void)cancel;
- (id)initWithEngineLibrary:(id)arg1;
- (bool)isPrePushPhase;
- (void)launch;
- (void)pause;
- (void)resume;
- (void)setPrePushPhase:(bool)arg1;
- (void)taskDidFinishWithError:(id)arg1;
- (id)taskIdentifier;

@end
