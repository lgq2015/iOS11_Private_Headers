/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDVideoStreamInterface : HMDStreamInterface <AVCVideoStreamDelegate, HMDVideoStreamReconfigureDelegate> {
    <HMDVideoStreamInterfaceDelegate> * _delegate;
    <HMDVideoStreamLastDecodedFrameDelegate> * _lastFrameDelegate;
    NSObject<OS_dispatch_queue> * _lastFrameDelegateQueue;
    double  _rtcpSendIntervalSec;
    HMFOSTransaction * _snapshotDataTrasaction;
    AVCVideoStream * _videoStream;
    HMDVideoStreamReconfigure * _videoStreamReconfigure;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HMDVideoStreamInterfaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long direction;
@property (readonly) unsigned long long hash;
@property <HMDVideoStreamLastDecodedFrameDelegate> *lastFrameDelegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *lastFrameDelegateQueue;
@property (getter=isRTCPEnabled, nonatomic) bool rtcpEnabled;
@property (nonatomic) double rtcpSendIntervalSec;
@property (getter=isRTCPTimeOutEnabled, nonatomic) bool rtcpTimeOutEnabled;
@property (nonatomic) double rtcpTimeOutIntervalSec;
@property (getter=isRTPTimeOutEnabled, nonatomic) bool rtpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutIntervalSec;
@property (nonatomic, retain) HMFOSTransaction *snapshotDataTrasaction;
@property (nonatomic, readonly) NSNumber *streamToken;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *syncSource;
@property (nonatomic, retain) AVCVideoStream *videoStream;
@property (nonatomic, readonly) HMDVideoStreamReconfigure *videoStreamReconfigure;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callDidGetLastDecodedFrame:(id)arg1;
- (void)_callDidUpdateConfiguration;
- (void)_callNetworkDeteriorated;
- (void)_callNetworkImproved;
- (void)_callRelayStarted:(id)arg1;
- (void)_callStarted:(id)arg1;
- (void)_callStopped:(id)arg1;
- (bool)_createLocalSocket;
- (bool)_initializeStreamRemoteDestinationReceiver:(id)arg1;
- (bool)_initializeStreamRemoteLocal;
- (bool)_initializeStreamRemoteSender:(id)arg1;
- (bool)_initializeStreamRemoteSocketReceiver:(id)arg1;
- (void)_startStream:(id)arg1;
- (void)captureSnapshot;
- (void)dealloc;
- (id)delegate;
- (long long)direction;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 sessionHandler:(id)arg5 localNetworkConfig:(id)arg6;
- (bool)isRTCPEnabled;
- (bool)isRTCPTimeOutEnabled;
- (bool)isRTPTimeOutEnabled;
- (id)lastFrameDelegate;
- (id)lastFrameDelegateQueue;
- (id)logIdentifier;
- (double)rtcpSendIntervalSec;
- (double)rtcpTimeOutIntervalSec;
- (double)rtpTimeOutIntervalSec;
- (void)setDirection:(long long)arg1;
- (void)setLastFrameDelegate:(id)arg1;
- (void)setLastFrameDelegateQueue:(id)arg1;
- (void)setRtcpEnabled:(bool)arg1;
- (void)setRtcpSendInterval:(double)arg1;
- (void)setRtcpSendIntervalSec:(double)arg1;
- (void)setRtcpTimeOutEnabled:(bool)arg1;
- (void)setRtcpTimeOutIntervalSec:(double)arg1;
- (void)setRtpTimeOutEnabled:(bool)arg1;
- (void)setRtpTimeOutIntervalSec:(double)arg1;
- (void)setSnapshotDataTrasaction:(id)arg1;
- (void)setSnapshotDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)setVideoStream:(id)arg1;
- (id)snapshotDataTrasaction;
- (void)startStream:(id)arg1;
- (void)stopStream;
- (void)stream:(id)arg1 didGetLastDecodedFrame:(id)arg2;
- (void)stream:(id)arg1 didStart:(bool)arg2 error:(id)arg3;
- (void)stream:(id)arg1 didUpdateVideoConfiguration:(bool)arg2 error:(id)arg3;
- (void)stream:(id)arg1 downlinkQualityDidChange:(id)arg2;
- (void)streamDidRTCPTimeOut:(id)arg1;
- (void)streamDidRTPTimeOut:(id)arg1;
- (void)streamDidServerDie:(id)arg1;
- (void)streamDidStop:(id)arg1;
- (id)streamToken;
- (id)syncSource;
- (void)updateReconfigurationMode:(bool)arg1;
- (void)updateStreamConfiguration:(id)arg1;
- (id)videoStream;
- (id)videoStreamReconfigure;
- (void)videoStreamReconfigureDidNetworkDeteriorate:(id)arg1;
- (void)videoStreamReconfigureDidNetworkImprove:(id)arg1;

@end
