/* made by EzioChiu.
 */

@protocol AssistantUIDelegate

@required

- (void)assistantUpdateProgress:(NSString *)arg1 forState:(int)arg2;
- (void)assistantWaitingForResourcesComplete;
- (void)assistantWaitingForResourcesStart;
- (void)connectionVerificationSucceededForSelector:(int)arg1;
- (void)doneWithAssistantResult:(int)arg1;
- (void)presentUIForRecommendationResult:(int)arg1 paramDict:(NSDictionary *)arg2;
- (void)presentUIForRecommendationStatus;
- (void)presentUIForRecommmendationTargetInfo:(NSDictionary *)arg1;
- (void)presentUIForSetupResult:(int)arg1 baseStationInfo:(NSDictionary *)arg2 withPrompt:(NSString *)arg3;
- (void)presentUIForSetupStatusWithRecommendationDict:(NSDictionary *)arg1;
- (void)presentUIForStepByStepNextStep:(int)arg1 paramDict:(NSDictionary *)arg2;
- (void)presentUIForStepByStepResult:(int)arg1;
- (void)presentUIForStepByStepStart;
- (void)showAskUserForPPPoECredentialsForStatus:(int)arg1 paramDict:(NSDictionary *)arg2;
- (void)showAskUserSwapCablingForStatus:(int)arg1 paramDict:(NSDictionary *)arg2;
- (void)showTellUserToPlugInEthernetForStatus:(int)arg1 paramDict:(NSDictionary *)arg2;
- (void)showTellUserToResetBroadbandDeviceForStatus:(int)arg1 paramDict:(NSDictionary *)arg2;
- (void)showUIConfigPromptForGuestNetConfigWithParamDict:(NSDictionary *)arg1;
- (void)showUIConfigPromptToSendDiagsUsageStatsWithParamDict:(NSDictionary *)arg1;

@optional

- (void)showUIConfigPromptPostHook;
- (void)showUIConfigPromptPreHook;

@end
