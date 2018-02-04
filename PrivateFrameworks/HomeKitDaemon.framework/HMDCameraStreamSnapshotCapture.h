/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraStreamSnapshotCapture : HMFObject <HMDVideoStreamLastDecodedFrameDelegate, HMFLogging, HMFTimerDelegate> {
    bool  _capturingCurrentFrame;
    bool  _capturingLastFrame;
    <HMDCameraStreamSnapshotCaptureDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    HMFTimer * _lastDecodedFrameTimer;
    HMDCameraSessionID * _sessionID;
    HMDVideoStreamInterface * _videoStreamInterface;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) bool capturingCurrentFrame;
@property (nonatomic) bool capturingLastFrame;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDCameraStreamSnapshotCaptureDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMFTimer *lastDecodedFrameTimer;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMDVideoStreamInterface *videoStreamInterface;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callDidGetLastSnapshot:(id)arg1;
- (void)_callDidGetNewSnapshot:(id)arg1;
- (void)_callSnapshotDelegate:(id)arg1;
- (void)_captureFrame;
- (void)captureCurrentFrame;
- (void)captureLastFrame;
- (bool)capturingCurrentFrame;
- (bool)capturingLastFrame;
- (id)delegate;
- (id)delegateQueue;
- (id)description;
- (id)initWithWorkQueue:(id)arg1 videoStreamInterface:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)lastDecodedFrameTimer;
- (id)logIdentifier;
- (id)sessionID;
- (void)setCapturingCurrentFrame:(bool)arg1;
- (void)setCapturingLastFrame:(bool)arg1;
- (void)setLastDecodedFrameTimer:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)videoStream:(id)arg1 didGetLastDecodedFrame:(id)arg2;
- (id)videoStreamInterface;
- (id)workQueue;

@end
