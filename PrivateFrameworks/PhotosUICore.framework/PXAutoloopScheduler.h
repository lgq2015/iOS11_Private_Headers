/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAutoloopScheduler : NSObject {
    NSMapTable * _assetUUIDToPendingRequest;
    _PXAutoloopSchedulerRequest * _currentRequest;
    <PXAutoloopSchedulerDelegate> * _delegate;
    struct { 
        bool respondsToAssetUUIDToFavorizeForAutoloopScheduler; 
    }  _delegateFlags;
    NSMutableArray * _pendingRequests;
    NSObject<OS_dispatch_queue> * _schedulerQueue;
    bool  _shouldSimulateRequest;
}

@property (nonatomic) <PXAutoloopSchedulerDelegate> *delegate;
@property (nonatomic) bool shouldSimulateRequest;

+ (id)sharedScheduler;

- (void).cxx_destruct;
- (void)_addRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)_nextRequest;
- (void)_removeScheduleRequest:(id)arg1;
- (void)_scheduleNextPendingRequest;
- (void)_startNextPendingRequest;
- (void)cancelRequest:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)scheduleRequests:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setShouldSimulateRequest:(bool)arg1;
- (bool)shouldSimulateRequest;

@end
