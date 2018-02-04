/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKTimelapseController : NSObject <CMKStillImageCaptureRequestDelegate> {
    bool  __backendRecoveryNeeded;
    NSObject<OS_dispatch_source> * __captureTimer;
    CMKLowDiskSpaceAlertController * __diskSpaceAlert;
    bool  __ignoringTimerCallbacksForTearDown;
    bool  __ignoringTimerCallbacksWaitingForCaptureResponse;
    NSCountedSet * __inFlightTimelapseUUIDs;
    NSMutableSet * __pendingCompletedStates;
    bool  __previewStarted;
    CMKTimelapseState * __state;
}

@property (setter=_setBackendRecoveryNeeded:, nonatomic) bool _backendRecoveryNeeded;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *_captureTimer;
@property (nonatomic, readonly) CMKLowDiskSpaceAlertController *_diskSpaceAlert;
@property (nonatomic, readonly) bool _ignoringTimerCallbacksForTearDown;
@property (nonatomic, readonly) bool _ignoringTimerCallbacksWaitingForCaptureResponse;
@property (nonatomic, readonly) NSCountedSet *_inFlightTimelapseUUIDs;
@property (nonatomic, readonly) NSMutableSet *_pendingCompletedStates;
@property (setter=_setPreviewStarted:, nonatomic) bool _previewStarted;
@property (nonatomic, readonly) CMKTimelapseState *_state;
@property (nonatomic, readonly) NSDate *captureStartTime;
@property (getter=isCapturing, nonatomic, readonly) bool capturing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_videoPreviewImageForTimelapseState:(id)arg1;
+ (id)createPlaceholderAssetResponseForTimelapseState:(id)arg1;
+ (void)recoverFromCrashIfNeededForceEndLastSession:(bool)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (bool)_backendRecoveryNeeded;
- (id)_captureTimer;
- (void)_captureTimerFired;
- (id)_createPlaceholderAssetForTimelapseState:(id)arg1;
- (void)_deviceStarted:(id)arg1;
- (id)_diskSpaceAlert;
- (void)_dismissDiskSpaceAlert;
- (bool)_enqueueCaptureRequest;
- (bool)_ignoringTimerCallbacksForTearDown;
- (bool)_ignoringTimerCallbacksWaitingForCaptureResponse;
- (id)_inFlightTimelapseUUIDs;
- (void)_notifyAGGDForDidStartCapturingWithState:(id)arg1;
- (void)_notifyAGGDForDidStopCapturingWithState:(id)arg1;
- (void)_notifyInsufficientDiskSpaceForContinuingCapture;
- (void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(long long)arg1 availableBytes:(long long)arg2;
- (id)_pendingCompletedStates;
- (void)_prepareForTimelapseCapture;
- (bool)_previewStarted;
- (void)_previewStarted:(id)arg1;
- (bool)_reserveDiskSpaceForTimelapseUUID:(id)arg1;
- (void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
- (void)_restoreCaptureStateFromDisk;
- (void)_saveStateToDisk:(id)arg1;
- (void)_sessionRuntimeErrored:(id)arg1;
- (void)_sessionStarted:(id)arg1;
- (void)_setBackendRecoveryNeeded:(bool)arg1;
- (void)_setNewCaptureState;
- (void)_setPreviewStarted:(bool)arg1;
- (void)_startCaptureTimer;
- (bool)_startCapturing;
- (id)_state;
- (void)_stopCapturingWithReasons:(long long)arg1;
- (void)_teardownCaptureTimer;
- (void)_triggerBackendCrashRecoveryIfNeeded;
- (void)_updateFocusAndExposureForStartCapturing;
- (void)_updateFocusAndExposureForStopCapturing;
- (void)_updateFocusLensPosition:(float)arg1 forTimelapseUUID:(id)arg2 forceUpdate:(bool)arg3;
- (void)_updateLocationIfNecessary;
- (void)captureController:(id)arg1 didFinishWriteForResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;
- (void)captureController:(id)arg1 didGenerateResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;
- (id)captureStartTime;
- (void)dealloc;
- (id)init;
- (bool)isCapturing;
- (void)restoreConfiguration;
- (bool)startCapturing;
- (void)stopCapturingWithReasons:(long long)arg1;

@end
