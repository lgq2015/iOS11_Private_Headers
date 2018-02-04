/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineSyncManager : NSObject <CPLAbstractObject, CPLBackgroundDownloadsTaskDelegate, CPLEngineComponent, CPLMinglePulledChangesTaskDelegate, CPLPullFromTransportTaskDelegate, CPLPushToTransportTaskDelegate> {
    CPLBackgroundDownloadsTask * _backgroundDownloadsTask;
    id /* block */  _closingCompletionHandler;
    CPLEngineLibrary * _engineLibrary;
    bool  _foreground;
    bool  _hasTransactionForSyncSession;
    NSError * _lastError;
    NSMutableArray * _lastErrors;
    NSString * _libraryZoneName;
    NSObject<OS_dispatch_queue> * _lock;
    CPLMinglePulledChangesTask * _mingleTask;
    CPLPlatformObject * _platformObject;
    CPLPullFromTransportTask * _prePushTask;
    CPLPullFromTransportTask * _pullTask;
    CPLPushToTransportTask * _pushTask;
    NSMutableArray * _setupBarriers;
    bool  _setupIsDone;
    <CPLEngineTransportSetupTask> * _setupTask;
    unsigned long long  _shouldRestartSessionFromState;
    bool  _shouldTryToMingleImmediately;
    unsigned long long  _state;
    <CPLEngineStoreUserIdentifier> * _transportUserIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSError *lastError;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (nonatomic) bool shouldTryToMingleImmediately;
@property (setter=_setState:, nonatomic) unsigned long long state;
@property (readonly) Class superclass;

+ (id)descriptionForState:(unsigned long long)arg1;
+ (id)platformImplementationProtocol;
+ (id)shortDescriptionForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_advanceToNextStateLocked;
- (void)_advanceToNextStateLockedMinimalState:(unsigned long long)arg1;
- (void)_cancelAllTasksForBackgroundDownloads;
- (void)_cancelAllTasksForPrePush;
- (void)_cancelAllTasksForPull;
- (void)_cancelAllTasksForPush:(bool)arg1;
- (void)_cancelAllTasksForSetup;
- (void)_cancelAllTasksLocked;
- (void)_cancelAllTasksLockedDeferringPushTaskCancellationIfCurrentlyUploadingForeground:(bool)arg1;
- (id)_descriptionForBackgroundDownloadsTasks;
- (id)_descriptionForCurrentState;
- (id)_descriptionForLaunchedTasks;
- (id)_descriptionForPrePushTasks;
- (id)_descriptionForPullTasks;
- (id)_descriptionForPushTasks;
- (id)_descriptionForSetupTasks;
- (bool)_didFinishBackgroundDownloadsTask:(id)arg1 withError:(id)arg2 shouldStop:(bool*)arg3;
- (bool)_didFinishPrePushTask:(id)arg1 withError:(id)arg2 shouldStop:(bool*)arg3;
- (bool)_didFinishPullTask:(id)arg1 withError:(id)arg2 shouldStop:(bool*)arg3;
- (bool)_didFinishPushTask:(id)arg1 withError:(id)arg2 shouldStop:(bool*)arg3;
- (bool)_didFinishSetupTaskWithError:(id)arg1 shouldStop:(bool*)arg2;
- (bool)_launchNecessaryTasksForBackgroundDownloads;
- (bool)_launchNecessaryTasksForCurrentStateLocked;
- (bool)_launchNecessaryTasksForPrePush;
- (bool)_launchNecessaryTasksForPull;
- (bool)_launchNecessaryTasksForPush;
- (bool)_launchSetupTask;
- (void)_moveAllTasksToBackgroundLocked;
- (void)_notifyEndOfSyncSession;
- (bool)_prepareAndLaunchSyncTask:(id*)arg1;
- (float)_progressForBackgroundDownloadsTask:(id)arg1 progress:(float)arg2;
- (float)_progressForPrePushTask:(id)arg1 progress:(float)arg2;
- (float)_progressForPullTask:(id)arg1 progress:(float)arg2;
- (float)_progressForPushTask:(id)arg1 progress:(float)arg2;
- (void)_releasePowerAssertionForMingleTaskIfNecessary;
- (void)_resetErrorForSyncSession;
- (void)_restartSyncSessionFromStateLocked:(unsigned long long)arg1 cancelIfNecessary:(bool)arg2;
- (void)_retainPowerAssertionForMingleTaskIfNecessary;
- (void)_setErrorForSyncSession:(id)arg1;
- (void)_setState:(unsigned long long)arg1;
- (void)addSetupBarrier:(id /* block */)arg1;
- (void)beginClientWork:(id)arg1;
- (void)cancelCurrentSyncSession;
- (void)closeAndDeactivate:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)componentName;
- (void)endClientWork:(id)arg1;
- (id)engineLibrary;
- (void)getStatusDictionaryWithCompletionHandler:(id /* block */)arg1;
- (void)getStatusWithCompletionHandler:(id /* block */)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (void)kickOffSyncSession;
- (id)lastError;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (id)platformObject;
- (void)resetTransportUserIdentifierAndRestartSync:(bool)arg1;
- (void)setShouldTryToMingleImmediately:(bool)arg1;
- (void)setSyncSessionShouldBeForeground:(bool)arg1;
- (bool)shouldTryToMingleImmediately;
- (void)startSyncSessionWithMinimalPhase:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3;
- (id)task:(id)arg1 wantsToCheckRecordsExistence:(id)arg2 fetchRecordProperties:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (id)task:(id)arg1 wantsToDownloadBatchesFromSyncAnchor:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)task:(id)arg1 wantsToPushBatch:(id)arg2 progressBlock:(id /* block */)arg3 continuationBlock:(id /* block */)arg4;
- (id)task:(id)arg1 wantsToQueryTaskForCursor:(id)arg2 class:(Class)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;

@end
