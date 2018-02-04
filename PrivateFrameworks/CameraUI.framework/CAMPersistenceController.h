/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPersistenceController : NSObject <CAMCaptureService, CAMStillImagePersistenceCoordinatorDelegate> {
    CAMBurstController * __burstController;
    NSObject<OS_dispatch_queue> * __coordinationQueue;
    NSMapTable * __coordinationQueueGroupsByIdentifier;
    NSMutableDictionary * __coordinationQueue_persistenceCoordinators;
    CAMIrisVideoController * __irisVideoController;
    NSObject<OS_dispatch_queue> * __localPersistenceQueue;
    CAMThumbnailGenerator * __localPersistenceThumbnailGenerator;
    CAMLocationController * __locationController;
    CAMPowerController * __powerController;
    CAMProtectionController * __protectionController;
    NSObject<OS_dispatch_queue> * __remotePersistenceQueue;
    CAMThumbnailGenerator * __remotePersistenceThumbnailGenerator;
    NSObject<OS_dispatch_queue> * __resultDelegateIsolationQueue;
    NSMutableArray * _pendingLocalPersistenceWrappers;
    NSMutableArray * _pendingRemotePersistenceWrappers;
    <CAMPersistenceResultDelegate> * _resultDelegate;
    struct { 
        bool respondsToDidCompleteAllLocalPersistenceForRequest; 
    }  _resultDelegateFlags;
}

@property (nonatomic, readonly) CAMBurstController *_burstController;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_coordinationQueue;
@property (nonatomic, readonly) NSMapTable *_coordinationQueueGroupsByIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_coordinationQueue_persistenceCoordinators;
@property (nonatomic, readonly) CAMIrisVideoController *_irisVideoController;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_localPersistenceQueue;
@property (nonatomic, readonly) CAMThumbnailGenerator *_localPersistenceThumbnailGenerator;
@property (nonatomic, readonly) CAMLocationController *_locationController;
@property (nonatomic, readonly) NSMutableArray *_pendingLocalPersistenceWrappers;
@property (nonatomic, readonly) NSMutableArray *_pendingRemotePersistenceWrappers;
@property (nonatomic, readonly) CAMPowerController *_powerController;
@property (nonatomic, readonly) CAMProtectionController *_protectionController;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_remotePersistenceQueue;
@property (nonatomic, readonly) CAMThumbnailGenerator *_remotePersistenceThumbnailGenerator;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_resultDelegateIsolationQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CAMPersistenceResultDelegate> *resultDelegate;
@property (nonatomic, readonly) bool resultDelegateRespondsToDidCompleteAllLocalPersistenceForRequest;
@property (readonly) Class superclass;

