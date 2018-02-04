/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivitySummaryQueryHelper : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver> {
    HDActivitySummaryBuilder * _activitySummaryBuilder;
    NSObject<OS_dispatch_queue> * _clientQueue;
    _HKFilter * _filter;
    id /* block */  _initialResultsHandler;
    bool  _initialResultsSent;
    long long  _lastProcessedAnchor;
    bool  _needsUpdateAfterUnlock;
    HDSQLitePredicate * _predicate;
    NSMutableDictionary * _previousActivityCachesByCacheIndex;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldIncludePrivateProperties;
    id /* block */  _updateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id /* block */ initialResultsHandler;
@property bool shouldIncludePrivateProperties;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id /* block */ updateHandler;

- (void).cxx_destruct;
- (id)_fetchActivityCacheIndicesWithAnchor:(long long)arg1 predicate:(id)arg2 error:(id*)arg3;
- (void)_onClientQueue:(id /* block */)arg1;
- (id)_queue_addActivityCacheToCachedSamples:(id)arg1;
- (void)_queue_deliverActivitySummariesMatchingPredicate:(id)arg1;
- (void)_queue_deliverActivitySummariesToClient:(id)arg1;
- (void)_queue_deliverErrorToClient:(id)arg1;
- (void)_queue_deliverInitialResults;
- (void)_queue_deliverUpdates;
- (id)_queue_fetchActivitySummariesWithPredicate:(id)arg1 error:(id*)arg2;
- (id)_queue_filterActivityCaches:(id)arg1;
- (void)_queue_start;
- (void)_queue_stop;
- (void)_queue_updateActivitySummariesWithNewActivityCaches:(id)arg1 anchor:(id)arg2;
- (void)_queue_updatePreviousActivityCachesWithNewCaches:(id)arg1;
- (bool)_shouldStopProcessing;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 filter:(id)arg2 initialResultsHandler:(id /* block */)arg3 updateHandler:(id /* block */)arg4;
- (id /* block */)initialResultsHandler;
- (void)pause;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)setShouldIncludePrivateProperties:(bool)arg1;
- (bool)shouldIncludePrivateProperties;
- (void)start;
- (void)stop;
- (id /* block */)updateHandler;

@end
