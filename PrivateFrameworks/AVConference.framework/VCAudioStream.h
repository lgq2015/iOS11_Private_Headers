/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioStream : VCMediaStream <VCAudioIODelegate, VCAudioIOSink, VCAudioIOSource, VCMediaStreamSyncSource, WRMClientDelegate> {
    VCAudioIO * _audioIO;
    void * _audioMediaControlInfoGenerator;
    struct tagVCAudioReceiver { struct tagVCAudioReceiverConfig { struct tagHANDLE {} *x_1_1_1; void *x_1_1_2; void *x_1_1_3; unsigned int x_1_1_4; int x_1_1_5; int x_1_1_6; struct opaqueRTCReporting {} *x_1_1_7; } x1; void *x2; void *x3; struct opaqueVCJitterBuffer {} *x4; bool x5; struct AudioStreamBasicDescription {} *x6; int x7; double x8; struct tagVCRealTimeThread { unsigned int x_9_1_1; unsigned int x_9_1_2; struct _opaque_pthread_mutex_t { long long x_3_2_1; BOOL x_3_2_2[56]; } x_9_1_3; struct _opaque_pthread_mutex_t { long long x_4_2_1; BOOL x_4_2_2[56]; } x_9_1_4; struct _opaque_pthread_cond_t { long long x_5_2_1; BOOL x_5_2_2[40]; } x_9_1_5; int (*x_9_1_6)(); void *x_9_1_7; struct OpaqueFigThread {} *x_9_1_8; int x_9_1_9; BOOL x_9_1_10[60]; unsigned int x_9_1_11; unsigned int x_9_1_12; } x9; struct tagVCAudioReceiverReportingTask { struct opaqueRTCReporting {} *x_10_1_1; struct tagHANDLE {} *x_10_1_2; } x10; bool x11; struct _opaque_pthread_mutex_t { long long x_12_1_1; BOOL x_12_1_2[56]; } x12; struct _opaque_pthread_mutex_t { long long x_13_1_1; BOOL x_13_1_2[56]; } x13; } * _audioReceiver;
    VCAudioTransmitter * _audioTransmitter;
    int  _clientPid;
    bool  _isMuted;
    bool  _isRemoteMuted;
    AVCStatisticsCollector * _statisticsCollector;
    NSMutableArray * audioPayloads;
    unsigned int  awdTime;
    unsigned int  conferenceID;
    VCAudioPayload * currentAudioPayload;
    VCAudioPayload * currentDTXPayload;
    double  dAudioHostTime;
    int  deviceRole;
    DTMFEventHandler * dtmfEventHandler;
    bool  isValid;
    unsigned int  lastInputAudioTimeStamp;
    unsigned int  lastSentAudioSampleTime;
    bool  lastVoiceActive;
    int  numBufferBytesAvailable;
    int  operatingMode;
    unsigned int  packetTimeoutCheckCounter;
    NSObject<OS_dispatch_source> * pausedAudioHeartBeat;
    int  preferredAudioCodec;
    struct opaqueRTCReporting { } * reportingAgent;
    long long  sampleRate;
    long long  samplesPerFrame;
    struct _METER_INFO { 
        bool frequencyMeteringEnabled; 
        FFTMeter *fftMeter; 
    }  soundMeter;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  stateLock;
    id  syncSourceDelegate;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  vpioFormat;
    WRMClient * wrmClient;
    struct tagWRMMetricsInfo { 
        bool bInitialized; 
        struct tagHANDLE {} *hRTPHandle; 
        unsigned int dwReportInterval; 
        unsigned int dwWrmTime; 
        unsigned int dwPlaybackCount; 
        unsigned int dwPlaybackCountSpeech; 
        unsigned int dwErasureCount; 
        unsigned int dwErasureSilence; 
        unsigned int dwTimeOfLastRRPacket; 
        unsigned int dwEstimatedRTTMilliSeconds; 
        unsigned int dwJitter; 
        unsigned int dwTotalPacketRecv; 
        unsigned int dwDTXPacketRecv; 
        unsigned long long callId; 
        unsigned long long nominalJitterBufferDelay; 
        unsigned long long targetJitterQueueSize; 
        int nFraction; 
        int (*reportWRMMetricsCallback)(); 
        struct { 
            void *info; 
            int (*retain)(); 
            int (*release)(); 
        } wrmMetricsReportingContext; 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } wrmMetricsReportingLock; 
        unsigned int dwInternalTSRate; 
        unsigned int dwPacketSent; 
        unsigned int isCallAudioOnly; 
        unsigned int bwEstimation; 
        unsigned int targetBitrate; 
        unsigned int oneWayRelativeDelay; 
        unsigned int adaptationPacketLossPercentage; 
        unsigned int isLocalCellular; 
        unsigned int isVideoPaused; 
    }  wrmInfo;
}

@property (retain) VCAudioIO *audioIO;
@property (retain) VCAudioTransmitter *audioTransmitter;
@property (readonly) unsigned int conferenceID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceRole;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isValid;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic) int operatingMode;
@property (getter=isRemoteMuted, nonatomic) bool remoteMuted;
@property (nonatomic, retain) AVCStatisticsCollector *statisticsCollector;
@property (readonly) Class superclass;
@property (nonatomic) NSObject<VCMediaStreamSyncSourceDelegate> *syncSourceDelegate;

