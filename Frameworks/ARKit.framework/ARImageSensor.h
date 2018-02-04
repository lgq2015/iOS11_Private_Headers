/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARImageSensor : NSObject <ARSensor, AVCaptureVideoDataOutputSampleBufferDelegate> {
    bool  _autoFocusEnabled;
    AVCaptureDevice * _captureDevice;
    long long  _captureFramesPerSecond;
    NSObject<OS_dispatch_queue> * _captureQueue;
    AVCaptureSession * _captureSession;
    <ARSensorDelegate> * _delegate;
    bool  _interrupted;
    unsigned long long  _powerUsage;
    NSObject<OS_dispatch_queue> * _previousOutputCallbackQueue;
    <AVCaptureVideoDataOutputSampleBufferDelegate> * _previousOutputDelegate;
    bool  _previouslyRunning;
    long long  _renderFramesPerSecond;
    bool  _running;
    AVCaptureVideoDataOutput * _videoOutput;
    struct { 
        int width; 
        int height; 
    }  _videoResolution;
}

@property (nonatomic, retain) AVCaptureAudioDataOutput *audioOutput;
@property (getter=isAutoFocusEnabled, nonatomic) bool autoFocusEnabled;
@property (nonatomic, readonly) AVCaptureDevice *captureDevice;
@property (readonly) long long captureFramesPerSecond;
@property long long captureFramesPerSecond;
@property (nonatomic, readonly) AVCaptureSession *captureSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARSensorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool interrupted;
@property (nonatomic) unsigned long long powerUsage;
@property (readonly) long long renderFramesPerSecond;
@property long long renderFramesPerSecond;
@property bool running;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AVCaptureVideoDataOutput *videoOutput;
@property (nonatomic) struct { int x1; int x2; } videoResolution;

+ (id)bestFormatForDevice:(id)arg1 withResolution:(struct { int x1; int x2; })arg2 pixelFormatType:(unsigned int)arg3 frameRate:(double)arg4;
+ (double)closestFrameRateIn:(id)arg1 target:(double)arg2 preferHigher:(bool)arg3;

- (void).cxx_destruct;
- (void)_adjustForPowerUsage;
- (void)_configureCameraExposureForDevice:(id)arg1;
- (void)_configureCameraFocusForDevice:(id)arg1;
- (void)_configureCameraWhiteBalanceForDevice:(id)arg1;
- (id)_createAudioInput:(id*)arg1;
- (bool)_validateCameraAuthorization;
- (id)audioOutput;
- (id)captureDevice;
- (long long)captureFramesPerSecond;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (id)captureSession;
- (void)captureSessionStateChanged:(id)arg1;
- (id)configureCaptureDevice;
- (id)configureCaptureSession;
- (void)dealloc;
- (id)delegate;
- (id)initWithDevicePosition:(long long)arg1 deviceType:(id)arg2;
- (id)initWithDevicePosition:(long long)arg1 deviceType:(id)arg2 captureSession:(id)arg3;
- (bool)interrupted;
- (bool)isAutoFocusEnabled;
- (unsigned long long)powerUsage;
- (double)preferredCaptureFrameRateForPowerUsage:(unsigned long long)arg1 devicePosition:(long long)arg2;
- (long long)preferredRenderFrameRateForPowerUsage:(unsigned long long)arg1 devicePosition:(long long)arg2;
- (unsigned long long)providedDataTypes;
- (long long)renderFramesPerSecond;
- (bool)running;
- (void)setAudioOutput:(id)arg1;
- (void)setAutoFocusEnabled:(bool)arg1;
- (void)setCaptureFramesPerSecond:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInterrupted:(bool)arg1;
- (void)setPowerUsage:(unsigned long long)arg1;
- (void)setRenderFramesPerSecond:(long long)arg1;
- (void)setRunning:(bool)arg1;
- (void)setVideoResolution:(struct { int x1; int x2; })arg1;
- (void)start;
- (void)stop;
- (id)videoOutput;
- (struct { int x1; int x2; })videoResolution;

@end
