/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKChronoScene : NTKAnalogScene {
    SKEffectNode * _chronoMode;
    NSMutableDictionary * _chronoVariantNodes;
    SKNode * _currentMode;
    NSMutableArray * _informationTransitions;
    NTKChronoLowerSubDial * _lowerSubdial;
    NTKChronoPalette * _palette;
    bool  _rasterizeForEditing;
    SKNode * _subdials;
    SKEffectNode * _timeMode;
    unsigned long long  _timeScale;
    SKLabelNode * _timeScaleLabel;
    NTKVariantNode * _timeVariantNode;
    NTKChronoUpperSubDial * _upperSubdial;
}

@property (nonatomic, readonly) SKEffectNode *chronoMode;
@property (nonatomic, retain) NTKChronoLowerSubDial *lowerSubdial;
@property (nonatomic, readonly) NTKChronoPalette *palette;
@property (nonatomic) bool rasterizeForEditing;
@property (nonatomic, readonly) SKEffectNode *timeMode;
@property (nonatomic, readonly) unsigned long long timeScale;
@property (nonatomic, retain) NTKChronoUpperSubDial *upperSubdial;

- (void).cxx_destruct;
- (id)_addChronoVariantWithElements:(id)arg1 forTimeScale:(unsigned long long)arg2;
- (void)_applyPalette:(id)arg1 toVariantNode:(id)arg2;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4;
- (double)_backgroundAlphaForEditMode:(long long)arg1;
- (id)_chronoVariantForTimeScale:(unsigned long long)arg1;
- (void)_cleanupAfterEditing;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (id)_createDensityVariantWitElements:(id)arg1 parent:(id)arg2 hidden:(bool)arg3;
- (bool)_getTicks:(id*)arg1 labels:(id*)arg2 otherNodes:(id*)arg3 fromParentNode:(id)arg4;
- (id)_localizedStringForTimeScaleSeconds:(unsigned long long)arg1;
- (id)_nameFromTimeScale:(unsigned long long)arg1;
- (void)_prepareForEditing;
- (bool)_showTimeForEditMode:(long long)arg1;
- (double)_subdialAlphaForEditMode:(long long)arg1;
- (id)activeVariantNodes;
- (void)applyPalette:(id)arg1 fully:(bool)arg2;
- (void)applyTimeScale:(unsigned long long)arg1;
- (void)applyTransitionFraction:(double)arg1 fromTimeScale:(unsigned long long)arg2 toTimeScale:(unsigned long long)arg3;
- (id)auxiliaryScrubbingObscuredNodes;
- (id)chronoMode;
- (void)ensureTimeScaleTransitionHasCompleted;
- (void)fadeInLowerSubdialAnimated:(bool)arg1;
- (void)fadeOutLowerSubdialAnimated:(bool)arg1;
- (void)fadeTimeScaleLabelWithMode:(id)arg1;
- (void)hideMode:(id)arg1 animate:(bool)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isTimeMode;
- (id)lowerSubdial;
- (id)palette;
- (bool)rasterizeForEditing;
- (id)scrubbingObscuredCollectionNodes;
- (void)setCurrentMode:(id)arg1 animate:(bool)arg2;
- (void)setLowerSubdial:(id)arg1;
- (void)setRasterizeForEditing:(bool)arg1;
- (void)setRegularDeviceLowerDialLabelPositions;
- (void)setRegularDeviceUpperDialLabelPositions:(id)arg1;
- (void)setUpperSubdial:(id)arg1;
- (void)showChronoModeAnimated:(bool)arg1;
- (void)showMode:(id)arg1 animate:(bool)arg2;
- (void)showTimeModeAnimated:(bool)arg1;
- (id)timeMode;
- (unsigned long long)timeScale;
- (double)timeScaleLabelPosition;
- (double)timeScaleLabelPositionFromTimeScale:(unsigned long long)arg1;
- (id)timeScaleName;
- (void)transitionTimeScaleLabelWithFraction:(double)arg1 fromTimeScale:(unsigned long long)arg2 toTimeScale:(unsigned long long)arg3;
- (void)transitionWith:(double)arg1 fromMode30:(id)arg2 toMode6:(id)arg3;
- (void)transitionWith:(double)arg1 fromMode60:(id)arg2 toMode30:(id)arg3;
- (void)transitionWith:(double)arg1 fromMode6:(id)arg2 toMode3:(id)arg3;
- (void)updateTimeScaleLabel;
- (void)updateTimeScaleLabelWithTimeScale:(unsigned long long)arg1;
- (void)updateUpperDial;
- (id)upperSubdial;

@end
