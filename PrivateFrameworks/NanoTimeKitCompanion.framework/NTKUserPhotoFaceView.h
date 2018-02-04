/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUserPhotoFaceView : NTKBasePhotoFaceView {
    unsigned long long  _currentAnalysisOperationID;
    bool  _irisIndicatorActive;
    bool  _isAnalysisOperationInProgress;
    bool  _isContentLoaded;
    bool  _showingGrid;
}

@property (getter=isIrisIndicatorActive, nonatomic) bool irisIndicatorActive;
@property (getter=isShowingGrid, nonatomic) bool showingGrid;

+ (id)_analysisQ;

- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (double)_backgroundImageAlphaForEditMode:(long long)arg1;
- (bool)_canOperationProceed:(unsigned long long)arg1;
- (void)_cleanupAfterEditing;
- (void)_configureForEditMode:(long long)arg1;
- (void)_loadSnapshotContentViews;
- (void)_operationIsDone;
- (bool)_preloadNextPhoto;
- (void)_setContentBreathingScale:(double)arg1;
- (double)_timeLabelAlphaForEditMode:(long long)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_updateContents;
- (void)_updateDateAttributesAnimated:(bool)arg1;
- (void)_updateForResourceDirectoryChange:(id)arg1;
- (void)_updateImageToBlur;
- (void)_updateNoPhotosState;
- (id)customEditingViewController;
- (bool)isIrisIndicatorActive;
- (bool)isShowingGrid;
- (void)setIrisIndicatorActive:(bool)arg1;
- (void)setShowingGrid:(bool)arg1;

@end
