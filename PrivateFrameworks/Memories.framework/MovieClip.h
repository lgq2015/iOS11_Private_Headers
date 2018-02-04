/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MovieClip : KonaClip

+ (bool)audioEnabledByDefault;
+ (id)movieClipWithURL:(id)arg1;
+ (id)movieClipWithURL:(id)arg1 avAsset:(id)arg2;

- (double)aspectRatio;
- (void)clearFreezeFrame;
- (int)clipType;
- (bool)hasAudioCharacteristic;
- (bool)hasVisualCharacteristic;
- (void)initializeFromURL:(id)arg1 asset:(id)arg2;
- (bool)isFreezeFrame;
- (int)rawSourceDuration;
- (float)speed;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform:(struct CGSize { double x1; double x2; })arg1 fillDest:(bool)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform:(struct CGSize { double x1; double x2; })arg1 fillDest:(bool)arg2 applyAnamorphic:(bool)arg3;

@end
