/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHALibraryChangeListener : NSOperation <PHPhotoLibraryChangeObserver> {
    NSObject<OS_dispatch_queue> * _changeObservationQueue;
    NSHashTable * _changeObservers;
    PHFetchResult * _momentFetchResult;
    PHFetchResult * _personsFetchResult;
    PHAManager * _photoAnalysisManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_publishRawChange:(id)arg1;
- (void)beginListeningForChanges;
- (id)init;
- (id)initWithPhotoAnalysisManager:(id)arg1;
- (id)libraryChangeDetailsForFetchResult:(id*)arg1 changes:(id)arg2;
- (id)momentChangeDetailsForChanges:(id)arg1;
- (id)personsChangeDetailsForChanges:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;

@end