+ (unsigned char)audioIODirectionWithMediaStreamDirection:(long long)arg1;
+ (id)capabilities;
+ (id)supportedAudioPayloads;

- (void)_computeInternalFormatForAudioConfig:(id)arg1;
- (id)addAudioPayload:(int)arg1;
- (id)audioIO;
- (id)audioTransmitter;
- (int)bundlingSchemeForOperatingMode:(int)arg1 payloadType:(int)arg2;
- (bool)canProcessAudio;
- (int)captureMeshMode:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)checkPacketTimeouts;
- (bool)choosePayload:(int*)arg1 count:(int)arg2;
- (void)cleanupAudio;
- (unsigned int)codecTypeFromAudioPayload:(int)arg1;
- (unsigned int)computePacketTimestampWithInputTimestamp:(unsigned int)arg1 numSamples:(int)arg2 hostTime:(double)arg3;
- (unsigned int)conferenceID;
- (id)configForPayloadType:(int)arg1;
- (bool)createAudioReceiver;
- (bool)createAudioTransmitter:(long long)arg1;
- (void)dealloc;
- (int)deviceRole;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (bool)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned char x9; }*)arg1 reportCount:(char *)arg2;
- (void)generateWRMReport;
- (int)getPacketsPerBundle;
- (id)getReportingClientName;
- (int)getReportingClientType;
- (id)getReportingServiceID;
- (long long)getSyncSourceSampleRate;
- (void)handleCodecRateModeChange:(int)arg1 payload:(int)arg2;
- (id)initWithClientPid:(int)arg1;
- (id)initWithClientPid:(int)arg1 ssrc:(unsigned int)arg2;
- (void)initializeWRM;
- (unsigned int)internalSampleRateForCodecType:(long long)arg1;
- (bool)isFrequencyMeteringEnabled:(int)arg1;
- (bool)isMuted;
- (bool)isRemoteMuted;
- (bool)isValid;
- (void)onCallIDChanged;
- (bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id*)arg2;
- (void)onPause;
- (void)onResume;
- (void)onRtcpEnabledChanged;
- (void)onRtcpSendIntervalChanged;
- (void)onStart;
- (void)onStop;
- (int)operatingMode;
- (int)operatingModeForAudioStreamMode:(long long)arg1;
- (unsigned int)preferredAudioBitrateForPayload:(int)arg1;
- (void)prepareAudio;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)pullDecodedMeshMode:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)registerCodecRateModeChangeNotifications;
- (void)reportRTCPPackets:(struct _RTCPPacketList { union tagNTP { unsigned long long x_1_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; } x1; unsigned char x2; struct tagRTCPPACKET {} *x3[10]; unsigned char x4[1472]; unsigned int x5; unsigned char x6[1472]; }*)arg1;
- (void)reportWRMMetrics:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; }*)arg1;
- (void)reportingAudioStreamEvent:(unsigned short)arg1;
- (void)restartPausedHeartbeat;
- (void)sendDTMFEvent:(id)arg1;
- (void)setAudioIO:(id)arg1;
- (bool)setAudioStreamConfig:(id)arg1 error:(id*)arg2;
- (void)setAudioTransmitter:(id)arg1;
- (void)setCanProcessAudio:(bool)arg1;
- (void)setDTXPayload:(id)arg1;
- (void)setDeviceRole:(int)arg1;
- (void)setFrequencyMeteringEnabled:(bool)arg1 meterType:(int)arg2;
- (void)setInputTimestamp:(unsigned int)arg1 packetTimestamp:(int)arg2 hostTime:(double)arg3;
- (void)setIsValid:(bool)arg1;
- (bool)setMediaQueueStreamSettings;
- (void)setMuted:(bool)arg1;
- (void)setOperatingMode:(int)arg1;
- (bool)setReceiverPayloads:(id)arg1;
- (void)setRemoteMuted:(bool)arg1;
- (void)setState:(int)arg1;
- (void)setStatisticsCollector:(id)arg1;
- (void)setStreamDirection:(long long)arg1;
- (void)setSyncSourceDelegate:(id)arg1;
- (void)setWRMMetricConfig:(struct { unsigned long long x1; }*)arg1;
- (void)setWRMNotification:(struct { int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; }*)arg1;
- (bool)setupAudioCodecWithPayload:(int)arg1;
- (void)setupRTPPayloads;
- (void)startAudioWithCompletionHandler:(id /* block */)arg1;
- (void)startPausedHeartbeat;
- (void)startWRM;
- (void)stateEnter;
- (void)stateExit;
- (id)statisticsCollector;
- (void)stopAudioWithCompletionHandler:(id /* block */)arg1;
- (void)stopPausedHeartbeat;
- (void)stopSendDTMFEvent;
- (void)stopWRM;
- (id)supportedPayloads;
- (id)syncSourceDelegate;
- (void)uninitializeWRM;
- (void)unregisterCodecRateModeChangeNotifications;
- (void)updateSoundMeter:(int)arg1 sampleBuffer:(struct opaqueVCAudioBufferList { }*)arg2;

@end
