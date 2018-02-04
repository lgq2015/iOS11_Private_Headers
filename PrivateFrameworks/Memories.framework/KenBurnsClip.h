/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface KenBurnsClip : KonaClip <KonaClipMiroAutoEditAdditions> {
    unsigned long long  _animationStyle;
    bool  _conformToInputAspect;
    PVEffect * _kbGeneratorEffect;
}

@property (nonatomic) unsigned long long animationStyle;
@property (nonatomic) bool conformToInputAspect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PVEffect *kbEffect;
@property (nonatomic, readonly) PVEffect *kbGeneratorEffect;
@property (nonatomic, retain) KenBurnsInfo *kbInfo;
@property (readonly) Class superclass;

+ (id)kenBurnsClipWithAssetRepresentation:(id)arg1;
+ (id)kenBurnsClipWithMovie:(id)arg1;
+ (id)kenBurnsClipWithPath:(id)arg1;
+ (id)kenBurnsClipWithURL:(id)arg1;

- (id)animationEffectID;
- (unsigned long long)animationStyle;
- (double)aspectRatio;
- (double)autoEditLongestDurationWithBlueprint:(id)arg1;
- (double)autoEditShortestDurationWithBlueprint:(id)arg1;
- (double)autoEditShortestIdealDurationWithBlueprint:(id)arg1;
- (int)clipType;
- (bool)conformToInputAspect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)hasPhotoCharacteristic;
- (bool)hasVisualCharacteristic;
- (id)init;
- (bool)isLandscape;
- (bool)isPano;
- (bool)isPortrait;
- (bool)isSquare;
- (bool)isTall;
- (id)kbEffect;
- (id)kbGeneratorEffect;
- (id)kbInfo;
- (double)mediaAspectRatio;
- (double)panoDurationMultiplier;
- (id)plistRepresentationFromProject:(id)arg1;
- (void)setAnimationStyle:(unsigned long long)arg1;
- (void)setConformToInputAspect:(bool)arg1;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (void)setKbInfo:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform:(struct CGSize { double x1; double x2; })arg1 fillDest:(bool)arg2;
- (void)validateEffectRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 inProject:(id)arg2;

@end
