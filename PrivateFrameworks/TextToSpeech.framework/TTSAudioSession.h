/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSAudioSession : NSObject {
    struct __CFBag { } * _activityBag;
    bool  _audioSessionIsSetUp;
    bool  _bluetoothAllowed;
    struct { 
        long long category; 
        long long activity; 
    }  _cachedState;
    struct { 
        long long category; 
        long long activity; 
    }  _desiredState;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _serverGeneration;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_audioSessionInterrupted:(id)arg1;
- (void)_mediaServicesWereReset:(id)arg1;
- (long long)_nextActivityForActive:(bool)arg1 activity:(long long)arg2 serverActivity:(long long)arg3;
- (long long)_safeServerGeneration;
- (void)_safeSetActive:(bool)arg1 withActivity:(long long)arg2;
- (void)_safeSetBluetoothInputAllowed:(bool)arg1;
- (void)_safeSetCategoryForActivity:(long long)arg1;
- (void)_safeSetupAudioSession;
- (void)_setCategoryForActivity:(long long)arg1;
- (void)_setupAudioSession;
- (void)dealloc;
- (id)init;

@end
