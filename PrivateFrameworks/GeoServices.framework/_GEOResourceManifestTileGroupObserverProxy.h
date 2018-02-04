/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOResourceManifestTileGroupObserverProxy : NSObject {
    NSHashTable * _observers;
    NSLock * _observersLock;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)description;
- (void)forEachObserver:(id /* block */)arg1 finished:(id /* block */)arg2;
- (id)init;
- (unsigned long long)observersCount;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (void)setQueue:(id)arg1;

@end
