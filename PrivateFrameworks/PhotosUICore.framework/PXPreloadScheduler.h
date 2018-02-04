/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPreloadScheduler : NSObject {
    bool  __isActive;
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    CADisplayLink * _displayLink;
    NSMutableArray * _pendingBlocks;
    struct __CFRunLoopObserver { } * _runloopObserver;
}

@property (setter=_setActive:, nonatomic) bool _isActive;

+ (id)sharedScheduler;

- (void).cxx_destruct;
- (void)_displayLinkTick:(id)arg1;
- (bool)_isActive;
- (void)_runLoopWillStartWaiting;
- (void)_setActive:(bool)arg1;
- (void)_updateIsActive;
- (void)dealloc;
- (id)init;
- (void)scheduleBackgroundTask:(id /* block */)arg1;
- (void)scheduleMainQueueTask:(id /* block */)arg1;
- (void)scheduleMainQueueTaskAndWait:(id /* block */)arg1;

@end
