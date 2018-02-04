/* made by EzioChiu.
 */

@protocol AFUISiriSessionLocalDelegate <AFUISiriSessionListener>

@required

- (void)siriSession:(AFUISiriSession *)arg1 didChangeDialogPhase:(AFDialogPhase *)arg2;
- (void)siriSession:(AFUISiriSession *)arg1 didChangeToState:(long long)arg2;
- (void)siriSession:(void *)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: AFUISiriSession *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)siriSession:(void *)arg1 didReceiveDeviceUnlockRequestWithCompletion:(void *)arg2; // needs 2 arg types, found 7: AFUISiriSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (bool)siriSessionCanEnd:(AFUISiriSession *)arg1;
- (void)siriSessionDidEnd:(AFUISiriSession *)arg1;
- (void)siriSessionDidReceiveDelayedActionCancelCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SAUIDelayedActionCancelCommand *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AceObject<SAAceCommand> *, void*
- (void)siriSessionDidReceiveDelayedActionCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SAUIDelayedActionCommand *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AceObject<SAAceCommand> *, void*
- (void)siriSessionDidResetContext:(AFUISiriSession *)arg1;
- (void)siriSessionRecordingPreparationHasFinished:(AFUISiriSession *)arg1;
- (void)siriSessionWillEnd:(AFUISiriSession *)arg1;

@end
