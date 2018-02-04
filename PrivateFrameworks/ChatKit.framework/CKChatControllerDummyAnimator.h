/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKChatControllerDummyAnimator : NSObject <CAAnimationDelegate, CKImpactEffectAnimationProvider> {
    <CKSendAnimationManager> * _animationDelegate;
    CAEmitterLayer * _dustEmitter;
    NSObject<OS_dispatch_group> * _throwAnimationGroup;
}

@property (nonatomic) <CKSendAnimationManager> *animationDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CAEmitterLayer *dustEmitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *throwAnimationGroup;

- (void).cxx_destruct;
- (void)_beginFocusAnimationWithContext:(id)arg1;
- (void)_beginGentleAnimationWithContext:(id)arg1;
- (void)_beginImpactAnimationWithContext:(id)arg1;
- (void)_beginLoudAnimationsWithContext:(id)arg1;
- (void)_beginThrowAnimationWithContext:(id)arg1;
- (id)animationDelegate;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)beginAnimationWithSendAnimationContext:(id)arg1;
- (id)dustEmitter;
- (void)setAnimationDelegate:(id)arg1;
- (void)setDustEmitter:(id)arg1;
- (void)setThrowAnimationGroup:(id)arg1;
- (void)stopAnimationWithSendAnimationContext:(id)arg1;
- (id)throwAnimationGroup;

@end
