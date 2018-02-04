/* made by EzioChiu.
 */

@protocol SiriUISiriStatusViewDelegate <NSObject>

@required

- (float)audioLevelForSiriStatusView:(SiriUISiriStatusView *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsForSiriStatusView:(SiriUISiriStatusView *)arg1;
- (void)siriStatusViewHoldDidBegin:(SiriUISiriStatusView *)arg1;
- (void)siriStatusViewHoldDidEnd:(SiriUISiriStatusView *)arg1;
- (void)siriStatusViewWasTapped:(SiriUISiriStatusView *)arg1;

@end
