/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAWorker : NSObject <PHAWorkerConfiguration> {
    PHAServiceCancelableOperation * _currentOperation;
    <PHAAssetResourceDataLoading> * _dataLoader;
    PHAManager * _photoAnalysisManager;
    bool  _shutdownHasBeenCalled;
    NSObject<OS_dispatch_queue> * _userInitiatedRequestQueue;
    bool  _warmedUp;
}

@property (readonly) PHALibraryChangeListener *changeListener;
@property (retain) PHAServiceCancelableOperation *currentOperation;
@property (nonatomic, retain) <PHAAssetResourceDataLoading> *dataLoader;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<OS_dispatch_queue> *executiveStateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) bool isEnabled;
@property (readonly) NSURL *persistentStorageDirectoryURL;
@property (readonly) PHAManager *photoAnalysisManager;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (getter=isQuiescent, readonly) bool quiescent;
@property (readonly) Class superclass;
@property (retain) NSObject<OS_dispatch_queue> *userInitiatedRequestQueue;
@property (getter=isWarmedUp, nonatomic) bool warmedUp;

+ (long long)applicationDataFolderIdentifier;
+ (void)configureXPCConnection:(id)arg1;
+ (bool)persistsState;
+ (bool)runsExclusively;
+ (bool)wantsToReceiveXPCRequestsOnUserInitiatedRequestQueue;
+ (short)workerType;

- (void).cxx_destruct;
- (bool)allowCooldownForWorkerChange:(id)arg1;
- (void)assertUserInitiatedRequestQueue;
- (id)changeListener;
- (void)cooldown;
- (id)currentOperation;
- (id)dataLoader;
- (void)dispatchAsyncToExecutiveStateQueue:(id /* block */)arg1;
- (bool)dispatchAsyncToUserInitiatedRequestQueue:(id /* block */)arg1;
- (bool)dispatchSyncToUserInitiatedRequestQueue:(id /* block */)arg1;
- (id)executiveStateQueue;
- (bool)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (id)init;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (bool)isEnabled;
- (bool)isQuiescent;
- (bool)isWarmedUp;
- (id)libraryScopedWorkerPreferences;
- (id)libraryScopedWorkerPreferencesURL;
- (id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (id)persistentStorageDirectoryURL;
- (id)photoAnalysisManager;
- (id)photoLibrary;
- (void)setCurrentOperation:(id)arg1;
- (void)setDataLoader:(id)arg1;
- (void)setLibraryScopedWorkerPreferencesValue:(id)arg1 forKey:(id)arg2;
- (void)setUserInitiatedRequestQueue:(id)arg1;
- (void)setWarmedUp:(bool)arg1;
- (bool)shouldCooldownForConstraintChange:(id)arg1;
- (bool)shouldWarmupForConstraintChange:(id)arg1;
- (void)shutdown;
- (bool)startAcknowledgeDeletionsJob:(id)arg1 error:(id*)arg2;
- (bool)startAnalysisJob:(id)arg1 error:(id*)arg2;
- (void)startup;
- (id)statusAsDictionary;
- (bool)stopAcknowledgeDeletionsJob:(id)arg1 error:(id*)arg2;
- (bool)stopAnalysisJob:(id)arg1 error:(id*)arg2;
- (void)updateLibraryScopedWorkerPreferencesWithEntriesFromDictionary:(id)arg1 keysToRemove:(id)arg2;
- (id)userInitiatedRequestQueue;
- (void)warmup;
- (bool)warmupBasedOnConstraintChanges;
- (bool)workerJobCausesCooldown:(id)arg1;

@end
