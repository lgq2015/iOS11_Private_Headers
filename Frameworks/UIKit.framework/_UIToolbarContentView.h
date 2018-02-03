/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIToolbarContentView : _UIBarContentView {
    NSMapTable * _absorptionTable;
    _UIButtonBar * _buttonBar;
    NSLayoutConstraint * _buttonBarLeadingConstraint;
    NSLayoutConstraint * _buttonBarTopConstraint;
    NSLayoutConstraint * _buttonBarTrailingConstraint;
    bool  _hitTestingExtensionsAreValid;
    double  _standardEdgeSpacing;
    double  _topPadding;
}

@property (nonatomic) double topPadding;

- (void).cxx_destruct;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_appearanceChanged;
- (id)_computeEdgeAbsorptionForItems:(id)arg1;
- (id)_newButtonBarWithItems:(id)arg1;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_updateButtonBarConstraintConstantsForItems:(id)arg1 inView:(id)arg2;
- (void)_updateThreeUpFlagsForItems:(id)arg1;
- (double)absorptionForItem:(id)arg1;
- (long long)barMetrics;
- (double)defaultEdgeSpacing;
- (double)defaultTextPadding;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)layoutMarginsDidChange;
- (void)reloadWithItems:(id)arg1;
- (void)setTopPadding:(double)arg1;
- (void)tintColorDidChange;
- (double)topPadding;
- (void)updateConstraints;
- (void)updateContent;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(bool)arg3;

@end