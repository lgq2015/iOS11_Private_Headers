/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKKaleidoscopeFaceView : NTKAnalogFaceView <CLKUIQuadViewDelegate, CLKUIResourceProviderDelegate> {
    UIColor * _complicationColor;
    UIColor * _complicationPlatterColor;
    double  _contentScale;
    double  _crownOffset;
    float  _crownTurnsPerRotation;
    unsigned long long  _currentAsset;
    unsigned long long  _currentStyle;
    double  _dayDuration;
    struct CGColorSpace { } * _extendedSRGBcolorSpace;
    unsigned int  _frameCounter;
    double  _lastComplicationUpdateTime;
    NTKFaceLayoutContentProvider * _layoutContentProvider;
    NTKKaleidoscopePathfinder * _pathfinder;
    CLKUIQuadView * _quadView;
    UIImage * _userImage;
    NTKKaleidoscopePathfinder * _userPathfinder;
    NTKPhoto * _userPhoto;
    UIImage * _userSwatch;
    CLKUITexture * _userTexture;
}

@property (nonatomic) unsigned long long currentAsset;
@property (nonatomic) unsigned long long currentStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1;

- (void).cxx_destruct;
- (void)_applyDataMode;
- (void)_applyFrozen;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterTransitionComplicationSlot:(id)arg1;
- (double)_complicationAlphaForEditMode:(long long)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureReusableTimeView:(id)arg1;
- (double)_contentAlphaForEditMode:(long long)arg1;
- (struct CGPoint { double x1; double x2; })_contentCenterOffset;
- (double)_contentScaleForEditMode:(long long)arg1;
- (float)_crownTurnsForStyle:(unsigned long long)arg1;
- (void)_disableCrown;
- (double)_handAlphaForEditMode:(long long)arg1;
- (double)_idealizedOffsetPercentageForAsset:(unsigned long long)arg1;
- (id)_imageForAsset:(unsigned long long)arg1;
- (double)_kaleidoscopeTimeForAsset:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_loadCurrentQuad;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (id)_pathfinderForAsset:(unsigned long long)arg1;
- (void)_prepareForEditing;
- (id)_quadWithStyle:(unsigned long long)arg1 asset:(unsigned long long)arg2;
- (void)_renderSynchronouslyWithImageQueueDiscard:(bool)arg1;
- (id)_snapshotWithAsset:(unsigned long long)arg1 style:(unsigned long long)arg2;
- (bool)_supportsUnadornedSnapshot;
- (id)_swatchForAsset:(unsigned long long)arg1;
- (id)_swatchFromUserImage;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (id)_textureForAsset:(unsigned long long)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_updateComplications;
- (void)_updateDayDuration;
- (void)_updateForResourceDirectoryChange:(id)arg1;
- (id)_updatePathForQuadView:(id)arg1 time:(double)arg2 crownOffset:(double)arg3;
- (void)_updatePathForTime:(double)arg1;
- (void)_updateRotationForQuadView:(id)arg1 time:(double)arg2 crownOffset:(double)arg3;
- (void)_updateUserContent;
- (void)_updateWithAsset:(unsigned long long)arg1;
- (double)_verticalPaddingForStatusBar;
- (void)addResourceUuidsToKeep:(id)arg1;
- (unsigned long long)currentAsset;
- (unsigned long long)currentStyle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)provideTextureBacking:(id)arg1;
- (void)quadViewWillDisplay:(id)arg1 forTime:(double)arg2;
- (void)setCurrentAsset:(unsigned long long)arg1;
- (void)setCurrentStyle:(unsigned long long)arg1;

@end
