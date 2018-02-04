/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPScreenRecorder : NSObject <RPPreviewViewControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate> {
    RPBroadcastController * _activeBroadcastController;
    bool  _available;
    NSURL * _broadcastURL;
    bool  _broadcasting;
    bool  _cameraEnabled;
    long long  _cameraPosition;
    UIView * _cameraPreviewView;
    id /* block */  _captureHandler;
    <RPScreenRecorderDelegate> * _delegate;
    bool  _hasUserConsentForCamera;
    bool  _hasUserConsentForMicrophone;
    bool  _microphoneEnabled;
    bool  _paused;
    RPPipViewController * _pipViewController;
    NSString * _previousAudioCategory;
    unsigned long long  _previousAudioSessionOptions;
    <RPScreenRecorderPrivateDelegate> * _privateDelegate;
    int  _processIDForAudioCapture;
    bool  _recording;
    id /* block */  _saveVideoToCameraRollCompletionBlock;
    bool  _systemRecording;
    NSDate * _systemRecordingControlCenterEndClipEndTime;
    NSDate * _systemRecordingControlCenterEndClipStartTime;
    NSDate * _systemRecordingControlCenterStartClipEndTime;
    NSDate * _systemRecordingControlCenterStartClipStartTime;
    RPSystemRecordingIndicatorWindow * _systemRecordingIndicatorWindow;
    UIWindow * _windowToRecord;
}

@property (nonatomic, retain) RPBroadcastController *activeBroadcastController;
@property (getter=isAvailable, nonatomic) bool available;
@property (nonatomic, retain) NSURL *broadcastURL;
@property (nonatomic) bool broadcasting;
@property (getter=isCameraEnabled, nonatomic) bool cameraEnabled;
@property (nonatomic) long long cameraPosition;
@property (nonatomic, retain) UIView *cameraPreviewView;
@property (nonatomic, copy) id /* block */ captureHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RPScreenRecorderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasUserConsentForCamera;
@property (nonatomic) bool hasUserConsentForMicrophone;
@property (readonly) unsigned long long hash;
@property (getter=isMicrophoneEnabled, nonatomic) bool microphoneEnabled;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic, retain) RPPipViewController *pipViewController;
@property (nonatomic, retain) NSString *previousAudioCategory;
@property (nonatomic) unsigned long long previousAudioSessionOptions;
@property (nonatomic, retain) <RPScreenRecorderPrivateDelegate> *privateDelegate;
@property (setter=updateProcessIDForAudioCapture:, nonatomic) int processIDForAudioCapture;
@property (getter=isRecording, nonatomic) bool recording;
@property (nonatomic, copy) id /* block */ saveVideoToCameraRollCompletionBlock;
@property (readonly) Class superclass;
@property (nonatomic) bool systemRecording;
@property (nonatomic, retain) NSDate *systemRecordingControlCenterEndClipEndTime;
@property (nonatomic, retain) NSDate *systemRecordingControlCenterEndClipStartTime;
@property (nonatomic, retain) NSDate *systemRecordingControlCenterStartClipEndTime;
@property (nonatomic, retain) NSDate *systemRecordingControlCenterStartClipStartTime;
@property (nonatomic, retain) RPSystemRecordingIndicatorWindow *systemRecordingIndicatorWindow;
@property (nonatomic, retain) UIWindow *windowToRecord;

+ (id)sharedRecorder;

