/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioTransmitterConfig : NSObject {
    struct tagHANDLE { int x1; } * _afrcHandle;
    bool  _allowAudioSwitching;
    NSMutableArray * _audioPayloads;
    int  _bundlingScheme;
    VCAudioPayload * _chosenAudioPayload;
    VCAudioPayload * _chosenDTXPayload;
    int  _chosenRedPayloadType;
    void * _controlInfoGenerator;
    bool  _ignoreSilence;
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
    }  _inputFormat;
    bool  _isUseCaseWatchContinuity;
    struct tagHANDLE { int x1; } * _mediaQueue;
    bool  _needsPacketThread;
    int  _operatingMode;
    unsigned char  _packetsPerBundle;
    bool  _redEnabled;
    struct opaqueRTCReporting { } * _reportingAgent;
    struct tagHANDLE { int x1; } * _rtpHandle;
    struct tagHANDLE { int x1; } * _rtpVideo;
    AVCStatisticsCollector * _statisticsCollector;
    bool  _supportsAdaptation;
    bool  _transmitROC;
    VCTransportSession * _transportSession;
    bool  _useAFRC;
}

@property (nonatomic) struct tagHANDLE { int x1; }*afrcHandle;
@property (nonatomic) bool allowAudioSwitching;
@property (nonatomic, retain) NSMutableArray *audioPayloads;
@property (nonatomic) int bundlingScheme;
@property (nonatomic, retain) VCAudioPayload *chosenAudioPayload;
@property (nonatomic, retain) VCAudioPayload *chosenDTXPayload;
@property (nonatomic) int chosenRedPayloadType;
@property (nonatomic) void*controlInfoGenerator;
@property (nonatomic) bool ignoreSilence;
@property (nonatomic) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } inputFormat;
@property (nonatomic) bool isUseCaseWatchContinuity;
@property (nonatomic) struct tagHANDLE { int x1; }*mediaQueue;
@property (nonatomic) bool needsPacketThread;
@property (nonatomic) int operatingMode;
@property (nonatomic) unsigned char packetsPerBundle;
@property (getter=isRedEnabled, nonatomic) bool redEnabled;
@property (nonatomic) struct opaqueRTCReporting { }*reportingAgent;
@property (nonatomic) struct tagHANDLE { int x1; }*rtpHandle;
@property (nonatomic) struct tagHANDLE { int x1; }*rtpVideo;
@property (nonatomic, retain) AVCStatisticsCollector *statisticsCollector;
@property (nonatomic) bool supportsAdaptation;
@property (nonatomic) bool transmitROC;
@property (nonatomic, retain) VCTransportSession *transportSession;
@property (nonatomic) bool useAFRC;

- (struct tagHANDLE { int x1; }*)afrcHandle;
- (bool)allowAudioSwitching;
- (id)audioPayloads;
- (int)bundlingScheme;
- (id)chosenAudioPayload;
- (id)chosenDTXPayload;
- (int)chosenRedPayloadType;
- (void*)controlInfoGenerator;
- (void)dealloc;
- (id)description;
- (bool)ignoreSilence;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })inputFormat;
- (bool)isRedEnabled;
- (bool)isUseCaseWatchContinuity;
- (struct tagHANDLE { int x1; }*)mediaQueue;
- (bool)needsPacketThread;
- (int)operatingMode;
- (unsigned char)packetsPerBundle;
- (struct opaqueRTCReporting { }*)reportingAgent;
- (struct tagHANDLE { int x1; }*)rtpHandle;
- (struct tagHANDLE { int x1; }*)rtpVideo;
- (void)setAfrcHandle:(struct tagHANDLE { int x1; }*)arg1;
- (void)setAllowAudioSwitching:(bool)arg1;
- (void)setAudioPayloads:(id)arg1;
- (void)setBundlingScheme:(int)arg1;
- (void)setChosenAudioPayload:(id)arg1;
- (void)setChosenDTXPayload:(id)arg1;
- (void)setChosenRedPayloadType:(int)arg1;
- (void)setControlInfoGenerator:(void*)arg1;
- (void)setIgnoreSilence:(bool)arg1;
- (void)setInputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)setIsUseCaseWatchContinuity:(bool)arg1;
- (void)setMediaQueue:(struct tagHANDLE { int x1; }*)arg1;
- (void)setNeedsPacketThread:(bool)arg1;
- (void)setOperatingMode:(int)arg1;
- (void)setPacketsPerBundle:(unsigned char)arg1;
- (void)setRedEnabled:(bool)arg1;
- (void)setReportingAgent:(struct opaqueRTCReporting { }*)arg1;
- (void)setRtpHandle:(struct tagHANDLE { int x1; }*)arg1;
- (void)setRtpVideo:(struct tagHANDLE { int x1; }*)arg1;
- (void)setStatisticsCollector:(id)arg1;
- (void)setSupportsAdaptation:(bool)arg1;
- (void)setTransmitROC:(bool)arg1;
- (void)setTransportSession:(id)arg1;
- (void)setUseAFRC:(bool)arg1;
- (id)statisticsCollector;
- (bool)supportsAdaptation;
- (bool)transmitROC;
- (id)transportSession;
- (bool)useAFRC;

@end
