/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAManager : NSObject {
    PHALibraryChangeListener * _changeListener;
    PHAAssetResourceDataLoader * _dataLoader;
    <PHAManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _executiveStateQueue;
    PHAJobCoordinator * _jobCoordinator;
    NSURL * _libraryURL;
    PHAMonitoring * _monitoring;
    NSDictionary * _photoAnalysisWorkersByType;
    PHPhotoLibrary * _photoLibrary;
}

@property (retain) PHALibraryChangeListener *changeListener;
@property (retain) NSObject<OS_dispatch_queue> *executiveStateQueue;
@property (readonly) PHAJobCoordinator *jobCoordinator;
@property (retain) NSURL *libraryURL;
@property (retain) NSDictionary *photoAnalysisWorkersByType;
@property (retain) PHPhotoLibrary *photoLibrary;
@property (getter=isQuiescent, readonly) bool quiescent;
@property (getter=isTurboMode, readonly) bool turboMode;

+ (id)allWorkerClasses;
+ (void)enumerateWorkerClassesUsingBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)autoloopServiceWorker;
- (void)backgroundActivityDidBegin;
- (id)changeListener;
- (void)checkForQuiescence;
- (id)description;
- (void)dumpAnalysisStatusWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)enumerateWorkersUsingBlock:(id /* block */)arg1;
- (id)executiveStateQueue;
- (id)faceProcessingServiceWorker;
- (id)graphServiceWorker;
- (id)init;
- (id)initWithPhotoLibraryURL:(id)arg1 executiveStateQueue:(id)arg2 delegate:(id)arg3;
- (bool)isQuiescent;
- (bool)isTurboMode;
- (id)jobCoordinator;
- (id)libraryURL;
- (id)monitoring;
- (id)photoAnalysisWorkersByType;
- (id)photoLibrary;
- (id)sceneClassificationServiceWorker;
- (void)setChangeListener:(id)arg1;
- (void)setExecutiveStateQueue:(id)arg1;
- (void)setLibraryURL:(id)arg1;
- (void)setPhotoAnalysisWorkersByType:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)shutdown;
- (id)statusAsDictionary;
- (void)stopBackgroundActivity;
- (id)taxonomyServiceWorker;
- (void)triggerBackgroundActivity;

@end
