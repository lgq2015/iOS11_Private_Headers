/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDJobManager : ASDBaseClient <ASDApplicationProgressDelegate, ASDJobManagerClient, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _applicationProgress;
    NSXPCConnection * _connection;
    NSArray * _jobs;
    int  _launchNotificationToken;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    ASDJobManagerOptions * _options;
    ASDApplicationProgressObserver * _progressObserver;
    NSMutableSet * _removedJobs;
    NSObject<OS_dispatch_queue> * _xpcQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyUpdates:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_connectToDaemon;
- (void)_finishJobsWithIDs:(id)arg1;
- (void)_getJobsUsingBlock:(id /* block */)arg1;
- (void)_getJobsWithIDs:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_handleInterruptedConnection:(id)arg1;
- (void)_handleInvalidatedConnection:(id)arg1;
- (void)_invalidate;
- (id)_mapAllJobsToIDs;
- (void)_registerManagerWithOptions:(id)arg1;
- (void)_sendJobsChanged:(id)arg1;
- (void)_sendJobsCompleted:(id)arg1;
- (void)_sendProgressUpdated:(id)arg1;
- (void)_sendStatesUpdated:(id)arg1;
- (void)_setupConnection;
- (bool)_shouldAutomaticallyReconnect;
- (bool)_trackProgressForBundleID:(id)arg1;
- (void)_updateActiveIDs:(id)arg1;
- (void)_willFinishJobs:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)cancelJobsWithIDs:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)dealloc;
- (void)didChangeJobs:(id)arg1;
- (void)didCompleteJobs:(id)arg1;
- (void)didCompleteJobs:(id)arg1 finalPhases:(id)arg2;
- (void)didUpdateApplicationProgress:(id)arg1;
- (void)didUpdateProgress:(id)arg1;
- (void)didUpdateStates:(id)arg1;
- (void)finishJobs:(id)arg1;
- (void)getJobsUsingBlock:(id /* block */)arg1;
- (void)getJobsWithIDs:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (void)invalidate;
- (void)pauseJobsWithIDs:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)removeObserver:(id)arg1;
- (void)resumeJobsWithIDs:(id)arg1 completionBlock:(id /* block */)arg2;

@end
