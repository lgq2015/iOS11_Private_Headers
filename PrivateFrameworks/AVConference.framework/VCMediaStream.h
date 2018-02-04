/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaStream : NSObject <RTCPReportProvider, VCMediaStreamProtocol, VCSecurityEventHandler> {
    NSString * _callID;
    VCDatagramChannelIDS * _datagramChannel;
    <VCMediaStreamDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateNotificationQueue;
    NSString * _idsDestination;
    bool  _isSRTPInitialized;
    double  _lastRTCPTimeoutReportTime;
    double  _lastRTPTimeoutReportTime;
    unsigned int  _localSSRC;
    <VCMomentsCollectorDelegate> * _momentsCollectorDelegate;
    VCWeakObjectHolder * _notificationDelegate;
    VCWeakObjectHolder * _rtcpReportProvider;
    double  _rtcpTimeoutEnabledTime;
    struct tagHANDLE { int x1; } * _rtpHandle;
    double  _rtpTimeoutEnabledTime;
    int  _state;
    VCMediaStreamConfig * _streamConfig;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _streamLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCMediaStreamDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int localSSRC;
@property (nonatomic) <VCMomentsCollectorDelegate> *momentsCollectorDelegate;
@property (nonatomic) <VCMediaStreamNotification> *notificationDelegate;
@property (nonatomic) <RTCPReportProvider> *rtcpReportProvider;
@property (nonatomic) int state;
@property (nonatomic, retain) VCMediaStreamConfig *streamConfig;
@property (readonly) Class superclass;

+ (bool)isSameSRTPKey:(id)arg1 newKey:(id)arg2;

- (int)SRTPCipherSuiteForVCMediaStreamCipherSuite:(long long)arg1;
- (bool)configureMediaStreamWithConfiguration:(id)arg1 error:(id*)arg2 rtpHandle:(struct tagHANDLE { int x1; }*)arg3;
- (void)dealloc;
- (id)delegate;
- (bool)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned char x9; }*)arg1 reportCount:(char *)arg2;
- (int)getCryptoSet:(struct tagSRTPExchangeInfo { BOOL x1[65]; BOOL x2[29]; unsigned int x3; }*)arg1 withMasterKey:(id)arg2;
- (unsigned int)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1;
- (int)getKeyDerivationCryptoSet:(struct { BOOL x1[65]; int x2; BOOL x3[65]; int x4; unsigned int x5; }*)arg1 withKeyMaterial:(id)arg2;
- (unsigned int)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1;
- (int)getSRTPMasterKeyLength:(long long)arg1;
- (void)handleEncryptionInfoChange:(id)arg1;
- (id)init;
- (bool)isSameSRTPConfig:(id)arg1;
- (unsigned int)localSSRC;
- (void)lock;
- (id)momentsCollectorDelegate;
- (id)notificationDelegate;
- (void)onCallIDChanged;
- (bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id*)arg2;
- (void)onPause;
- (void)onResume;
- (void)onRtcpEnabledChanged;
- (void)onRtcpSendIntervalChanged;
- (void)onStart;
- (void)onStop;
- (void)registerRTPPayloadMappings;
- (id)rtcpReportProvider;
- (id)rxNetworkPayloads;
- (void)sendControlPacket;
- (void)setDelegate:(id)arg1;
- (id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id*)arg3;
- (void)setMomentsCollectorDelegate:(id)arg1;
- (void)setNotificationDelegate:(id)arg1;
- (void)setPause:(bool)arg1;
- (void)setRtcpEnabled:(bool)arg1;
- (void)setRtcpReportProvider:(id)arg1;
- (void)setRtcpSendInterval:(double)arg1;
- (void)setRtcpTimeOutEnabled:(bool)arg1;
- (void)setRtcpTimeOutInterval:(double)arg1;
- (void)setRtpTimeOutEnabled:(bool)arg1;
- (void)setRtpTimeOutInterval:(double)arg1;
- (void)setState:(int)arg1;
- (void)setStreamConfig:(id)arg1;
- (bool)setStreamConfig:(id)arg1 withError:(id*)arg2;
- (void)setStreamDirection:(long long)arg1;
- (id)setupRTPWithError:(id*)arg1;
- (id)setupRTPWithIDSDestination:(id)arg1 error:(id*)arg2;
- (id)setupRTPWithIPInfo:(id)arg1 error:(id*)arg2;
- (id)setupRTPWithLocalParticipantInfo:(id)arg1 error:(id*)arg2;
- (id)setupRTPWithSockets:(id)arg1 error:(id*)arg2;
- (int)setupSRTP;
- (void)start;
- (int)state;
- (void)stop;
- (id)streamConfig;
- (long long)streamDirection;
- (char *)streamStateToString:(int)arg1;
- (id)supportedPayloads;
- (void)unlock;

@end
