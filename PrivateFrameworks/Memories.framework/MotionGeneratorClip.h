/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MotionGeneratorClip : KonaClip {
    PVEffect * _generatorEffect;
}

@property (nonatomic, retain) PVEffect *generatorEffect;

- (void).cxx_destruct;
- (int)clipType;
- (id)generatorEffect;
- (bool)hasAudioCharacteristic;
- (bool)hasVisualCharacteristic;
- (bool)isFreezeFrame;
- (int)maxDuration;
- (id)plistRepresentationFromProject:(id)arg1;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (void)setGeneratorEffect:(id)arg1;
- (void)validateEffectRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 inProject:(id)arg2;

@end
