/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVProgressView : UIView {
    UIColor * _completeTintColor;
    double  _cornerRadius;
    UIVisualEffectView * _materialView;
    double  _progress;
    _TVProgressBarView * _progressBarView;
    UIColor * _progressTintColor;
    UIImageView * _shadowImageView;
    long long  _style;
    bool  _useMaterial;
}

@property (nonatomic, retain) UIColor *completeTintColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double progress;
@property (nonatomic, retain) UIColor *progressTintColor;
@property (nonatomic, retain) UIImageView *shadowImageView;
@property (nonatomic) long long style;
@property (nonatomic) bool useMaterial;

- (void).cxx_destruct;
- (id)_maskImageForProgressBar;
- (void)_updateForStyleChange;
- (id)completeTintColor;
- (double)cornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)progress;
- (id)progressTintColor;
- (void)setCompleteTintColor:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressTintColor:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setShadowImageView:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setUseMaterial:(bool)arg1;
- (id)shadowImageView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (bool)useMaterial;

@end
