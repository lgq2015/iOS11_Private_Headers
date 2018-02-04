/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKImpactEffectManager : NSObject <CKSendAnimationManager> {
    NSString * _animatingIdentifier;
    <CKSendAnimationManagerDelegate> * _delegate;
    CABackdropLayer * _expressiveSendAnimationBackdrop;
    CKBalloonView * _expressiveSendAnimationBalloon;
    UIWindow * _expressiveSendAnimationWindow;
    UIScrollView * _expressiveSendScrollView;
    bool  _isAnimating;
    bool  _isDisabled;
    CKBalloonView * _originalBalloonView;
    <CKSendAnimationBalloonProvider> * sendAnimationBalloonProvider;
    <CKSendAnimationManagerDelegate> * sendAnimationManagerDelegate;
}

@property (nonatomic, readonly) NSString *animatingIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKSendAnimationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CABackdropLayer *expressiveSendAnimationBackdrop;
@property (nonatomic, retain) CKBalloonView *expressiveSendAnimationBalloon;
@property (nonatomic, retain) UIWindow *expressiveSendAnimationWindow;
@property (nonatomic, retain) UIScrollView *expressiveSendScrollView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAnimating;
@property (nonatomic) bool isDisabled;
@property (nonatomic, retain) CKBalloonView *originalBalloonView;
@property (nonatomic) <CKSendAnimationBalloonProvider> *sendAnimationBalloonProvider;
@property (nonatomic) <CKSendAnimationManagerDelegate> *sendAnimationManagerDelegate;
@property (readonly) Class superclass;

+ (bool)identifierIsAnimatedImpactEffect:(id)arg1;
+ (bool)identifierIsValidImpactEffect:(id)arg1;
+ (bool)identifierShouldPlayInWindow:(id)arg1;
+ (id)maskingStringForID:(id)arg1;

- (void).cxx_destruct;
- (void)_animateLastMessage:(id)arg1;
- (void)_cleanupExpressiveSendComponents;
- (id)_sendAnimationContextForIdentifier:(id)arg1 message:(id)arg2 isSender:(bool)arg3;
- (void)_sizeAnimationWindow;
- (void)_visibleCells:(id*)arg1 aboveItem:(id)arg2;
- (void)animateMessages:(id)arg1;
- (id)animatingIdentifier;
- (void)animationDidFinishWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)cloneBalloonForAnimationWithChatItem:(id)arg1;
- (id)delegate;
- (id)expressiveSendAnimationBackdrop;
- (id)expressiveSendAnimationBalloon;
- (id)expressiveSendAnimationWindow;
- (id)expressiveSendScrollView;
- (id)init;
- (bool)isAnimating;
- (bool)isDisabled;
- (void)matchScrollViewOffset:(id)arg1;
- (id)originalBalloonView;
- (id)sendAnimationBalloonProvider;
- (id)sendAnimationManagerDelegate;
- (void)setDelegate:(id)arg1;
- (void)setExpressiveSendAnimationBackdrop:(id)arg1;
- (void)setExpressiveSendAnimationBalloon:(id)arg1;
- (void)setExpressiveSendAnimationWindow:(id)arg1;
- (void)setExpressiveSendScrollView:(id)arg1;
- (void)setIsAnimating:(bool)arg1;
- (void)setIsDisabled:(bool)arg1;
- (void)setOriginalBalloonView:(id)arg1;
- (void)setSendAnimationBalloonProvider:(id)arg1;
- (void)setSendAnimationManagerDelegate:(id)arg1;
- (void)stopAllEffects;

@end
