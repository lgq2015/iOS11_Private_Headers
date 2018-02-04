/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKModuleView : UIControl <NTKContainerViewLayoutDelegate, NTKControl> {
    NTKFaceColorScheme * _colorScheme;
    double  _contentHeight;
    double  _contentHeightOffset;
    NTKContainerView * _contentView;
    UIColor * _foregroundColor;
    double  _highlightAlpha;
    UIColor * _highlightBackgroundColor;
    double  _highlightCornerRadius;
    UIView * _highlightView;
    UIColor * _overrideColor;
    UIColor * _secondaryForegroundColor;
}

@property (nonatomic, retain) NTKFaceColorScheme *colorScheme;
@property (nonatomic) double contentHeight;
@property (nonatomic) double contentHeightOffset;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (readonly) unsigned long long hash;
@property (nonatomic) double highlightAlpha;
@property (nonatomic, retain) UIColor *highlightBackgroundColor;
@property (nonatomic) double highlightCornerRadius;
@property (nonatomic, retain) UIColor *overrideColor;
@property (nonatomic, retain) UIColor *secondaryForegroundColor;
@property (readonly) Class superclass;

+ (double)cornerRadius;

- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_layoutContentView;
- (void)_updateColors;
- (void)applyColorScheme:(id)arg1;
- (void)applyFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5;
- (id)colorScheme;
- (double)contentHeight;
- (double)contentHeightOffset;
- (id)contentView;
- (id)foregroundColor;
- (double)highlightAlpha;
- (id)highlightBackgroundColor;
- (double)highlightCornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutContainerView:(id)arg1;
- (void)layoutSubviews;
- (void)naturalHorizontalLayoutForViewsAndSpacing:(id)arg1 columnAlignmentSpacing:(bool)arg2;
- (id)overrideColor;
- (id)secondaryForegroundColor;
- (void)setColorScheme:(id)arg1;
- (void)setContentHeight:(double)arg1;
- (void)setContentHeightOffset:(double)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setHighlightAlpha:(double)arg1;
- (void)setHighlightBackgroundColor:(id)arg1;
- (void)setHighlightCornerRadius:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setOverrideColor:(id)arg1;
- (void)setSecondaryForegroundColor:(id)arg1;
- (bool)shouldCancelTouchesInScrollview;
- (id)viewsAndSpacingArrayForSpace:(double)arg1 view:(id)arg2;
- (id)viewsAndSpacingArrayForSpace:(double)arg1 view:(id)arg2 space:(double)arg3 view:(id)arg4;

@end
