/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVFocusRedirectView : UIView {
    UIFocusContainerGuide * _containerGuide;
    bool  _containsInertia;
}

@property (nonatomic, readonly) UIFocusContainerGuide *containerGuide;
@property (nonatomic) bool containsInertia;

- (void).cxx_destruct;
- (bool)_containsInertiaSelectionChanges;
- (id)containerGuide;
- (bool)containsInertia;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setContainsInertia:(bool)arg1;

@end
