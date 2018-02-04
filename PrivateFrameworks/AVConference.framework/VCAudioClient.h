/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioClient : NSObject <VCAudioSessionDelegate> {
    VCAudioIO * _audioIO;
    bool  _isOnHold;
    double  _lastAudioSessionStart;
    bool  _muted;
    int  _processId;
    struct VCAudioClientSettings { 
        bool isValid; 
        bool enableAudioPreWarming; 
        int operatingMode; 
        int deviceRole; 
    }  _requestedSettings;
    struct VCAudioClientSettings { 
        bool isValid; 
        bool enableAudioPreWarming; 
        int operatingMode; 
        int deviceRole; 
    }  _selectedSettings;
    unsigned int  _state;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _stateMutex;
}

@property (nonatomic, retain) VCAudioIO *audioIO;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AVAudioDevice *inputDevice;
@property (nonatomic, readonly) bool isMuted;
@property (nonatomic, retain) AVAudioDevice *outputDevice;
@property (nonatomic, readonly) int processId;
@property (readonly) Class superclass;

- (id)audioIO;
- (void)dealloc;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (id)getCurrentAudioDeviceWithType:(bool)arg1;
- (id)initWithProcessId:(int)arg1;
- (id)inputDevice;
- (bool)isMuted;
- (void)lock;
- (bool)muteWithError:(id*)arg1;
- (id)outputDevice;
- (int)processId;
- (bool)resetAudioSessionOutputPortOverride:(id*)arg1;
- (void)setAudioIO:(id)arg1;
- (void)setAudioSessionProperties:(id)arg1;
- (bool)setCurrentAudioDevice:(id)arg1 type:(bool)arg2;
- (void)setInputDevice:(id)arg1;
- (void)setOutputDevice:(id)arg1;
- (void)startAudioIOWithCompletionHandler:(id /* block */)arg1;
- (bool)startAudioSessionWithError:(id*)arg1;
- (bool)startWithError:(id*)arg1;
- (void)stopAudioIOWithCompletionHandler:(id /* block */)arg1;
- (bool)stopAudioSessionWithError:(id*)arg1;
- (bool)stopWithError:(id*)arg1;
- (void)unlock;
- (bool)unmuteWithError:(id*)arg1;

@end
