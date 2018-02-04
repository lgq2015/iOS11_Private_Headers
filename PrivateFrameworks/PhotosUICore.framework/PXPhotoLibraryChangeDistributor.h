/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoLibraryChangeDistributor : NSObject <PHPhotoLibraryChangeObserver> {
    NSObject<OS_dispatch_semaphore> * _changeDeliverySemaphore;
    NSObject<OS_dispatch_group> * _changePausingGroup;
    NSMutableSet * _changePausingTokens;
    NSHashTable * _observers;
    PHPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)beginPausingChangesWithTimeout:(double)arg1;
- (void)dealloc;
- (void)distributeChangeOnMainQueue:(id)arg1;
- (void)endPausingChanges:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;

@end
