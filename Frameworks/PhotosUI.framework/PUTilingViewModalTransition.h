/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTilingViewModalTransition : PUModalTransition <PUTilingViewControllerTransition> {
    PUTilingViewTransitionHelper * __tilingViewTransitionHelper;
}

@property (nonatomic, readonly) PUTilingViewTransitionHelper *_tilingViewTransitionHelper;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isTransitionPaused, nonatomic, readonly) bool transitionPaused;

- (void).cxx_destruct;
- (void)_animateTransitionWithOperation:(long long)arg1;
- (id)_tilingViewTransitionHelper;
- (void)animateDismissTransition;
- (void)animatePresentTransition;
- (bool)hasStarted;
- (id)init;
- (bool)isInteractive;
- (bool)isTransitionPaused;
- (void)pauseTransition;
- (void)pauseTransitionWithOptions:(unsigned long long)arg1;
- (void)resumeTransition:(bool)arg1;
- (void)updatePausedTransitionWithProgress:(double)arg1 interactionProgress:(double)arg2;

@end
