/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAttentionAwarenessEffectProcessor : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _accessQueueLabel;
    AVAudioPCMBuffer * _destinationPCMBuffer;
    NSObject<OS_dispatch_source> * _effectMixFadingTimer;
    struct { 
        bool shouldBypassLowPassFilter; 
        float volumeForLowPassFilterGlobalGain; 
        float effectMix; 
    }  _effectParameters;
    AVAudioEngine * _engine;
    AVAudioInputNode * _inputNode;
    struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; } * _inputNodeInputBufferList;
    AVAudioUnitEQ * _lowPassFilter;
    AVAudioUnitReverb * _reverb;
}

@property (nonatomic) struct { bool x1; float x2; float x3; } effectParameters;

- (void).cxx_destruct;
- (void)_applyEffectMix:(float)arg1;
- (void)_applyEffectParameters:(struct { bool x1; float x2; float x3; })arg1 includingEffectMix:(bool)arg2;
- (void)_assertNotRunningOnAccessQueue;
- (void)_assertRunningOnAccessQueue;
- (float)_currentEffectMix;
- (float)_sanitizeEffectMix:(float)arg1;
- (struct { bool x1; float x2; float x3; })effectParameters;
- (id)initWithProcessingFormat:(id)arg1 framesPerRender:(unsigned int)arg2 effectParameters:(struct { bool x1; float x2; float x3; })arg3;
- (struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)render:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1 numberOfFrames:(unsigned int)arg2;
- (void)setEffectParameters:(struct { bool x1; float x2; float x3; })arg1;
- (void)setEffectParameters:(struct { bool x1; float x2; float x3; })arg1 effectMixFadeDuration:(double)arg2;
- (bool)start;
- (void)stop;

@end
