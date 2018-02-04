/* made by EzioChiu.
 */

@protocol CKSendAnimationContext <NSObject>

@required

- (NSArray *)animatableTextViews;
- (NSArray *)animatableViews;
- (CABackdropLayer *)backdropLayer;
- (UIView *)containerView;
- (NSArray *)framesOfAddedChatItems;
- (NSString *)impactIdentifier;
- (bool)isSender;
- (NSArray *)messages;
- (void)setAnimatableTextViews:(NSArray *)arg1;
- (void)setAnimatableViews:(NSArray *)arg1;
- (void)setBackdropLayer:(CABackdropLayer *)arg1;
- (void)setContainerView:(UIView *)arg1;
- (void)setFramesOfAddedChatItems:(NSArray *)arg1;
- (void)setImpactIdentifier:(NSString *)arg1;
- (void)setIsSender:(bool)arg1;
- (void)setMessages:(NSArray *)arg1;
- (void)setShouldRepeat:(bool)arg1;
- (void)setThrowBalloonViewAttributesCollection:(NSArray *)arg1;
- (void)setThrowBalloonViews:(NSArray *)arg1;
- (bool)shouldRepeat;
- (NSArray *)throwBalloonViewAttributesCollection;
- (NSArray *)throwBalloonViews;

@end
