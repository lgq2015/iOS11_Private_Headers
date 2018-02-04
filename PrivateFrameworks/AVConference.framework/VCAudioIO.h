/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioIO : NSObject <VCAudioIOControllerDelegate, VCAudioIOSink, VCAudioIOSource> {
    <VCAudioIOControllerControl> * _audioIOController;
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
    }  _clientFormat;
    unsigned int  _clientSamplesPerFrame;
    VCAudioIOControllerClient * _controllerClient;
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
    }  _controllerFormat;
    unsigned int  _controllerSamplesPerFrame;
    id  _delegate;
    bool  _isControllerAudioFormatValid;
    bool  _isControllerReset;
    bool  _isConverterNeeded;
    bool  _isGKVoiceChat;
    bool  _isMuted;
    struct _VCAudioEndpointData { 
        struct SoundDec_t {} *converter; 
        struct opaqueVCAudioBufferList {} *converterBuffer; 
        bool timestampInitialized; 
        bool controllerReset; 
        double lastHostTime; 
        unsigned int lastTimestamp; 
    }  _sinkData;
    struct _VCAudioEndpointData { 
        struct SoundDec_t {} *converter; 
        struct opaqueVCAudioBufferList {} *converterBuffer; 
        bool timestampInitialized; 
        bool controllerReset; 
        double lastHostTime; 
        unsigned int lastTimestamp; 
    }  _sourceData;
    id /* block */  _startCompletionBlock;
    unsigned int  _state;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _stateMutex;
    id /* block */  _stopCompletionBlock;
}

@property (nonatomic, readonly) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } clientAudioFormat;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned char direction;
@property (readonly) unsigned long long hash;
@property (getter=isInputMeteringEnabled, nonatomic) bool inputMeteringEnabled;
@property (nonatomic) bool isGKVoiceChat;
@property (getter=isMuted, nonatomic) bool muted;
@property (getter=isOutputMeteringEnabled, nonatomic) bool outputMeteringEnabled;
@property (nonatomic, readonly) unsigned int samplesPerFrame;
@property (readonly) Class superclass;

+ (id)controllerForDeviceRole:(int)arg1;

- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })clientAudioFormat;
- (void)controllerFormatChanged:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (bool)createConverterForSource:(bool)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)delegate;
- (void)didResume;
- (void)didStart:(bool)arg1 error:(id)arg2;
- (void)didStop:(bool)arg1 error:(id)arg2;
- (void)didSuspend;
- (unsigned char)direction;
- (void)forceCleanup;
- (id)initWithOperatingMode:(int)arg1 deviceRole:(int)arg2 direction:(unsigned char)arg3 allowAudioRecording:(bool)arg4 delegate:(id)arg5 clientPid:(int)arg6;
- (bool)isGKVoiceChat;
- (bool)isInputMeteringEnabled;
- (bool)isMuted;
- (bool)isOutputMeteringEnabled;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (bool)reconfigureWithOperatingMode:(int)arg1 deviceRole:(int)arg2 direction:(unsigned char)arg3 allowAudioRecording:(bool)arg4;
- (void)releaseConverters;
- (unsigned int)samplesPerFrame;
- (void)setClientFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)setDirection:(unsigned char)arg1;
- (void)setFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; }*)arg1;
- (void)setInputMeteringEnabled:(bool)arg1;
- (void)setIsGKVoiceChat:(bool)arg1;
- (void)setMute:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)setOutputMeteringEnabled:(bool)arg1;
- (void)setRemoteCodecType:(unsigned int)arg1 sampleRate:(double)arg2;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)stopWithCompletionHandler:(id /* block */)arg1;

@end
