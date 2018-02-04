/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVirtualTTYDevice : NSObject <VCAudioIODelegate, VCAudioIOSink, VCAudioIOSource, VCMediaStreamProtocol> {
    VCAudioIO * _audioIO;
    struct opaqueCMSimpleQueue { } * _charQueue;
    struct tagVCMemoryPool { struct { void *x_1_1_1; long long x_1_1_2; } x1; unsigned long long x2; } * _characterPool;
    int  _clientPid;
    VCAudioPayload * _currentAudioPayload;
    struct SoundDec_t { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; struct AudioStreamBasicDescription { double x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; } x2; int x3; int x4; struct OpaqueAudioConverter {} *x5; char *x6; int x7; struct AudioStreamPacketDescription { long long x_8_1_1; unsigned int x_8_1_2; unsigned int x_8_1_3; } x8; struct AudioBufferList {} *x9; struct AudioBufferList {} *x10; char *x11; char *x12; int x13; int x14; int x15; int x16; unsigned char x17; int x18; int x19; unsigned int x20; unsigned int x21; } * _decoder;
    unsigned int  _vpioSamplesPerFrame;
    NSObject<VCMediaStreamDelegate> * delegate;
    NSObject<OS_dispatch_queue> * delegateNotificationQueue;
    int  deviceRole;
    bool  isValid;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  sessionLock;
    int  state;
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
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<VCMediaStreamDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property int deviceRole;
@property (readonly) unsigned long long hash;
@property bool isValid;
@property (readonly) Class superclass;

- (bool)canProcessAudio;
- (void)dealloc;
- (id)delegate;
- (int)deviceRole;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (id)initWithMode:(long long)arg1 clientPid:(int)arg2;
- (bool)isValid;
- (void)lock;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)sendCharater:(unsigned short)arg1;
- (void)setCanProcessAudio:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceRole:(int)arg1;
- (void)setIsValid:(bool)arg1;
- (void)setPause:(bool)arg1;
- (bool)setStreamConfig:(id)arg1 withError:(id*)arg2;
- (void)start;
- (void)startVirtualTTYWithCompletionHandler:(id /* block */)arg1;
- (void)stop;
- (void)stopAudioWithCompletionHandler:(id /* block */)arg1;
- (void)unlock;

@end
