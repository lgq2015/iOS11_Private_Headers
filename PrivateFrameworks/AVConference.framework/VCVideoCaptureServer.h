/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoCaptureServer : NSObject {
    NSMutableArray * _cameraPreviewClients;
    NSString * _currentCameraUniqueID;
    bool  _isPreviewRunning;
    int  _maxFrameRate;
    int  _newPeakPowerLevel;
    int  _newThermalLevel;
    int  _peakPowerLevel;
    int  _peakPowerNotificationToken;
    int  _previewSlot;
    int  _thermalLevel;
    int  _thermalNotificationToken;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
    NSObject<AVConferencePreviewDelegate> * appDelegate;
    NSObject<VideoCaptureProtocol> * avCapture;
    VCImageQueue * backQueue;
    struct __CVPixelBufferPool { } * bufferPool;
    NSMutableArray * cameraClients;
    NSObject<OS_dispatch_source> * cameraHealthMonitor;
    NSObject<OS_dispatch_queue> * captureCameraQueue;
    NSObject<OS_dispatch_queue> * captureClientQueue;
    int  captureFrameCount;
    NSObject<OS_dispatch_queue> * captureServerQueue;
    int  currentFrameRate;
    int  currentHeight;
    int  currentWidth;
    NSObject<OS_dispatch_queue> * delegateNotificationQueue;
    double  falteredRenderingtimeStamp;
    bool  firstPreviewFrame;
    VCImageQueue * frontQueue;
    struct CGSize { 
        double width; 
        double height; 
    }  localExpectedLandscapeAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  localExpectedPortraitAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  localScreenLandscapeAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  localScreenPortraitAspectRatio;
    VideoAttributes * localVideoAttributes;
    int  pendingFrameRate;
    int  pendingHeight;
    int  pendingWidth;
    int  previewFrameCount;
    bool  resize;
    NSObject<VideoCaptureProtocol> * screenCapture;
    NSMutableArray * screenCaptureClients;
    NSObject<OS_dispatch_queue> * snapshotQueue;
    int  snapshotRequestCount;
    struct OpaqueVTPixelTransferSession { } * transferSession;
    NSObject<OS_dispatch_queue> * variablesQueue;
}

@property (nonatomic, retain) NSObject<AVConferencePreviewDelegate> *appDelegate;
@property (retain) NSString *currentCameraUniqueID;

+ (id)VCVideoCaptureServerSingleton;

- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (id)appDelegate;
- (void)applyPressureLevelChanges;
- (id)autorelease;
- (void)beginPIPToPreviewAnimation;
- (void)beginPreviewToPIPAnimation;
- (bool)cameraSupportsWidth:(int)arg1 height:(int)arg2;
- (bool)canStopPreview;
- (bool)captureVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3;
- (void)changeCameraToPendingSettingsWithReset:(bool)arg1;
- (struct __CFDictionary { }*)copyCameraColorInfo;
- (id)copyLocalScreenAttributesForVideoAttributes:(id)arg1;
- (id)copyLocalVideoAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)createVideoCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 useBackFacingCamera:(bool)arg4;
- (id)currentCameraUniqueID;
- (void)dealloc;
- (bool)deregisterForVideoFramesFromSource:(int)arg1 withClient:(id)arg2;
- (void)endPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (bool)enqueueFrameToQueueFront:(bool)arg1 frame:(struct __CVBuffer { }*)arg2 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (int)getFrameRateForPeakPowerLevel:(int)arg1;
- (int)getFrameRateForThermalLevel:(int)arg1;
- (int)getFrameRateForThermalLevel:(int)arg1 peakPowerPressure:(int)arg2;
- (void)handleAVCaptureError:(int)arg1 error:(id)arg2;
- (void)handleScreenCaptureEvent:(id)arg1;
- (void)handleVideoCaptureEvent:(id)arg1;
- (id)init;
- (bool)isClientRegisteredForVideoFrames:(id)arg1 fromSource:(int)arg2;
- (struct CGSize { double x1; double x2; })localExpectedRatioForScreenOrientation:(int)arg1;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (struct CGSize { double x1; double x2; })localScreenRatioForScreenOrientation:(int)arg1;
- (id)localVideoAttributes;
- (void)notifyThermalChangeForClients:(id)arg1;
- (bool)onCaptureFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 preview:(bool)arg3 droppedFrames:(int)arg4 isSwitching:(bool)arg5 camera:(int)arg6;
- (void)pausePreview;
- (void)previewVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3;
- (void)reconnectClientLayerFront:(bool)arg1;
- (void)registerBlocksForServer;
- (bool)registerForFrames:(id)arg1 unpausing:(bool)arg2;
- (bool)registerForVideoFramesFromSource:(int)arg1 withClient:(id)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 unpausing:(bool)arg6;
- (oneway void)release;
- (void)resetCameraToPreviewSettingsForced:(bool)arg1;
- (struct __CVBuffer { }*)resizeFrame:(struct __CVBuffer { }*)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)screenCaptureFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 droppedFrames:(int)arg3 orientation:(int)arg4;
- (void)sendSnapshotFromFrame:(struct __CVBuffer { }*)arg1;
- (void)setAppDelegate:(id)arg1;
- (bool)setCaptureCameraWithUID:(id)arg1;
- (void)setCaptureFrameRate:(int)arg1;
- (void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3;
- (void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3 forced:(bool)arg4;
- (void)setCurrentCameraUniqueID:(id)arg1;
- (void)setCurrentFrameRate:(int)arg1;
- (bool)setLocalScreenAttributes:(id)arg1;
- (bool)setLocalVideoAttributes:(id)arg1;
- (unsigned int)setLocalVideoDestination:(id)arg1 facing:(bool)arg2;
- (void)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 unpausing:(bool)arg4;
- (void)startPreviewUnpausing:(bool)arg1;
- (void)stopCapture;
- (void)stopPreview;
- (void)updateImageQueueFrameRate:(int)arg1;

@end
