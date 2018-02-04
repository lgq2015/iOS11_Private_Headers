/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCAudioStream : NSObject <VCMediaStreamDelegate> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSDictionary * _capabilities;
    AVCMediaStreamConfig * _configuration;
    AVConferenceXPCClient * _connection;
    id  _delegate;
    VCAudioStream * _opaqueStream;
}

@property (nonatomic, retain) NSDictionary *capabilities;
@property (nonatomic, retain) AVCMediaStreamConfig *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVCAudioStreamDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long direction;
@property (readonly) unsigned long long hash;
@property (getter=isInputFrequencyMeteringEnabled, nonatomic) bool inputFrequencyMeteringEnabled;
@property (getter=isOutputFrequencyMeteringEnabled, nonatomic) bool outputFrequencyMeteringEnabled;
@property (getter=isRTCPEnabled, nonatomic) bool rtcpEnabled;
@property (nonatomic) double rtcpSendIntervalSec;
@property (getter=isRTCPTimeOutEnabled, nonatomic) bool rtcpTimeOutEnabled;
@property (nonatomic) double rtcpTimeOutIntervalSec;
@property (getter=isRTPTimeOutEnabled, nonatomic) bool rtpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutIntervalSec;
@property (readonly) Class superclass;

+ (id)capabilities;

- (id)capabilities;
- (id)configuration;
- (bool)configure:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)delegate;
- (void)deregisterBlocksForDelegateNotifications;
- (long long)direction;
- (id)initWithIDSDestination:(id)arg1 isOriginator:(bool)arg2 callID:(id)arg3 error:(id*)arg4;
- (id)initWithIDSDestination:(id)arg1 isOriginator:(bool)arg2 error:(id*)arg3;
- (id)initWithLocalAddress:(id)arg1 callID:(id)arg2 error:(id*)arg3;
- (id)initWithLocalAddress:(id)arg1 error:(id*)arg2;
- (id)initWithLocalAddress:(id)arg1 isOriginator:(bool)arg2 callID:(id)arg3 error:(id*)arg4;
- (id)initWithLocalAddress:(id)arg1 isOriginator:(bool)arg2 error:(id*)arg3;
- (id)initWithLocalAddress:(id)arg1 networkSockets:(id)arg2 IDSDestination:(id)arg3 isOriginator:(bool)arg4 callID:(id)arg5 error:(id*)arg6;
- (id)initWithNetworkSockets:(id)arg1 isOriginator:(bool)arg2 callID:(id)arg3 error:(id*)arg4;
- (id)initWithNetworkSockets:(id)arg1 isOriginator:(bool)arg2 error:(id*)arg3;
- (bool)isInputFrequencyMeteringEnabled;
- (bool)isOutputFrequencyMeteringEnabled;
- (bool)isRTCPEnabled;
- (bool)isRTCPTimeOutEnabled;
- (bool)isRTPTimeOutEnabled;
- (void)pause;
- (void)refreshLoggingParameters;
- (void)registerBlocksForDelegateNotifications;
- (void)resume;
- (double)rtcpSendIntervalSec;
- (double)rtcpTimeOutIntervalSec;
- (double)rtpTimeOutIntervalSec;
- (void)sendDTMFDigitString:(id)arg1 withVolume:(unsigned char)arg2 duration:(unsigned short)arg3 interval:(unsigned short)arg4;
- (void)setCapabilities:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDirection:(long long)arg1;
- (void)setInputFrequencyMeteringEnabled:(bool)arg1;
- (void)setOutputFrequencyMeteringEnabled:(bool)arg1;
- (void)setRtcpEnabled:(bool)arg1;
- (void)setRtcpSendIntervalSec:(double)arg1;
- (void)setRtcpTimeOutEnabled:(bool)arg1;
- (void)setRtcpTimeOutIntervalSec:(double)arg1;
- (void)setRtpTimeOutEnabled:(bool)arg1;
- (void)setRtpTimeOutIntervalSec:(double)arg1;
- (void)start;
- (void)startContinuousDTMFWithDigit:(BOOL)arg1 volume:(unsigned char)arg2;
- (void)startSynchronizeWithStream:(long long)arg1;
- (void)stop;
- (void)stopContinuousDTMF;
- (void)terminateSession;
- (void)vcMediaStream:(id)arg1 didPauseStream:(bool)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didReceiveDTMFEventWithDigit:(BOOL)arg2;
- (void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2;
- (void)vcMediaStream:(id)arg1 didResumeStream:(bool)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didStartStream:(bool)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 updateFrequencyLevel:(id)arg2 isInputMeter:(bool)arg3;
- (void)vcMediaStream:(id)arg1 updateInputFrequencyLevel:(id)arg2;
- (void)vcMediaStream:(id)arg1 updateOutputFrequencyLevel:(id)arg2;
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;
- (void)vcMediaStreamDidStop:(id)arg1;

@end
