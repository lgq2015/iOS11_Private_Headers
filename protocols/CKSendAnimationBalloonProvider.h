/* made by EzioChiu.
 */

@protocol CKSendAnimationBalloonProvider <NSObject>

@required

- (NSArray *)throwBalloonsForSendAnimationContext:(id <CKSendAnimationContext>)arg1;
- (bool)wantsOverKeyboardAnimationForSendAnimationContext:(id <CKSendAnimationContext>)arg1;

@end
