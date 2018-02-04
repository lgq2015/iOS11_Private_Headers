/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKSpriteKitAnalogFaceView : NTKAnalogFaceView {
    NTKAnalogScene * _analogScene;
    UIView * _circleView;
    UIView * _handsView;
    double  _maxZoomingIconDiameter;
    SKView * _sceneHostView;
}

@property (nonatomic, retain) NTKAnalogScene *analogScene;
@property (nonatomic) UIView *circleView;
@property (nonatomic) UIView *handsView;
@property (nonatomic) double maxZoomingIconDiameter;
@property (nonatomic, readonly) UIView *sceneView;
@property (nonatomic) bool shouldRasterizeBackground;

+ (void)_prewarm;

- (void).cxx_destruct;
- (void)_applyDataMode;
- (void)_applyFrozen;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterZoom;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_handleLocaleDidChange;
- (void)_loadContentToReplaceUnadornedSnapshot;
- (void)_loadLiveBackground;
- (void)_loadScene;
- (bool)_needsForegroundContainerView;
- (void)_prepareForEditing;
- (void)_prepareForSnapshotting;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_renderSynchronouslyWithImageQueueDiscard:(bool)arg1;
- (void)_setContentViewsOpaque:(bool)arg1;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (bool)_shouldFreezeSceneForEditMode:(long long)arg1;
- (void)_startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_unloadSnapshotContentViews;
- (bool)_wantsOpportunisticLiveFaceLoading;
- (id)analogScene;
- (id)circleView;
- (id)handsView;
- (double)maxZoomingIconDiameter;
- (id)sceneView;
- (void)setAnalogScene:(id)arg1;
- (void)setCircleView:(id)arg1;
- (void)setEditView:(id)arg1;
- (void)setHandsView:(id)arg1;
- (void)setMaxZoomingIconDiameter:(double)arg1;
- (void)setShouldRasterizeBackground:(bool)arg1;
- (bool)shouldRasterizeBackground;

@end
