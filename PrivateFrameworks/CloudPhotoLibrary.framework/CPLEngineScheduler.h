/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineScheduler : NSObject <CPLAbstractObject, CPLEngineComponent> {
    NSMutableSet * _blockWaiters;
    NSMutableDictionary * _blockedElements;
    NSCountedSet * _blockingElements;
    NSObject<OS_dispatch_queue> * _blockingLock;
    unsigned long long  _currentRequestGeneration;
    unsigned long long  _currentSyncState;
    bool  _delayedFirstSyncBecauseOfRapidLaunch;
    bool  _didStartFirstSync;
    bool  _didWriteFirstSyncMarker;
    unsigned long long  _disablingMinglingCount;
    NSCountedSet * _disablingReasons;
    CPLEngineLibrary * _engineLibrary;
    unsigned long long  _foregroundCalls;
    double  _intervalForRetry;
    unsigned long long  _lastRequestGeneration;
    NSDate * _lastSyncSessionDateCausedByForeground;
    bool  _needsPrePush;
    NSDate * _nextScheduledDate;
    bool  _opened;
    CPLPlatformObject * _platformObject;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _requiredFirstState;
    id /* block */  _requiredStateObserverBlock;
    id /* block */  _shouldBackOffOnErrorBlock;
    unsigned long long  _significantWorkCalls;
    NSDate * _unavailabilityLimitDate;
    NSCountedSet * _unblockOnceElements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) bool needsPrePush;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (nonatomic, copy) id /* block */ requiredStateObserverBlock;
@property (nonatomic, copy) id /* block */ shouldBackOffOnErrorBlock;
@property (readonly) Class superclass;

+ (id)platformImplementationProtocol;
+ (id)validElements;

- (void).cxx_destruct;
- (void)_backOff;
- (void)_disableRetryAfterLocked;
- (void)_disableSynchronizationWithReasonLocked:(id)arg1;
- (void)_enableSynchronizationWithReasonLocked:(id)arg1;
- (void)_handleResetAnchorWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleResetClientCacheWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleResetCloudCacheWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_minimalDateForFirstSync;
- (void)_noteServerIsUnavailableWithErrorLocked:(id)arg1;
- (void)_noteSyncSessionNeededFromState:(unsigned long long)arg1;
- (id)_pathToFirstSynchronizationMarker;
- (void)_reallyStartSyncSession;
- (void)_reallyUnscheduleSession;
- (void)_resetFirstSynchronizationMarker;
- (void)_scheduleNextSyncSession;
- (void)_setRequiredFirstState:(unsigned long long)arg1;
- (void)_startRequiredSyncSession;
- (void)_startSyncSessionWithMinimalPhase:(unsigned long long)arg1;
- (bool)_syncSessionIsPossible;
- (void)_unscheduleNextSyncSession;
- (void)_writeFirstSynchronizationMarker;
- (void)blockEngineElement:(id)arg1;
- (void)closeAndDeactivate:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)componentName;
- (void)disableMingling;
- (void)disableSynchronizationWithReason:(id)arg1;
- (void)enableMingling;
- (void)enableSynchronizationWithReason:(id)arg1;
- (id)engineLibrary;
- (void)getStatusDictionaryWithCompletionHandler:(id /* block */)arg1;
- (void)getStatusWithCompletionHandler:(id /* block */)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (bool)isClientInForeground;
- (bool)isMinglingEnabled;
- (bool)isSynchronizationDisabledWithReasonError:(id*)arg1;
- (void)kickOffSyncSession;
- (bool)needsPrePush;
- (bool)needsPrepush;
- (void)noteClientIsBeginningSignificantWork;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)noteClientIsInSyncWithClientCache;
- (void)noteClientIsNotInSyncWithClientCache;
- (void)noteNetworkStateDidChange;
- (void)notePullQueueIsFull;
- (void)notePushQueueIsEmpty;
- (void)notePushQueueIsFull;
- (void)noteResourceDownloadQueueIsFull;
- (void)noteServerHasChanges;
- (void)noteServerIsUnavailableWithError:(id)arg1;
- (void)noteSyncSessionFailedDuringPhase:(unsigned long long)arg1 withError:(id)arg2;
- (void)noteSyncSessionStateWillBeAttempted:(unsigned long long)arg1;
- (void)noteSyncSessionSucceeded;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (id)platformObject;
- (id /* block */)requiredStateObserverBlock;
- (void)resetBackoffInterval;
- (void)setRequiredStateObserverBlock:(id /* block */)arg1;
- (void)setShouldBackOffOnErrorBlock:(id /* block */)arg1;
- (id /* block */)shouldBackOffOnErrorBlock;
- (void)startRequiredSyncSessionNow;
- (void)unblockEngineElement:(id)arg1;
- (void)unblockEngineElementOnce:(id)arg1;
- (void)waitForEngineElementToBeBlocked:(id)arg1;
- (void)willRunEngineElement:(id)arg1;

@end