- (void).cxx_destruct;
- (struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)_audioBufferListFromData:(id)arg1;
- (bool)_isScreenRecordingAllowed;
- (bool)_isScreenRecordingSupportedOnDevice;
- (struct opaqueCMSampleBuffer { }*)_sampleBufferFromIOSurface:(struct __IOSurface { }*)arg1 timingInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })arg2;
- (void)_startRecordingWithMicrophoneEnabled:(bool)arg1 cameraEnabled:(bool)arg2 streamingEnabled:(bool)arg3 captureEnabled:(bool)arg4 handler:(id /* block */)arg5;
- (id)activeBroadcastController;
- (id)applicationWindow;
- (id)audioQueue;
- (id)broadcastURL;
- (bool)broadcasting;
- (long long)cameraPosition;
- (id)cameraPreviewView;
- (id /* block */)captureHandler;
- (void)captureHandlerWithAudioSample:(id)arg1 absdData:(id)arg2 itemCount:(long long)arg3 bufferType:(long long)arg4 timingData:(id)arg5;
- (void)captureHandlerWithSample:(id)arg1 timingData:(id)arg2;
- (void)clientDidBecomeActive;
- (void)clientWillResignActive;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (unsigned int)currentWindowLayerContextID;
- (struct CGSize { double x1; double x2; })currentWindowSize;
- (void)dealloc;
- (id)delegate;
- (void)didStopRecordingWithError:(id)arg1 previewViewController:(id)arg2;
- (void)discardRecordingWithHandler:(id /* block */)arg1;
- (bool)hasUserConsentForCamera;
- (bool)hasUserConsentForMicrophone;
- (id)init;
- (bool)isAvailable;
- (bool)isCameraEnabled;
- (bool)isMicrophoneEnabled;
- (bool)isPaused;
- (bool)isRecording;
- (void)notifyDelegateOfRecorderAvailability;
- (void)pauseRecording;
- (id)pipViewController;
- (id)previousAudioCategory;
- (unsigned long long)previousAudioSessionOptions;
- (id)privateDelegate;
- (int)processIDForAudioCapture;
- (void)recordingLockInterrupted:(id)arg1;
- (void)recordingTimerDidUpdate:(id)arg1;
- (void)resumeRecording;
- (id /* block */)saveVideoToCameraRollCompletionBlock;
- (void)setActiveBroadcastController:(id)arg1;
- (void)setAvailable:(bool)arg1;
- (void)setBroadcastURL:(id)arg1;
- (void)setBroadcasting:(bool)arg1;
- (void)setCameraEnabled:(bool)arg1;
- (void)setCameraPosition:(long long)arg1;
- (void)setCameraPreviewView:(id)arg1;
- (void)setCaptureHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasUserConsentForCamera:(bool)arg1;
- (void)setHasUserConsentForMicrophone:(bool)arg1;
- (void)setMicrophoneEnabled:(bool)arg1;
- (void)setMicrophoneEnabledPersistent:(bool)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPipViewController:(id)arg1;
- (void)setPreviousAudioCategory:(id)arg1;
- (void)setPreviousAudioSessionOptions:(unsigned long long)arg1;
- (void)setPrivateDelegate:(id)arg1;
- (void)setRecording:(bool)arg1;
- (void)setSaveVideoToCameraRollCompletionBlock:(id /* block */)arg1;
- (void)setSystemRecording:(bool)arg1;
- (void)setSystemRecordingControlCenterEndClipEndTime:(id)arg1;
- (void)setSystemRecordingControlCenterEndClipStartTime:(id)arg1;
- (void)setSystemRecordingControlCenterStartClipEndTime:(id)arg1;
- (void)setSystemRecordingControlCenterStartClipStartTime:(id)arg1;
- (void)setSystemRecordingIndicatorWindow:(id)arg1;
- (void)setWindowRotationLocked:(bool)arg1;
- (void)setWindowToRecord:(id)arg1;
- (void)startBroadcastWithHandler:(id /* block */)arg1;
- (void)startCaptureWithHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)startRecordingWithHandler:(id /* block */)arg1;
- (void)startRecordingWithMicrophoneEnabled:(bool)arg1 cameraEnabled:(bool)arg2 streamingEnabled:(bool)arg3 captureEnabled:(bool)arg4 handler:(id /* block */)arg5;
- (void)startRecordingWithMicrophoneEnabled:(bool)arg1 handler:(id /* block */)arg2;
- (void)startRecordingWithMicrophoneEnabled:(bool)arg1 windowToRecord:(id)arg2 systemRecording:(bool)arg3 handler:(id /* block */)arg4;
- (void)stopBroadcastWithHandler:(id /* block */)arg1;
- (void)stopCaptureWithHandler:(id /* block */)arg1;
- (void)stopRecordingAndSaveToCameraRoll:(id /* block */)arg1;
- (void)stopRecordingWithAdditionalShareFileAttachment:(id)arg1 overrideShareMessage:(id)arg2 previewViewControllerOverrideTintColor:(id)arg3 handler:(id /* block */)arg4;
- (void)stopRecordingWithError:(id)arg1 movieURL:(id)arg2;
- (void)stopRecordingWithHandler:(id /* block */)arg1;
- (void)stopRecordingWithVideoURLHandler:(id /* block */)arg1;
- (void)stopSystemRecording:(id /* block */)arg1;
- (bool)systemRecording;
- (id)systemRecordingControlCenterEndClipEndTime;
- (id)systemRecordingControlCenterEndClipStartTime;
- (id)systemRecordingControlCenterStartClipEndTime;
- (id)systemRecordingControlCenterStartClipStartTime;
- (id)systemRecordingIndicatorWindow;
- (void)updateCurrentState;
- (void)updateProcessIDForAudioCapture:(int)arg1;
- (void)updateRecordingAvailability;
- (void)updateScreenRecordingState:(bool)arg1;
- (id)videoQueue;
- (id)windowToRecord;

@end
