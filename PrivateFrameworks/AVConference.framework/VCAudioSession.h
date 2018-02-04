/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioSession : NSObject {
    VCAudioSessionClient * _activeClient;
    NSMutableArray * _clients;
    struct opaqueCMSession { } * _cmSession;
    NSMutableDictionary * _currentAudioSessionProperties;
    int  _currentClientPid;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    double  _hardwareSampleRate;
    bool  _isInterrupted;
    bool  _isTetheredDisplayMode;
    NSDictionary * _micSourceBack;
    NSDictionary * _micSourceFront;
    NSMutableDictionary * _requestedAudioSessionProperties;
    unsigned int  _selectedMicrophone;
    unsigned int  _sessionId;
    int  _sessionPid;
}

@property (nonatomic, readonly) NSDictionary *audioSessionProperties;
@property (nonatomic) int clientPid;
@property (nonatomic, readonly) struct opaqueCMSession { }*cmSession;

+ (bool)convertAudioSessionProperties:(id)arg1 audioClientSettings:(struct VCAudioClientSettings { bool x1; bool x2; int x3; int x4; }*)arg2;
+ (id)sharedInstance;

- (bool)applyAudioSessionMediaProperties:(id)arg1;
- (void)applyAudioSessionProperties;
- (void)applyClientPid;
- (bool)applyRequestedProperty:(id)arg1 defaultValue:(void*)arg2;
- (id)audioSessionProperties;
- (void)cleanupMicSources;
- (int)clientPid;
- (struct opaqueCMSession { }*)cmSession;
- (void)dealloc;
- (void)didAvailableSampleRateChange;
- (void)didBeginQuietTime;
- (void)didEndQuietTime;
- (void)didInterruptionEnded;
- (void)didPause;
- (bool)didRequestedStringPropertyChange:(id)arg1;
- (void)didResume;
- (void)didStop;
- (bool)forceBufferFrames:(int*)arg1;
- (void)handleAudioInterruption:(struct opaqueCMSession { }*)arg1 interruptionInfo:(struct __CFDictionary { }*)arg2;
- (id)init;
- (void)invalidateCache;
- (bool)isAnswerOnHoldUpdateParameters:(id)arg1;
- (void)refreshAudioSessionProperties;
- (bool)resetClient:(id)arg1 mediaSetting:(id)arg2;
- (void)resetOverrideRoute;
- (void)resumeActiveClient;
- (void)selectMicrophone:(unsigned int)arg1;
- (void)selectMicrophoneWithType:(unsigned int)arg1;
- (void)selectNewActiveClient;
- (void)setAudioSessionMode:(id)arg1;
- (void)setAudioSessionProperties:(id)arg1;
- (void)setBlockSize:(double)arg1 sampleRate:(double)arg2 force:(bool)arg3;
- (void)setBlockSizeOnSampleRateChange;
- (void)setClientPid:(int)arg1;
- (bool)setSampleRate:(double)arg1;
- (void)setupInputBeamforming;
- (void)setupVPBlockFormatWithProperties:(id)arg1;
- (bool)shouldResetAudioSession;
- (bool)startClient:(id)arg1 clientType:(unsigned char)arg2 mediaProperties:(id)arg3 sessionRef:(unsigned int*)arg4;
- (void)startInternal;
- (bool)stopClient:(id)arg1;
- (void)upgradeAudioSessionProperties;

@end
