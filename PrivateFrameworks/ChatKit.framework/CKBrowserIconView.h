/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserIconView : UIView {
    bool  _animating;
    double  _animationEndPercentComplete;
    double  _animationStartPercentComplete;
    double  _animationStartTime;
    CADisplayLink * _displayLink;
    UIImage * _iconImage;
    double  _percentComplete;
}

@property (nonatomic) bool animating;
@property (nonatomic) double animationEndPercentComplete;
@property (nonatomic) double animationStartPercentComplete;
@property (nonatomic) double animationStartTime;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic) double percentComplete;

+ (id)_pieImageForPercentComplete:(double)arg1 size:(struct CGSize { double x1; double x2; })arg2 center:(struct CGPoint { double x1; double x2; })arg3 radius:(double)arg4;

- (void).cxx_destruct;
- (void)_onDisplayLink:(id)arg1;
- (bool)animating;
- (double)animationEndPercentComplete;
- (double)animationStartPercentComplete;
- (double)animationStartTime;
- (void)dealloc;
- (id)displayLink;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)iconImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (double)percentComplete;
- (void)setAnimating:(bool)arg1;
- (void)setAnimationEndPercentComplete:(double)arg1;
- (void)setAnimationStartPercentComplete:(double)arg1;
- (void)setAnimationStartTime:(double)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setPercentComplete:(double)arg1;
- (void)setPercentComplete:(double)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
