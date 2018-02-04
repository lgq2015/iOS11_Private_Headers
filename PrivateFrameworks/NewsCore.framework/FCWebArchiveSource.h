/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCWebArchiveSource : NSObject <FCCacheCoordinatorDelegate, FCCacheFlushing, FCFetchCoordinatorDelegate> {
    FCCacheCoordinator * _cacheCoordinator;
    NSURL * _directoryURLForCachedWebArchives;
    FCFetchCoordinator * _fetchCoordinator;
    NSObject<OS_dispatch_queue> * _initQueue;
    FCThreadSafeMutableDictionary * _keysToURLs;
    FCWebArchiveStore * _webArchiveStore;
}

@property (nonatomic, retain) FCCacheCoordinator *cacheCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *directoryURLForCachedWebArchives;
@property (nonatomic, retain) FCFetchCoordinator *fetchCoordinator;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *initQueue;
@property (nonatomic, retain) FCThreadSafeMutableDictionary *keysToURLs;
@property (readonly) Class superclass;
@property (nonatomic, retain) FCWebArchiveStore *webArchiveStore;

- (void).cxx_destruct;
- (void)_initStore;
- (void)_prepareForUse;
- (id)cacheCoordinator;
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
- (id)directoryURLForCachedWebArchives;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (id)fetchCoordinator;
- (void)fetchCoordinator:(id)arg1 addFetchOperation:(id)arg2 context:(id)arg3;
- (id)fetchCoordinator:(id)arg1 fetchOperationForKeys:(id)arg2 context:(id)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5;
- (void)fetchCoordinator:(id)arg1 filterKeysToFetch:(id)arg2 isFirstAttempt:(bool)arg3 context:(id)arg4;
- (id)fetchOperationForWebArchiveWithKey:(id)arg1 sourceURL:(id)arg2;
- (id)fileURLForExistingWebArchiveWithKey:(id)arg1;
- (id)holdTokenForWebArchiveWithKey:(id)arg1;
- (id)init;
- (id)initQueue;
- (id)initWithContentDirectory:(id)arg1;
- (id)keysToURLs;
- (void)setCacheCoordinator:(id)arg1;
- (void)setFetchCoordinator:(id)arg1;
- (void)setInitQueue:(id)arg1;
- (void)setKeysToURLs:(id)arg1;
- (void)setWebArchiveStore:(id)arg1;
- (id)webArchiveStore;

@end
