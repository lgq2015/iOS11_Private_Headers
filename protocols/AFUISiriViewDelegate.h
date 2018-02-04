/* made by EzioChiu.
 */

@protocol AFUISiriViewDelegate <NSObject>

@required

- (float)audioRecordingPowerLevelForSiriView:(AFUISiriView *)arg1;
- (bool)siriView:(AFUISiriView *)arg1 attemptUnlockWithPassword:(NSString *)arg2;
- (void)siriView:(AFUISiriView *)arg1 didReceiveSiriActivationMessageWithSource:(long long)arg2;
- (void)siriViewDidReceiveAudioRouteAction:(AFUISiriView *)arg1;
- (void)siriViewDidReceiveBugButtonLongPress:(AFUISiriView *)arg1;
- (void)siriViewDidReceiveHelpAction:(AFUISiriView *)arg1;
- (void)siriViewDidReceiveReportBugAction:(AFUISiriView *)arg1;
- (void)siriViewDidRecieveStatusViewHoldDidBeginAction:(AFUISiriView *)arg1;
- (void)siriViewDidRecieveStatusViewHoldDidEndAction:(AFUISiriView *)arg1;
- (void)siriViewDidRecieveStatusViewTappedAction:(AFUISiriView *)arg1;
- (bool)siriViewShouldSupportTextInput:(AFUISiriView *)arg1;

@end
