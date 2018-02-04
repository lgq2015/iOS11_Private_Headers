/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMCameraStreamControl : _HMCameraControl {
    HMCameraStream * _cameraStream;
    <_HMCameraStreamControlDelegate> * _delegate;
    NSString * _streamSessionID;
    unsigned long long  _streamState;
}

@property (nonatomic, readonly) HMCameraStream *cameraStream;
@property (nonatomic) <_HMCameraStreamControlDelegate> *delegate;
@property (nonatomic, retain) NSString *streamSessionID;
@property (nonatomic) unsigned long long streamState;

- (void).cxx_destruct;
- (void)_callVideoStartedDelegate;
- (void)_callVideoStoppedDelegate:(id)arg1;
- (void)_handleNegotiateStreamResponse:(id)arg1 error:(id)arg2 sessionID:(id)arg3;
- (void)_handleVideoStopResponse:(id)arg1 error:(id)arg2 sessionID:(id)arg3;
- (void)_handleVideoStreamStartResponse:(id)arg1 error:(id)arg2 sessionID:(id)arg3;
- (void)_handleVideoStreamStopped:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_resetState:(id)arg1;
- (void)_startStreamWithPraeferences:(id)arg1;
- (void)_stopStream;
- (id)cameraStream;
- (void)dealloc;
- (id)delegate;
- (void)homedRestarted;
- (id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3;
- (void)setCameraStream:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStreamSessionID:(id)arg1;
- (void)setStreamState:(unsigned long long)arg1;
- (void)startStreamWithPreferences:(id)arg1;
- (void)stopStream;
- (id)streamSessionID;
- (unsigned long long)streamState;

@end
