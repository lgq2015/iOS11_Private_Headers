/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCVideoStream : NSObject <VCMediaStreamDelegate> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSDictionary * _capabilities;
    AVCMediaStreamConfig * _configuration;
    AVConferenceXPCClient * _connection;
    id  _delegate;
    VCVideoStream * _opaqueStream;
    long long  _streamToken;
}

@property (nonatomic, retain) NSDictionary *capabilities;
@property (nonatomic, retain) AVCMediaStreamConfig *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVCVideoStreamDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long direction;
@property (readonly) unsigned long long hash;
@property (getter=isRTCPEnabled, nonatomic) bool rtcpEnabled;
@property (nonatomic) double rtcpSendIntervalSec;
@property (getter=isRTCPTimeOutEnabled, nonatomic) bool rtcpTimeOutEnabled;
@property (nonatomic) double rtcpTimeOutIntervalSec;
@property (getter=isRTPTimeOutEnabled, nonatomic) bool rtpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutIntervalSec;
@property (nonatomic, readonly) long long streamToken;
@property (readonly) Class superclass;

+ (id)capabilities;
+ (id)extractClientDownlinkQualityInfoDictionary:(id)arg1;
+ (id)extractClientUplinkQualityInfoDictionary:(id)arg1;

- (id)capabilities;
- (id)configuration;
- (bool)configure:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)delegate;
- (void)deregisterBlocksForDelegateNotifications;
- (long long)direction;
- (id)getStats;
- (id)initWithIDSDestination:(id)arg1 callID:(id)arg2 error:(id*)arg3;
- (id)initWithLocalAddress:(id)arg1 networkSockets:(id)arg2 IDSDestination:(id)arg3 callID:(id)arg4 error:(id*)arg5;
- (id)initWithNetworkSockets:(id)arg1 callID:(id)arg2 error:(id*)arg3;
- (bool)isRTCPEnabled;
- (bool)isRTCPTimeOutEnabled;
- (bool)isRTPTimeOutEnabled;
- (void)pause;
- (void)refreshLoggingParameters;
- (void)registerBlocksForDelegateNotifications;
- (void)requestLastDecodedFrame;
- (void)resume;
- (double)rtcpSendIntervalSec;
- (double)rtcpTimeOutIntervalSec;
- (double)rtpTimeOutIntervalSec;
- (void)setCapabilities:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDirection:(long long)arg1;
- (void)setRtcpEnabled:(bool)arg1;
- (void)setRtcpSendIntervalSec:(double)arg1;
- (void)setRtcpTimeOutEnabled:(bool)arg1;
- (void)setRtcpTimeOutIntervalSec:(double)arg1;
- (void)setRtpTimeOutEnabled:(bool)arg1;
- (void)setRtpTimeOutIntervalSec:(double)arg1;
- (void)start;
- (void)stop;
- (long long)streamToken;
- (void)terminateSession;
- (void)updateVideoConfiguration:(id)arg1;
- (void)vcMediaStream:(id)arg1 didPauseStream:(bool)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2;
- (void)vcMediaStream:(id)arg1 didResumeStream:(bool)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didStartStream:(bool)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didUpdateVideoConfiguration:(bool)arg2 error:(id)arg3 dictionary:(id)arg4;
- (void)vcMediaStream:(id)arg1 downlinkQualityDidChange:(id)arg2;
- (void)vcMediaStream:(id)arg1 uplinkQualityDidChange:(id)arg2;
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;
- (void)vcMediaStreamDidStop:(id)arg1;

@end
