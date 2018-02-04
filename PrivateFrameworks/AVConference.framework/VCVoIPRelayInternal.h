/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVoIPRelayInternal : NSObject <VCAudioIODelegate, VCAudioIOSink, VCAudioIOSource> {
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
    }  _audioFormat;
    VCAudioIO * _audioIO;
    unsigned long long  _blockSizeSamples;
    bool  _canProcessAudio;
    id /* block */  _clientCaptureBlock;
    id /* block */  _clientRenderBlock;
}

@property (nonatomic) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } audioFormat;
@property (nonatomic) unsigned long long blockSizeSamples;
@property (nonatomic) bool canProcessAudio;
@property (nonatomic, copy) id /* block */ clientCaptureBlock;
@property (nonatomic, copy) id /* block */ clientRenderBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })audioFormat;
- (unsigned long long)blockSizeSamples;
- (bool)canProcessAudio;
- (id /* block */)clientCaptureBlock;
- (id /* block */)clientRenderBlock;
- (void)dealloc;
- (int)deviceRole;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (id)init;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)setAudioFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)setBlockSizeSamples:(unsigned long long)arg1;
- (void)setCanProcessAudio:(bool)arg1;
- (void)setClientCaptureBlock:(id /* block */)arg1;
- (void)setClientRenderBlock:(id /* block */)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)stopWithCompletionHandler:(id /* block */)arg1;

@end
