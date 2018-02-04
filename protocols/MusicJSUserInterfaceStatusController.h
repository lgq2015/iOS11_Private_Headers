/* made by EzioChiu.
 */

@protocol MusicJSUserInterfaceStatusController <JSExport>

@required

- (bool)canShowConnect;
- (bool)canShowRadio;
- (bool)canShowSubscriptionContent;
- (bool)hasUserAcknowledgedWelcomeScreen;
- (bool)hasUserRequestedSubscriptionHidden;
- (void)setHasUserAcknowledgedWelcomeScreen:(bool)arg1;
- (void)setHasUserRequestedSubscriptionHidden:(bool)arg1;
- (NSString *)tabState;

@end
