/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXSpringyComponentBehaviorHandler : SXComponentBehaviorHandler {
    double  _damping;
    double  _delta;
    UIDynamicAnimator * _dynamicAnimator;
    UIAttachmentBehavior * _dynamicBehavior;
    double  _frequency;
    double  _lastYOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalCenter;
}

@property (nonatomic, readonly) double damping;
@property (nonatomic, readonly) double delta;
@property (nonatomic, retain) UIDynamicAnimator *dynamicAnimator;
@property (nonatomic, retain) UIAttachmentBehavior *dynamicBehavior;
@property (nonatomic, readonly) double frequency;
@property (nonatomic) double lastYOffset;
@property (nonatomic) struct CGPoint { double x1; double x2; } originalCenter;

- (void).cxx_destruct;
- (double)damping;
- (void)dealloc;
- (double)delta;
- (void)destroyWithBehaviorController:(id)arg1;
- (id)dynamicAnimator;
- (id)dynamicBehavior;
- (double)frequency;
- (id)initWithComponentView:(id)arg1 withBehavior:(id)arg2;
- (double)lastYOffset;
- (struct CGPoint { double x1; double x2; })originalCenter;
- (void)setDynamicAnimator:(id)arg1;
- (void)setDynamicBehavior:(id)arg1;
- (void)setLastYOffset:(double)arg1;
- (void)setOriginalCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setupWithBehaviorController:(id)arg1;
- (void)updateWithBehaviorController:(id)arg1;

@end
