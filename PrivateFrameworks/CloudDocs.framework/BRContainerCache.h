/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRContainerCache : NSObject {
    bool  _containerCacheUptodate;
    <NSObject> * _containerStatusObserver;
    NSMutableDictionary * _containersByID;
    NSMutableSet * _fetchedContainerIDs;
    <BRContainerHelper> * _helper;
    br_pacer * _invalidationPacer;
    NSObject<OS_dispatch_source> * _memoryPressureSource;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)containerCache;
+ (id)containerHelper;
+ (bool)hasDaemonicParts;

- (void).cxx_destruct;
- (void)_accountWillChange;
- (id)_allContainersByIDNoCopyBlocking:(bool)arg1;
- (void)_containerListDidChange;
- (bool)_updateContainersCache;
- (id)allContainersBlockIfNeeded:(bool)arg1;
- (id)allContainersByID;
- (id)containerByID:(id)arg1 forURL:(id)arg2;
- (void)dealloc;
- (id)documentContainers;
- (id)initWithHelper:(id)arg1;
- (void)invalidateAndClearCache:(bool)arg1;
- (void)subscribeToContainerStatusUpdate;
- (void)unsubscribeToContainerStatusUpdate;

@end
