/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAnalogFaceView : NTKFaceView {
    bool  __contentViewsOpaque;
    bool  __timeViewBehindContentView;
    UIView * _borrowedCircleView;
    UIView * _borrowedHandsView;
    UIView * _contentView;
    double  _maxZoomingIconDiameter;
    UIView * _zoomingClippingView;
}

@property (getter=_contentViewsAreOpaque, setter=_setContentViewsOpaque:, nonatomic) bool _contentViewsOpaque;
@property (setter=_setTimeViewBehindContentView:, nonatomic) bool _timeViewBehindContentView;
@property (nonatomic) UIView *borrowedCircleView;
@property (nonatomic) UIView *borrowedHandsView;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) double maxZoomingIconDiameter;
@property (nonatomic, retain) NTKAnalogHandsView *timeView;
@property (nonatomic, retain) UIView *zoomingClippingView;

+ (void)_prewarm;
+ (Class)_timeViewClass;

- (void).cxx_destruct;
- (void)_applyDataMode;
- (void)_applyShowContentForUnadornedSnapshot;
- (long long)_backgroundedTimeViewEditModes;
- (void)_bringForegroundViewsToFront;
- (bool)_canStartTimeScrubbing;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterZoom;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureReusableTimeView:(id)arg1;
- (struct CGPoint { double x1; double x2; })_contentCenterOffset;
- (bool)_contentViewsAreOpaque;
- (struct CGPoint { double x1; double x2; })_dateComplicationCenterOffset;
- (struct CGPoint { double x1; double x2; })_dateComplicationRightAlignment;
- (void)_endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_handleLocaleDidChange;
- (void)_loadContentToReplaceUnadornedSnapshot;
- (void)_loadSnapshotContentViews;
- (bool)_needsForegroundContainerView;
- (void)_prepareForEditing;
- (void)_prepareTimeViewForReuse:(id)arg1;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_reuseTimeView;
- (void)_scrubToDate:(id)arg1 animated:(bool)arg2;
- (void)_setContentViewsOpaque:(bool)arg1;
- (void)_setTimeViewBehindContentView:(bool)arg1;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (bool)_shouldRasterizeForegroundContainerViewForEditMode:(long long)arg1;
- (void)_startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)_supportsTimeScrubbing;
- (id)_timeTravelCaptionFontSizeOverrides;
- (double)_timeTravelCaptionLabelMaxWidth;
- (bool)_timeViewBehindContentForEditMode:(long long)arg1;
- (bool)_timeViewBehindContentView;
- (void)_unloadSnapshotContentViews;
- (void)_updateDateComplicationPositionIfNecessary;
- (bool)_usesCustomZoom;
- (void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2;
- (id)borrowedCircleView;
- (id)borrowedHandsView;
- (id)contentView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)maxZoomingIconDiameter;
- (void)setBorrowedCircleView:(id)arg1;
- (void)setBorrowedHandsView:(id)arg1;
- (void)setMaxZoomingIconDiameter:(double)arg1;
- (void)setZoomingClippingView:(id)arg1;
- (id)zoomingClippingView;

@end
