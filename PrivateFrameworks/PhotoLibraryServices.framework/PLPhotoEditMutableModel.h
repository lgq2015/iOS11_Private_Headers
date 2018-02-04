/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEditMutableModel : PLPhotoEditModel {
    _UIDynamicValueAnimation * _currentCopyAnimation;
    PLPhotoEditModel * _modelBeforeChanges;
    long long  _transactionDepth;
}

@property (getter=isAutoCropped, nonatomic) bool autoCropped;
@property (getter=isAutoLoopEnabled, nonatomic) bool autoLoopEnabled;
@property (nonatomic, copy) NSString *autoLoopFlavor;
@property (nonatomic, copy) NSDictionary *autoLoopRecipe;
@property (nonatomic, copy) NSArray *autoRedEyeCorrections;
@property (nonatomic, copy) NSString *autoSmartColorIdentifier;
@property (nonatomic) double autoSmartColorLevel;
@property (nonatomic, copy) NSString *autoSmartToneIdentifier;
@property (nonatomic) double autoSmartToneLevel;
@property (nonatomic, copy) NSString *autoWhiteBalanceIdentifier;
@property (nonatomic, copy) NSDictionary *autoWhiteBalanceSettings;
@property (nonatomic) double blackPointLevelOffset;
@property (nonatomic) double brightnessLevelOffset;
@property (nonatomic) double bwGrainLevelOffset;
@property (nonatomic) double bwHueLevelOffset;
@property (nonatomic) double bwNeutralGammaLevelOffset;
@property (nonatomic) double bwStrengthLevelOffset;
@property (nonatomic) double bwToneLevelOffset;
@property (nonatomic) double colorCastLevelOffset;
@property (nonatomic) double colorContrastLevelOffset;
@property (nonatomic) double colorVibrancyLevelOffset;
@property (nonatomic) double contrastLevelOffset;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (getter=isDepthEffectEnabled, nonatomic) bool depthEffectEnabled;
@property (nonatomic, copy) NSDictionary *depthEffectSettings;
@property (nonatomic, copy) NSString *effectFilterName;
@property (nonatomic) long long effectFilterVersion;
@property (nonatomic) double exposureLevelOffset;
@property (getter=isFusionEnabled, nonatomic) bool fusionEnabled;
@property (nonatomic, copy) NSDictionary *fusionParameters;
@property (nonatomic) double highlightsLevelOffset;
@property (nonatomic) long long inputOrientation;
@property (nonatomic) struct CGSize { double x1; double x2; } inputSize;
@property (nonatomic, copy) NSArray *legacyAutoEnhanceFilters;
@property (nonatomic) bool legacyAutoEnhanceIsOn;
@property (nonatomic) double localLightLevelOffset;
@property (nonatomic, retain) NSNumber *muted;
@property (getter=isPortraitEffectEnabled, nonatomic) bool portraitEffectEnabled;
@property (nonatomic, copy) NSString *portraitEffectFilterName;
@property (nonatomic) long long portraitEffectFilterVersion;
@property (nonatomic, copy) NSDictionary *portraitEffectSettings;
@property (nonatomic, copy) NSArray *redEyeCorrections;
@property (nonatomic) double shadowsLevelOffset;
@property (getter=isSmartBWEnabled, nonatomic) bool smartBWEnabled;
@property (nonatomic) double smartBWLevel;
@property (nonatomic, copy) NSDictionary *smartBWStatistics;
@property (getter=isSmartColorEnabled, nonatomic) bool smartColorEnabled;
@property (nonatomic) double smartColorLevel;
@property (nonatomic, copy) NSDictionary *smartColorStatistics;
@property (getter=isSmartToneEnabled, nonatomic) bool smartToneEnabled;
@property (nonatomic) double smartToneLevel;
@property (nonatomic, copy) NSDictionary *smartToneStatistics;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } stillPhotoTime;
@property (nonatomic) double straightenAngleRadiansCW;
@property (getter=isTrimEnabled, nonatomic) bool trimEnabled;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } trimEndTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } trimStartTime;
@property (nonatomic) long long userOrientation;
@property (getter=isWhiteBalanceEnabled, nonatomic) bool whiteBalanceEnabled;
@property (nonatomic) double whiteBalanceFaceI;
@property (nonatomic) double whiteBalanceFaceQ;
@property (nonatomic) double whiteBalanceFaceStrength;
@property (nonatomic) double whiteBalanceFaceWarmth;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (void).cxx_destruct;
- (id)_newModelChangeAnimation;
- (void)_setLevelInstanceVariable:(double*)arg1 toValue:(double)arg2;
- (void)addRedEyeCorrections:(id)arg1;
- (bool)canRenderPortraitEffect;
- (void)copyValuesFromModel:(id)arg1 animated:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)performChangesWithBlock:(id /* block */)arg1;
- (void)removeRedEyeCorrections:(id)arg1;
- (void)setAutoCropped:(bool)arg1;
- (void)setAutoLoopEnabled:(bool)arg1;
- (void)setAutoLoopFlavor:(id)arg1;
- (void)setAutoLoopRecipe:(id)arg1;
- (void)setAutoRedEyeCorrections:(id)arg1;
- (void)setAutoSmartColorIdentifier:(id)arg1;
- (void)setAutoSmartColorLevel:(double)arg1;
- (void)setAutoSmartToneIdentifier:(id)arg1;
- (void)setAutoSmartToneLevel:(double)arg1;
- (void)setAutoWhiteBalanceIdentifier:(id)arg1;
- (void)setAutoWhiteBalanceSettings:(id)arg1;
- (void)setBlackPointLevelOffset:(double)arg1;
- (void)setBrightnessLevelOffset:(double)arg1;
- (void)setBwGrainLevelOffset:(double)arg1;
- (void)setBwHueLevelOffset:(double)arg1;
- (void)setBwNeutralGammaLevelOffset:(double)arg1;
- (void)setBwStrengthLevelOffset:(double)arg1;
- (void)setBwToneLevelOffset:(double)arg1;
- (void)setColorCastLevelOffset:(double)arg1;
- (void)setColorContrastLevelOffset:(double)arg1;
- (void)setColorVibrancyLevelOffset:(double)arg1;
- (void)setContrastLevelOffset:(double)arg1;
- (void)setCropConstraintWidth:(long long)arg1 height:(long long)arg2;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDepthEffectEnabled:(bool)arg1;
- (void)setDepthEffectSettings:(id)arg1;
- (void)setEffectFilterName:(id)arg1;
- (void)setEffectFilterVersion:(long long)arg1;
- (void)setExposureLevelOffset:(double)arg1;
- (void)setFusionEnabled:(bool)arg1;
- (void)setFusionParameters:(id)arg1;
- (void)setHighlightsLevelOffset:(double)arg1;
- (void)setInputOrientation:(long long)arg1;
- (void)setInputSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLegacyAutoEnhanceFilters:(id)arg1;
- (void)setLegacyAutoEnhanceIsOn:(bool)arg1;
- (void)setLocalLightLevelOffset:(double)arg1;
- (void)setMuted:(id)arg1;
- (void)setPortraitEffectEnabled:(bool)arg1;
- (void)setPortraitEffectFilterName:(id)arg1;
- (void)setPortraitEffectFilterVersion:(long long)arg1;
- (void)setPortraitEffectSettings:(id)arg1;
- (void)setRedEyeCorrections:(id)arg1;
- (void)setShadowsLevelOffset:(double)arg1;
- (void)setSmartBWEnabled:(bool)arg1;
- (void)setSmartBWLevel:(double)arg1;
- (void)setSmartBWStatistics:(id)arg1;
- (void)setSmartColorEnabled:(bool)arg1;
- (void)setSmartColorLevel:(double)arg1;
- (void)setSmartColorStatistics:(id)arg1;
- (void)setSmartToneEnabled:(bool)arg1;
- (void)setSmartToneLevel:(double)arg1;
- (void)setSmartToneStatistics:(id)arg1;
- (void)setStillPhotoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setStraightenAngleRadiansCW:(double)arg1;
- (void)setTrimEnabled:(bool)arg1;
- (void)setTrimEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTrimStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setUserOrientation:(long long)arg1;
- (void)setWhiteBalanceEnabled:(bool)arg1;
- (void)setWhiteBalanceFaceI:(double)arg1;
- (void)setWhiteBalanceFaceQ:(double)arg1;
- (void)setWhiteBalanceFaceStrength:(double)arg1;
- (void)setWhiteBalanceFaceWarmth:(double)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void)px_applyAssetVariation:(unsigned int)arg1 withRecipe:(id)arg2;

@end
