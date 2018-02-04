/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSFetchAggregator : NSObject {
    CKDClientContext * _context;
    NSObject<OS_dispatch_source> * _fetchSource;
    NSObject<OS_dispatch_queue> * _opQueue;
    NSOperationQueue * _queue;
    NSMutableArray * _queuedFetches;
    NSMutableArray * _runningFetches;
    NSObject<OS_dispatch_source> * _timerSource;
}

@property (nonatomic) CKDClientContext *context;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *fetchSource;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *opQueue;
@property (nonatomic, retain) NSOperationQueue *queue;
@property (nonatomic, retain) NSMutableArray *queuedFetches;
@property (nonatomic, retain) NSMutableArray *runningFetches;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timerSource;

- (void).cxx_destruct;
- (void)_lockedFetchesAreReady;
- (id)_lockedGetQueuedFetchForOperation:(id)arg1 ofClass:(Class)arg2;
- (void)_lockedRescheduleFetchTimer;
- (void)_lockedTearDownFetchTimer;
- (id)context;
- (void)dealloc;
- (bool)fetchRequestForExistingOperation:(id)arg1 isDependentOnOperation:(id)arg2;
- (id)fetchSource;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)opQueue;
- (id)queue;
- (id)queuedFetches;
- (void)requestFetchOfRecordWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)requestFetchOfShareWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)requestFetchOfZoneWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)runningFetches;
- (void)setContext:(id)arg1;
- (void)setFetchSource:(id)arg1;
- (void)setOpQueue:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setQueuedFetches:(id)arg1;
- (void)setRunningFetches:(id)arg1;
- (void)setTimerSource:(id)arg1;
- (id)timerSource;

@end
