/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAutoEditProjectPolish : NSObject {
    MiroMemory * _activeMemory;
    NSMutableArray * _conversionNeeded;
    MiroAutoEditController * _editController;
    NSMutableArray * _layoutClips;
    MiroAutoEditLogger * _logger;
    MiroAutoEditMultiUpController * _multiController;
    Project * _project;
    MiroAutoEditTransitionController * _transitionsController;
}

@property (nonatomic) MiroMemory *activeMemory;
@property (nonatomic, retain) NSMutableArray *conversionNeeded;
@property (nonatomic) MiroAutoEditController *editController;
@property (nonatomic, retain) NSMutableArray *layoutClips;
@property (nonatomic, retain) MiroAutoEditLogger *logger;
@property (nonatomic, retain) MiroAutoEditMultiUpController *multiController;
@property (nonatomic, retain) Project *project;
@property (nonatomic, retain) MiroAutoEditTransitionController *transitionsController;

- (void).cxx_destruct;
- (id)_everyTitleDEBUG;
- (void)_updateSpeedRampsForClip:(id)arg1 beginningRampDurationSeconds:(double)arg2 endingRampDurationSeconds:(double)arg3;
- (id)activeMemory;
- (void)adjustSlowMotionSpeedRamps;
- (void)adjustVideoPositioningBasedOnMetadata;
- (unsigned long long)allowedBurstStylesFromBlueprint:(id)arg1;
- (void)applyAudioPolish;
- (void)applyAutomaticThemeTitleToClip:(id)arg1 forPoster:(bool)arg2;
- (void)applyBurstEffect;
- (void)applyClipPolish;
- (void)applyIrisEffect;
- (void)applyMultiUpTreatments;
- (void)applyTitleToFirstClip;
- (void)applyTransitions;
- (void)batchConvertCompoundClipsToKenBurnsClips;
- (void)cleanup;
- (void)clearAllStandardClipEffects;
- (bool)clipIsViableZoomToPersonCandidate:(id)arg1;
- (id)conversionNeeded;
- (void)convertSpecialClipTypeToKenBurnsClip:(id)arg1;
- (void)createLayoutClips;
- (void)createTransitionControllerAndPrepare;
- (id)editController;
- (bool)extremeCropAllowed;
- (bool)isPortraitSquareVideo:(id)arg1;
- (id)layoutClips;
- (id)logger;
- (id)multiController;
- (bool)multiOptionIsNotFirstOrLast:(id)arg1;
- (bool)multiUpSupportedForAspect:(int)arg1;
- (void)polishProject;
- (id)project;
- (void)removeIrisStylesFromFirstThreeClips;
- (void)setActiveMemory:(id)arg1;
- (void)setAlternateVideoScaleFactorXPostitionFor:(id)arg1 boundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setConversionNeeded:(id)arg1;
- (void)setEditController:(id)arg1;
- (void)setLayoutClips:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setMultiController:(id)arg1;
- (void)setPrimaryVideoScaleFactorYPostitionFor:(id)arg1 boundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setProject:(id)arg1;
- (void)setTransitionsController:(id)arg1;
- (float)sideScaleOffsetForScaleFactor:(float)arg1;
- (void)stopTrackingLayoutClip:(id)arg1;
- (id)transitionsController;
- (id)turnAssetsIntoLayoutClips:(id)arg1 forClipAtIndex:(long long)arg2;
- (id)videoFramingRangesFor:(id)arg1;

@end
