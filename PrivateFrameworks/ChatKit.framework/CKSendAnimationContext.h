/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSendAnimationContext : NSObject <CKSendAnimationContext> {
    NSArray * _animatableTextViews;
    NSArray * _animatableViews;
    CABackdropLayer * _backdropLayer;
    UIView * _containerView;
    NSArray * _framesOfAddedChatItems;
    NSString * _impactIdentifier;
    bool  _isSender;
    NSArray * _messages;
    bool  _shouldRepeat;
    NSArray * _throwBalloonViewAttributesCollection;
    NSArray * _throwBalloonViews;
}

@property (nonatomic, copy) NSArray *animatableTextViews;
@property (nonatomic, copy) NSArray *animatableViews;
@property (nonatomic, retain) CABackdropLayer *backdropLayer;
@property (nonatomic, retain) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *framesOfAddedChatItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *impactIdentifier;
@property (nonatomic) bool isSender;
@property (nonatomic, retain) NSArray *messages;
@property (nonatomic) bool shouldRepeat;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *throwBalloonViewAttributesCollection;
@property (nonatomic, copy) NSArray *throwBalloonViews;

- (void).cxx_destruct;
- (id)animatableTextViews;
- (id)animatableViews;
- (id)backdropLayer;
- (id)containerView;
- (id)framesOfAddedChatItems;
- (id)impactIdentifier;
- (bool)isSender;
- (id)messages;
- (void)setAnimatableTextViews:(id)arg1;
- (void)setAnimatableViews:(id)arg1;
- (void)setBackdropLayer:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setFramesOfAddedChatItems:(id)arg1;
- (void)setImpactIdentifier:(id)arg1;
- (void)setIsSender:(bool)arg1;
- (void)setMessages:(id)arg1;
- (void)setShouldRepeat:(bool)arg1;
- (void)setThrowBalloonViewAttributesCollection:(id)arg1;
- (void)setThrowBalloonViews:(id)arg1;
- (bool)shouldRepeat;
- (id)throwBalloonViewAttributesCollection;
- (id)throwBalloonViews;

@end
