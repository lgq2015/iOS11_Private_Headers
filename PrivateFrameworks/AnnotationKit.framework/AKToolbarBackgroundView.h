/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKToolbarBackgroundView : UIView {
    long long  _blurStyle;
    UIColor * _separatorColor;
    UIView * _separatorLine;
    bool  _translucent;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic) long long blurStyle;
@property (nonatomic, retain) UIColor *separatorColor;
@property (nonatomic, retain) UIView *separatorLine;
@property (getter=isTranslucent, nonatomic) bool translucent;

- (void).cxx_destruct;
- (void)_hostSeparatorInView:(id)arg1;
- (long long)blurStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTranslucent;
- (id)separatorColor;
- (id)separatorLine;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setBlurStyle:(long long)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setSeparatorLine:(id)arg1;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;
- (void)setTranslucent:(bool)arg1;
- (void)updateSeparatorVisibility;

@end
