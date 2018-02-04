/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDStreamingManager : HMFObject <AVCRemoteVideoClientDelegate, HMDAudioStreamInterfaceDelegate, HMDVideoStreamInterfaceDelegate, HMFLogging> {
    HMDAudioStreamInterface * _audioStreamInterface;
    AVCRemoteVideoClient * _avcRemoteVideo;
    <HMDStreamingManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    HMDCameraSessionID * _sessionID;
    NSNumber * _slotIdentifier;
    HMDCameraStreamSnapshotHandler * _streamSnapshotHandler;
    HMDVideoStreamInterface * _videoStreamInterface;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) HMDAudioStreamInterface *audioStreamInterface;
@property (nonatomic, retain) AVCRemoteVideoClient *avcRemoteVideo;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMDStreamingManagerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDCameraSessionID *sessionID;
@property (nonatomic, retain) NSNumber *slotIdentifier;
@property (nonatomic, readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMDVideoStreamInterface *videoStreamInterface;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callConfigurationUpdated;
- (void)_callNetworkDeteriorated;
- (void)_callNetworkImproved;
- (void)_callReceivedFirstFrame:(id)arg1;
- (void)_callRelayStarted:(id)arg1;
- (void)_callStreamStarted:(id)arg1;
- (void)_callStreamStopped:(id)arg1;
- (void)_startStreamWithVideoConfig:(id)arg1 audioConfig:(id)arg2;
- (void)_stopStream;
- (void)audioStream:(id)arg1 didPause:(id)arg2;
- (void)audioStream:(id)arg1 didResume:(id)arg2;
- (void)audioStream:(id)arg1 didStart:(id)arg2;
- (void)audioStream:(id)arg1 didStop:(id)arg2;
- (id)audioStreamInterface;
- (id)avcRemoteVideo;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)initWithSessionID:(id)arg1 streamSnapshotHandler:(id)arg2 workQueue:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 localVideoNetworkConfig:(id)arg6 localAudioNetworkConfig:(id)arg7 sessionHandler:(id)arg8;
- (id)logIdentifier;
- (void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2;
- (void)remoteVideoClientDidReceiveFirstFrame:(id)arg1;
- (void)remoteVideoClientDidReceiveLastFrame:(id)arg1;
- (void)remoteVideoServerDidDie:(id)arg1;
- (id)sessionID;
- (void)setAudioStreamInterface:(id)arg1;
- (void)setAvcRemoteVideo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSlotIdentifier:(id)arg1;
- (void)setVideoStreamInterface:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)slotIdentifier;
- (void)startStreamWithVideoConfig:(id)arg1 audioConfig:(id)arg2;
- (id)streamSnapshotHandler;
- (void)updateAudioSetting:(unsigned long long)arg1;
- (void)updateReconfigurationMode:(bool)arg1;
- (void)updateStreamConfiguration:(id)arg1;
- (void)videoStream:(id)arg1 didStart:(id)arg2;
- (void)videoStream:(id)arg1 didStartRelay:(id)arg2;
- (void)videoStream:(id)arg1 didStop:(id)arg2;
- (void)videoStreamDidNetworkDeteriorate:(id)arg1;
- (void)videoStreamDidNetworkImprove:(id)arg1;
- (void)videoStreamDidUpdateConfiguration:(id)arg1;
- (id)videoStreamInterface;
- (id)workQueue;

@end
