/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVBackdropView : AVView {
    long long  _axis;
    AVStackView * _contentView;
    UIView * _secondaryMaterialOverlayView;
    NSArray * _secondaryMaterialOverlayViewConstraints;
    unsigned long long  _shapeStyle;
    UIView * _targetViewForSecondaryMaterialOverlay;
    NSArray * _temporaryArrangedSubviews;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, readonly) long long axis;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } contentLayoutMargins;
@property (nonatomic, readonly) AVStackView *contentView;
@property (nonatomic, retain) UIView *secondaryMaterialOverlayView;
@property (nonatomic, retain) NSArray *secondaryMaterialOverlayViewConstraints;
@property (nonatomic) unsigned long long shapeStyle;
@property (nonatomic, retain) UIView *targetViewForSecondaryMaterialOverlay;
@property (nonatomic, readonly) UIVisualEffectView *visualEffectView;

+ (void)applyBaseTrackTintToView:(id)arg1;
+ (void)applyCompletedTrackTintToView:(id)arg1;
+ (void)applyLoadedTrackTintToView:(id)arg1;
+ (void)applyPlusLFilterToView:(id)arg1;
+ (void)applyPrimaryGlyphTintToView:(id)arg1;
+ (void)applySecondaryGlyphTintToView:(id)arg1;
+ (void)configureSlider:(id)arg1 thumbView:(id)arg2 loadedTrackView:(id)arg3;
+ (void)configureView:(id)arg1 forTintEffectWithColor:(id)arg2 filterType:(id)arg3;
+ (void)configureView:(id)arg1 withBackgroundFillOfColor:(id)arg2 opacity:(double)arg3 filter:(id)arg4;
+ (void)removeAllFiltersFromView:(id)arg1;
+ (id)secondaryMaterialOverlayView;

- (void).cxx_destruct;
- (void)_ensureContentView;
- (void)_updateTransparencyOfVisualEffectView;
- (long long)axis;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentLayoutMargins;
- (id)contentView;
- (void)dealloc;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)secondaryMaterialOverlayView;
- (id)secondaryMaterialOverlayViewConstraints;
- (void)setArrangedSubviews:(id)arg1 axis:(long long)arg2;
- (void)setContentLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCustomSpacing:(double)arg1 afterView:(id)arg2;
- (void)setCustomSpacing:(double)arg1 afterViews:(id)arg2;
- (void)setHitRectInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSecondaryMaterialOverlayView:(id)arg1;
- (void)setSecondaryMaterialOverlayViewConstraints:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShapeStyle:(unsigned long long)arg1;
- (void)setTargetViewForSecondaryMaterialOverlay:(id)arg1;
- (unsigned long long)shapeStyle;
- (id)targetViewForSecondaryMaterialOverlay;
- (void)updateConstraints;
- (id)visualEffectView;

@end