+ (id)_pathForIncomingDirectory;
+ (id)clientVideoMetadataForLocation:(id)arg1 withCreationDate:(id)arg2;
+ (id)clientVideoMetadataForRequest:(id)arg1 withCreationDate:(id)arg2 isEV0ForHDR:(bool)arg3;
+ (id)delimiterForIncomingAssetFilenames;
+ (id)uniqueIncomingPathForAssetWithUUID:(id)arg1 captureTime:(double)arg2 extension:(id)arg3;
+ (id)uniquePathForAssetWithUUID:(id)arg1 captureTime:(double)arg2 extension:(id)arg3 usingIncomingDirectory:(bool)arg4;
+ (id)videoMetadataDateFormatter;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_affineTransformForRotationDegrees:(int)arg1 mirrored:(bool)arg2;
- (id)_burstController;
- (void)_coordinateRemotePersistenceForStillImageLocalResult:(id)arg1 coordinationInfo:(id)arg2 request:(id)arg3;
- (id)_coordinationGroupForIdentifier:(id)arg1;
- (id)_coordinationQueue;
- (id)_coordinationQueueGroupsByIdentifier;
- (id)_coordinationQueue_persistenceCoordinators;
- (id)_createMetadataForPhysicallyOrientedImage:(id)arg1;
- (struct __CFWriteStream { }*)_createOpenWriteStreamWithURL:(id)arg1 forBurst:(bool)arg2;
- (void)_dispatchRemotePersistenceForLocalPersistenceResult:(id)arg1 fullsizeRenderLocalResult:(id)arg2 request:(id)arg3 powerAssertionReason:(unsigned int)arg4;
- (id)_ensureCoordinationGroupForIdentifier:(id)arg1;
- (id)_extensionForUniformTypeIdentifier:(id)arg1;
- (void)_handleCompletedStillImageJobForRequest:(id)arg1 withReply:(id)arg2 fromBatchOfSize:(unsigned long long)arg3 completionHandler:(id /* block */)arg4 error:(id)arg5;
- (void)_handleCompletedVideoJobForRequest:(id)arg1 withReply:(id)arg2 completionHandler:(id /* block */)arg3 error:(id)arg4;
- (void)_handleStillImagePersistenceForRequest:(id)arg1 withResult:(id)arg2;
- (void)_handleVideoPersistenceForRequest:(id)arg1 withResult:(id)arg2;
- (id)_irisVideoController;
- (id)_jobDictionaryForStillImageLocalResult:(id)arg1 fullsizeRenderLocalResult:(id)arg2 fromRequest:(id)arg3;
- (id)_jobDictionaryForTimelapsePlaceholderResult:(id)arg1;
- (id)_jobDictionaryForVideoLocalResult:(id)arg1 fromRequest:(id)arg2;
- (id)_localPersistenceQueue;
- (id)_localPersistenceThumbnailGenerator;
- (void)_locallyPersistStillImageResult:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_locallyPersistVideoCaptureResult:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)_locationController;
- (void)_notifyDelegateOfCompletedStillImageLocalPersistenceForRequest:(id)arg1 withResult:(id)arg2;
- (void)_notifyDelegateOfCompletedStillImageRemotePersistenceForRequest:(id)arg1 withReply:(id)arg2 fromBatchOfSize:(unsigned long long)arg3 error:(id)arg4;
- (void)_notifyDelegateOfCompletedVideoLocalPersistenceForRequest:(id)arg1 withResult:(id)arg2;
- (void)_notifyDelegateOfCompletedVideoRemotePersistenceForRequest:(id)arg1 withReply:(id)arg2 error:(id)arg3;
- (id)_pendingLocalPersistenceWrappers;
- (id)_pendingRemotePersistenceWrappers;
- (id)_persistStillImageCaptureSurfaceResult:(id)arg1 withRequest:(id)arg2;
- (id)_persistVideoCaptureResult:(id)arg1 withRequest:(id)arg2;
- (id)_physicallyRotatedJPEGDataFromCapturePhoto:(id)arg1;
- (id)_powerController;
- (id)_protectionController;
- (id)_remotePersistenceQueue;
- (id)_remotePersistenceThumbnailGenerator;
- (void)_remotelyPersistStillImageJob:(id)arg1 forRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_remotelyPersistVideoJob:(id)arg1 forRequest:(id)arg2 withSendHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)_removeCoordinationGroupForIdentifier:(id)arg1;
- (id)_resultDelegateIsolationQueue;
- (unsigned int)_stillImageLocalPowerAssertionReasonForCoordinationInfo:(id)arg1;
- (id)_stillPersistenceUUIDForRequest:(id)arg1 withVideoResult:(id)arg2;
- (id)_uniformTypeIdentifierForStillImageRequest:(id)arg1;
- (unsigned int)_videoLocalPowerAssertionReasonForCoordinationInfo:(id)arg1;
- (id)_videoPersistenceUUIDForRequest:(id)arg1 withResult:(id)arg2;
- (unsigned int)_videoRemotePowerAssertionReasonForCoordinationInfo:(id)arg1;
- (void)_writeDataToURL:(id)arg1 withData:(id)arg2 duringBurst:(bool)arg3 error:(out id*)arg4;
- (void)_writeJPEGToURL:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4 duringBurst:(bool)arg5 error:(out id*)arg6;
- (id)_xmpEncodedDiagnosticDataFromDictionary:(id)arg1;
- (id)init;
- (id)initWithLocationController:(id)arg1 burstController:(id)arg2 protectionController:(id)arg3 powerController:(id)arg4 irisVideoController:(id)arg5;
- (void)panoramaRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2;
- (void)performDeferredRemotePersistenceWithCompletionHandler:(id /* block */)arg1;
- (void)persistBurstWithIdentifier:(id)arg1 result:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)persistPlaceholderTimelapseVideoWithResult:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)resultDelegate;
- (bool)resultDelegateRespondsToDidCompleteAllLocalPersistenceForRequest;
- (void)setResultDelegate:(id)arg1;
- (void)stillImagePersistenceCoordinator:(id)arg1 requestsRemotePersistenceForLocalPersistenceResult:(id)arg2 fullsizeRenderLocalResult:(id)arg3 request:(id)arg4 powerAssertionReason:(unsigned int)arg5;
- (void)stillImagePersistenceCoordinator:(id)arg1 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(id)arg2 request:(id)arg3;
- (void)stillImageRequest:(id)arg1 didCompleteStillImageCaptureWithResult:(id)arg2;
- (void)stillImageRequest:(id)arg1 didCompleteVideoCaptureWithResult:(id)arg2;
- (void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2;
- (void)videoRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2;

@end
