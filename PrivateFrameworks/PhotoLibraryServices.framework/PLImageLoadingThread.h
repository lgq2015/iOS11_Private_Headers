/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageLoadingThread : NSObject {
    bool  _canceled;
    NSObject<OS_dispatch_queue> * _highPriorityQueue;
    NSMutableArray * _highPriorityRequests;
    NSObject<OS_dispatch_queue> * _highestPriorityQueue;
    NSMutableArray * _highestPriorityRequests;
    NSObject<OS_dispatch_queue> * _isolation;
    PLPhotoLibrary * _library;
    NSObject<OS_dispatch_queue> * _normalPriorityQueue;
    NSMutableArray * _normalPriorityRequests;
    bool  _paused;
    NSMutableSet * _queues;
    NSMutableDictionary * _requestsByKey;
    bool  _running;
    PLImageCache * _weak_cache;
    NSObject<OS_dispatch_queue> * _workQueue;
}

- (void).cxx_destruct;
- (bool)_dequeueRequest:(id)arg1;
- (void)_enqueueRequest:(id)arg1;
- (id)_imageCache;
- (void)_requeueRequest:(id)arg1 oldPriority:(int)arg2;
- (void)_serviceRequest:(id)arg1;
- (void)_serviceRequestFrom:(id)arg1;
- (void)_setImageCache:(id)arg1;
- (void)_start;
- (void)addImageLoadingQueue:(id)arg1;
- (void)cacheWasDeallocated;
- (void)cancelLoadFromSource:(id)arg1 asset:(id)arg2 imageLoadingQueue:(id)arg3;
- (void)dealloc;
- (id)initWithImageCache:(id)arg1;
- (id)loadImageFromSource:(id)arg1 asset:(id)arg2 forImageLoadingQueue:(id)arg3 synchronously:(bool)arg4 priority:(int)arg5 completion:(id /* block */)arg6;
- (void)pause;
- (void)removeImageLoadingQueue:(id)arg1;
- (void)resume;
- (void)stop;

@end
