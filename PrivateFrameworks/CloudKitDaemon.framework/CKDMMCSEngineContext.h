/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSEngineContext : NSObject {
    CKDMMCS * _MMCS;
    struct _mmcs_engine { } * _MMCSEngine;
    NSString * _applicationBundleID;
    NSMutableIndexSet * _inMemoryItemsIDs;
    unsigned int  _maxChunkCountForSection;
    NSString * _path;
    long long  _refCount;
    NSRunLoop * _runLoop;
    NSString * _runLoopMode;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    long long  _state;
    bool  _stopMMCSThread;
}

@property (nonatomic) CKDMMCS *MMCS;
@property (nonatomic) struct _mmcs_engine { }*MMCSEngine;
@property (nonatomic, retain) NSString *applicationBundleID;
@property (nonatomic, retain) NSMutableIndexSet *inMemoryItemsIDs;
@property (nonatomic) unsigned int maxChunkCountForSection;
@property (nonatomic, retain) NSString *path;
@property (nonatomic) long long refCount;
@property (nonatomic, retain) NSRunLoop *runLoop;
@property (nonatomic, retain) NSString *runLoopMode;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic) long long state;
@property (nonatomic) bool stopMMCSThread;

+ (id)_appID;
+ (bool)hasCachedCKDMMCSEngineContextForPath:(id)arg1;
+ (id)setupMMCSEngineWithApplicationBundleID:(id)arg1 path:(id)arg2 wasCached:(bool*)arg3 error:(id*)arg4;
+ (id)sharedContextsByPath;
+ (id)sharedContextsQueue;
+ (bool)tearDownMMCSEngineWithContext:(id)arg1;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)MMCS;
- (struct _mmcs_engine { }*)MMCSEngine;
- (void)_MMCSThread;
- (void)_MMCSTreadAbort;
- (bool)_setupMMCSEngineWithError:(id*)arg1;
- (bool)_setupMMCSEngineWithRetryCount:(unsigned long long)arg1 error:(id*)arg2;
- (void)_tearDownMMCSEngine;
- (id)applicationBundleID;
- (void)cancelRequestWithContext:(void*)arg1;
- (void)dealloc;
- (long long)decRefCount;
- (id)description;
- (id)inMemoryItemsIDs;
- (long long)incRefCount;
- (id)initWithApplicationBundleID:(id)arg1 path:(id)arg2;
- (unsigned int)maxChunkCountForSection;
- (unsigned long long)nextAvailableItemID;
- (id)path;
- (void)performOnRunLoop:(id /* block */)arg1;
- (long long)refCount;
- (id)runLoop;
- (id)runLoopMode;
- (id)semaphore;
- (void)setApplicationBundleID:(id)arg1;
- (void)setInMemoryItemsIDs:(id)arg1;
- (void)setMMCS:(id)arg1;
- (void)setMMCSEngine:(struct _mmcs_engine { }*)arg1;
- (void)setMaxChunkCountForSection:(unsigned int)arg1;
- (void)setPath:(id)arg1;
- (void)setRefCount:(long long)arg1;
- (void)setRunLoop:(id)arg1;
- (void)setRunLoopMode:(id)arg1;
- (void)setSemaphore:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStopMMCSThread:(bool)arg1;
- (long long)state;
- (bool)stopMMCSThread;
- (void)stopTrackingItemID:(unsigned long long)arg1;

@end
