/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCQuestionsController : PSDetailController {
    UIAlertView * _activeAlert;
    <MCQuestionsControllerDelegate> * _delegate;
    MCUIFieldCollection * _fieldCollection;
    int  _outDirection;
    NSString * _previousResponseValue;
    bool  _showingKeyboard;
    bool  _waitingForPasscodePreflight;
}

@property (nonatomic) <MCQuestionsControllerDelegate> *delegate;
@property (nonatomic) int outDirection;

- (void).cxx_destruct;
- (void)_cancelActiveAlert:(bool)arg1;
- (void)_cancelButtonClicked;
- (void)_cancelInput;
- (void)_cancelPaylod;
- (void)_continueOrFinish;
- (void)_continueWithCurrentField;
- (void)_didFinishPasscodePreflightWithError:(id)arg1;
- (void)_didFinishPreflightWithError:(id)arg1;
- (void)_disableRightButton;
- (void)_enableRightButton;
- (void)_finishInput;
- (void)_hideKeyboard:(bool)arg1;
- (void)_hideProgressIndicator;
- (void)_nextButtonClicked;
- (id)_panePropertiesForField:(id)arg1;
- (void)_preflightCurrentPayload;
- (void)_processResponseAndContinue;
- (void)_questionFieldEmpty:(id)arg1;
- (void)_questionFieldNotEmpty:(id)arg1;
- (void)_retryCurrentPasswordFieldWithError:(id)arg1;
- (void)_retryPayload;
- (void)_retryWithCurrentField;
- (void)_showErrorAlertWithError:(id)arg1;
- (void)_showKeyboard:(bool)arg1;
- (void)_showNavButtonsAnimated:(bool)arg1;
- (void)_showProgressIndicator;
- (void)_skipPayload;
- (void)_tellDelegateDidFinishWithUserInputResponses:(id)arg1;
- (void)_updateNavigationBar;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithUserInput:(id)arg1;
- (int)outDirection;
- (void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setOutDirection:(int)arg1;
- (void)setPane:(id)arg1;
- (void)stopWaitingForMoreInput;
- (void)updateWithUserInput:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)waitForMoreInput;

@end
