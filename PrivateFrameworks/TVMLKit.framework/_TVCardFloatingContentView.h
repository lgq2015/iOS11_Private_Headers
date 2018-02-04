/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVCardFloatingContentView : _UIFloatingContentView <TVAuxiliaryViewSelecting, _UIFloatingContentViewDelegate> {
    UIImageView * _bgImageView;
    double  _focusedShadowAlpha;
    UIImage * _focusedShadowImage;
    UIView * _focusedShadowView;
    bool  _isSelected;
    id /* block */  _pressCompletionBlock;
    double  _unfocusedAlpha;
    double  _unfocusedShadowAlpha;
    UIImage * _unfocusedShadowImage;
    UIView * _unfocusedShadowView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double focusedShadowAlpha;
@property (nonatomic, retain) UIImage *focusedShadowImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ pressCompletionBlock;
@property (readonly) Class superclass;
@property (nonatomic) double unfocusedShadowAlpha;
@property (nonatomic, retain) UIImage *unfocusedShadowImage;

- (void).cxx_destruct;
- (void)_setBgImageWithColor:(id)arg1 cornerRadius:(double)arg2;
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (double)focusedShadowAlpha;
- (id)focusedShadowImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (id /* block */)pressCompletionBlock;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })selectionMarginsForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBgColor:(id)arg1 highlightBgColor:(id)arg2 cornerRadius:(double)arg3;
- (void)setFocusedShadowAlpha:(double)arg1;
- (void)setFocusedShadowImage:(id)arg1;
- (void)setPressCompletionBlock:(id /* block */)arg1;
- (void)setPressed:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setSelected:(bool)arg1 animated:(bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)setUnfocusedShadowAlpha:(double)arg1;
- (void)setUnfocusedShadowImage:(id)arg1;
- (double)unfocusedShadowAlpha;
- (id)unfocusedShadowImage;

@end
