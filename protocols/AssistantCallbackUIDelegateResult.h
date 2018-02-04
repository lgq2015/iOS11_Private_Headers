/* made by EzioChiu.
 */

@protocol AssistantCallbackUIDelegateResult

@required

- (void)callbackAskUserAQuestionResult:(int)arg1 result:(int)arg2;
- (void)callbackAskUserForPasswordResult:(int)arg1 password:(NSString *)arg2 remember:(int)arg3;
- (void)callbackAskUserToChooseFromStringListResult:(int)arg1 selectedString:(NSString *)arg2;

@optional

- (void)callbackAskUserForSetupCodeResult:(int)arg1 password:(NSString *)arg2;
- (void)callbackAskUserForUncertifiedResult:(int)arg1;

@end
