/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureSession : NSObject {
    AVCaptureSessionInternal * _internal;
}

@property (nonatomic) bool automaticallyConfiguresApplicationAudioSession;
@property (nonatomic) bool automaticallyConfiguresCaptureDeviceForWideColor;
@property (nonatomic, readonly) NSArray *inputs;
@property (getter=isInterrupted, nonatomic, readonly) bool interrupted;
@property (nonatomic, readonly) struct OpaqueCMClock { }*masterClock;
@property (nonatomic, readonly) NSArray *outputs;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic, copy) NSString *sessionPreset;
@property (nonatomic) bool usesApplicationAudioSession;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (void)_beginConfiguringActiveColorSpaceForDevice:(id)arg1;
+ (void)_finishConfiguringActiveColorSpaceForDevice:(id)arg1;
+ (bool)_isActiveColorSpaceBeingConfiguredForDevice:(id)arg1;
+ (id)allSessionPresets;
+ (bool)automaticallyNotifiesObserversOfMasterClock;
+ (bool)automaticallyNotifiesObserversOfRunning;
+ (id)dotString;
+ (void)initialize;

- (bool)_addConnection:(id)arg1 exceptionReason:(id*)arg2;
- (bool)_addInputWithNoConnections:(id)arg1 exceptionReason:(id*)arg2;
- (bool)_addOutputWithNoConnections:(id)arg1 exceptionReason:(id*)arg2;
- (bool)_addVideoPreviewLayer:(id)arg1 exceptionReason:(id*)arg2;
- (bool)_addVideoPreviewLayerWithNoConnection:(id)arg1 exceptionReason:(id*)arg2;
- (bool)_allowsRecordingOfPhotoFormats;
- (void)_beginConfiguration;
- (bool)_buildAndRunGraph;
- (bool)_canAddConnection:(id)arg1 failureReason:(id*)arg2;
- (bool)_canAddInput:(id)arg1 failureReason:(id*)arg2;
- (bool)_canAddOutput:(id)arg1 failureReason:(id*)arg2;
- (bool)_canAddVideoPreviewLayer:(id)arg1 failureReason:(id*)arg2;
- (void)_commitConfiguration;
- (id)_connectionsForNewInputPort:(id)arg1;
- (id)_connectionsForNewOutput:(id)arg1;
- (id)_connectionsForNewVideoPreviewLayer:(id)arg1;
- (int)_createFigCaptureSession;
- (void)_determineMasterClock;
- (id)_figCaptureSessionConfiguration;
- (void)_handleConfigurationCommittedNotificationWithPayload:(id)arg1;
- (void)_handleConfigurationDidBecomeLiveNotificationWithPayload:(id)arg1;
- (void)_handleDidStartRunningNotificationWithPayload:(id)arg1;
- (void)_handleDidStopRunningNotificationWithPayload:(id)arg1;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_handleServerConnectionDiedNotification;
- (void)_makeConfigurationLive:(id)arg1;
- (void)_notifyMediaServerdDied;
- (void)_notifySessionStarted;
- (void)_notifySessionStopped;
- (id)_outputWithClass:(Class)arg1 forSourceDevice:(id)arg2;
- (void)_postRuntimeError:(id)arg1;
- (void)_rebuildGraph;
- (void)_reconnectAfterServerConnectionDied;
- (void)_removeAllPreviewLayers;
- (void)_removeConnection:(id)arg1;
- (void)_removeConnectionsForInputPort:(id)arg1;
- (void)_removeInput:(id)arg1;
- (void)_removeVideoPreviewLayer:(id)arg1;
- (void)_setInterrupted:(bool)arg1 withReason:(int)arg2;
- (void)_setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)_setRunning:(bool)arg1;
- (bool)_startFigCaptureSession;
- (void)_stopAndTearDownGraph;
- (id)_stopError;
- (bool)_stopFigCaptureSession;
- (void)_teardownFigCaptureSession;
- (void)_updateDeviceActiveFormatsAndActiveConnections;
- (void)_updateSourceDeviceDepthDataDeliveryEnabled;
- (void)addConnection:(id)arg1;
- (void)addInput:(id)arg1;
- (void)addInputWithNoConnections:(id)arg1;
- (void)addOutput:(id)arg1;
- (void)addOutputWithNoConnections:(id)arg1;
- (bool)automaticallyConfiguresApplicationAudioSession;
- (bool)automaticallyConfiguresCaptureDeviceForWideColor;
- (void)beginConfiguration;
- (bool)canAddConnection:(id)arg1;
- (bool)canAddInput:(id)arg1;
- (bool)canAddOutput:(id)arg1;
- (bool)canSetSessionPreset:(id)arg1;
- (void)cancelForegroundAutoResumeAfterDate:(id)arg1;
- (void)commitConfiguration;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)inputs;
- (bool)isBeingConfigured;
- (bool)isInterrupted;
- (bool)isRunning;
- (struct OpaqueCMClock { }*)masterClock;
- (bool)notifiesOnMainThread;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputs;
- (void)removeConnection:(id)arg1;
- (void)removeInput:(id)arg1;
- (void)removeOutput:(id)arg1;
- (id)sessionPreset;
- (id)sessionVideoCaptureDevices;
- (void)setAutomaticallyConfiguresApplicationAudioSession:(bool)arg1;
- (void)setAutomaticallyConfiguresCaptureDeviceForWideColor:(bool)arg1;
- (void)setSessionPreset:(id)arg1;
- (void)setUsesApplicationAudioSession:(bool)arg1;
- (void)startRunning;
- (void)stopRunning;
- (bool)usesApplicationAudioSession;
- (id)valueForUndefinedKey:(id)arg1;
- (bool)videoHDREnabledForDevice:(id)arg1 format:(id)arg2 sessionPreset:(id)arg3;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (bool)cam_ensureInputs:(id)arg1;
- (bool)cam_ensureInputs:(id)arg1 exclusively:(bool)arg2;
- (bool)cam_ensureOutputs:(id)arg1 exclusively:(bool)arg2;
- (bool)cam_ensureOutputs:(id)arg1 whileRemoving:(id)arg2;
- (bool)cam_hasAddedInput:(id)arg1;
- (bool)cam_hasAddedOutput:(id)arg1;
- (void)cam_removeAllInputs;
- (void)cam_removeAllOutputs;
- (void)cam_removeInputs:(id)arg1;

@end
