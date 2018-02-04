/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUInteractionProgressApplier : HUApplier <UIInteractionProgressObserver> {
    double  _animationFromProgress;
    double  _animationToProgress;
    bool  _boundProgressValues;
    bool  _completesAtTargetState;
    HUAnimationApplier * _inFlightAnimation;
    UIInteractionProgress * _interactionProgress;
    double  _previousInteractionProgress;
    HUAnimationSettings * _significantProgressChangeAnimationSettings;
    HUAnimationSettings * _transitionAnimationSettings;
    bool  _waitingOnAnimationToComplete;
}

@property (nonatomic) double animationFromProgress;
@property (nonatomic) double animationToProgress;
@property (nonatomic) bool boundProgressValues;
@property (nonatomic) bool completesAtTargetState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUAnimationApplier *inFlightAnimation;
@property (nonatomic, readonly) UIInteractionProgress *interactionProgress;
@property (nonatomic) double previousInteractionProgress;
@property (nonatomic, retain) HUAnimationSettings *significantProgressChangeAnimationSettings;
@property (readonly) Class superclass;
@property (nonatomic, retain) HUAnimationSettings *transitionAnimationSettings;
@property (nonatomic) bool waitingOnAnimationToComplete;

+ (id)applierWithInteractionProgress:(id)arg1;
+ (id)applyInteractionProgress:(id)arg1 withApplier:(id /* block */)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_completeSuccessfullyIfAnimationsComplete;
- (double)_currentInteractionProgress;
- (bool)_interactionProgressChangedSignificantly;
- (void)_updateCurrentProgress;
- (double)animationFromProgress;
- (double)animationToProgress;
- (bool)boundProgressValues;
- (bool)cancel;
- (bool)complete:(bool)arg1;
- (bool)completesAtTargetState;
- (id)inFlightAnimation;
- (id)init;
- (id)initWithInteractionProgress:(id)arg1;
- (id)interactionProgress;
- (void)interactionProgress:(id)arg1 didEnd:(bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (bool)isInteractive;
- (double)previousInteractionProgress;
- (void)setAnimationFromProgress:(double)arg1;
- (void)setAnimationToProgress:(double)arg1;
- (void)setBoundProgressValues:(bool)arg1;
- (void)setCompletesAtTargetState:(bool)arg1;
- (void)setInFlightAnimation:(id)arg1;
- (void)setPreviousInteractionProgress:(double)arg1;
- (void)setSignificantProgressChangeAnimationSettings:(id)arg1;
- (void)setTransitionAnimationSettings:(id)arg1;
- (void)setWaitingOnAnimationToComplete:(bool)arg1;
- (id)significantProgressChangeAnimationSettings;
- (bool)start;
- (id)transitionAnimationSettings;
- (bool)waitingOnAnimationToComplete;

@end
