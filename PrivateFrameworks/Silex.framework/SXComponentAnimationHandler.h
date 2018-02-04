/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentAnimationHandler : NSObject {
    SXComponentAnimation * _animation;
    SXComponentView * _component;
    double  _factor;
    long long  _state;
}

@property (nonatomic, readonly) SXComponentAnimation *animation;
@property (nonatomic, readonly) SXComponentView *component;
@property (nonatomic, readonly) double factor;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)animation;
- (bool)animationShouldRepeat;
- (id)component;
- (id)componentViewToAnimate;
- (double)factor;
- (double)factorForVisibileBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andAbsoluteComponentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)finishAnimation;
- (id)initWithComponent:(id)arg1 withAnimation:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)prepareAnimation;
- (double)screenHeightStartOffset;
- (void)setState:(long long)arg1;
- (bool)shouldFinishAtEndOfScrollView;
- (void)startAnimation;
- (long long)state;
- (void)updateAnimationWithFactor:(double)arg1;

@end
