/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentAnimationController : NSObject <SXViewportChangeListener> {
    NSMutableSet * _animatingComponents;
    NSMutableSet * _animationHandlersToFinish;
    CADisplayLink * _displayLink;
    NSMutableSet * _registeredComponents;
    SXViewport * _viewport;
}

@property (nonatomic, retain) NSMutableSet *animatingComponents;
@property (nonatomic, readonly) NSMutableSet *animationHandlersToFinish;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CADisplayLink *displayLink;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *registeredComponents;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXViewport *viewport;

- (void).cxx_destruct;
- (id)animatingComponents;
- (id)animatingHandlerForComponent:(id)arg1;
- (id)animationHandlersToFinish;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectForComponent:(id)arg1;
- (id)displayLink;
- (void)displayLinkTick:(id)arg1;
- (void)finishAnimationHandlerAnimated:(id)arg1;
- (id)initWithViewport:(id)arg1;
- (void)registerComponentView:(id)arg1 animation:(id)arg2;
- (id)registeredComponents;
- (id)registeredHandlerForComponent:(id)arg1;
- (void)setAnimatingComponents:(id)arg1;
- (void)setRegisteredComponents:(id)arg1;
- (void)startOrStopDisplayLink;
- (void)startUpdatingAnimationForComponentView:(id)arg1;
- (void)stopUpdatingAnimationForComponentView:(id)arg1;
- (void)stopUpdatingAnimationForComponentView:(id)arg1 finishAnimation:(bool)arg2;
- (void)unregisterComponentView:(id)arg1;
- (void)updateVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateVisibleBoundsIfNeeded;
- (id)viewport;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)viewport:(id)arg1 documentSizeDidChangeFromSize:(struct CGSize { double x1; double x2; })arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
