/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADCircularCountdownView : UIView {
    UIColor * _animationBackgroundColor;
    double  _animationBackgroundLineWidth;
    UIColor * _animationColor;
    double  _animationLineWidth;
    CAShapeLayer * _backgroundLayer;
    CAShapeLayer * _progressLayer;
}

@property (nonatomic, retain) UIColor *animationBackgroundColor;
@property (nonatomic) double animationBackgroundLineWidth;
@property (nonatomic, retain) UIColor *animationColor;
@property (nonatomic) double animationLineWidth;
@property (nonatomic, retain) CAShapeLayer *backgroundLayer;
@property (nonatomic) double countdownProgress;
@property (nonatomic, retain) CAShapeLayer *progressLayer;

- (id)animationBackgroundColor;
- (double)animationBackgroundLineWidth;
- (id)animationColor;
- (double)animationLineWidth;
- (id)backgroundLayer;
- (double)countdownProgress;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)progressLayer;
- (void)setAnimationBackgroundColor:(id)arg1;
- (void)setAnimationBackgroundLineWidth:(double)arg1;
- (void)setAnimationColor:(id)arg1;
- (void)setAnimationLineWidth:(double)arg1;
- (void)setBackgroundLayer:(id)arg1;
- (void)setCountdownProgress:(double)arg1;
- (void)setProgressLayer:(id)arg1;
- (void)startCountdownAnimationWithDuration:(double)arg1 completionHandler:(id /* block */)arg2;

@end
