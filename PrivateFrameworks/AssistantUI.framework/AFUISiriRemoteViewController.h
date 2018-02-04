/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUISiriRemoteViewController : _UIRemoteViewController <SVSSiriViewControllerHosting> {
    <AFUISiriRemoteViewControllerDataSource> * _dataSource;
    <AFUISiriRemoteViewControllerDelegate> * _delegate;
    AFApplicationInfo * _viewServiceApplicationInfo;
}

@property (nonatomic) <AFUISiriRemoteViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFUISiriRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) AFApplicationInfo *viewServiceApplicationInfo;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationWillEnterForeground;
- (void)applicationWillResignActive;
- (id)dataSource;
- (id)delegate;
- (void)didReceiveBugButtonLongPress;
- (void)didReceiveHelpAction;
- (void)didReceiveReportBugAction;
- (void)didReceiveShortTapAction;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)getScreenshotWithReplyHandler:(id /* block */)arg1;
- (void)handlePasscodeUnlockWithCompletion:(id /* block */)arg1;
- (void)notifyOnNextUserInteraction;
- (void)preloadPresentationBundleWithIdentifier:(id)arg1;
- (void)pulseHelpButton;
- (void)serviceBulletinWithIdentifier:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)serviceDidDetectAudioRoutePickerTap;
- (void)serviceDidDetectMicButtonLongPressBegan;
- (void)serviceDidDetectMicButtonLongPressEnded;
- (void)serviceDidDetectMicButtonTap;
- (void)serviceDidDismissBugReporter;
- (void)serviceDidDismissViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceDidEndTaptoEdit;
- (void)serviceDidEnterUITrackingMode;
- (void)serviceDidExitUITrackingMode;
- (void)serviceDidFinishTest:(id)arg1;
- (void)serviceDidPresentBugReporter;
- (void)serviceDidPresentConversationFromBreadcrumb;
- (void)serviceDidPresentUserInterface;
- (void)serviceDidPresentViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceDidReadBulletinWithIdentifier:(id)arg1;
- (void)serviceDidRequestKeyboard:(bool)arg1;
- (void)serviceDidRequestKeyboard:(bool)arg1 minimized:(bool)arg2;
- (void)serviceDidResetTextInput;
- (void)serviceLaunchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 launchOptions:(long long)arg3 replyHandler:(id /* block */)arg4;
- (void)serviceOpenURL:(id)arg1 appBundleID:(id)arg2 allowSiriDismissal:(bool)arg3;
- (void)serviceOpenURL:(id)arg1 delaySessionEndForTTS:(bool)arg2 replyHandler:(id /* block */)arg3;
- (void)servicePresentationDidChangePeekMode:(unsigned long long)arg1;
- (void)serviceRequestsActivationSourceWithReplyHandler:(id /* block */)arg1;
- (void)serviceRequestsDismissal:(bool)arg1;
- (void)serviceStartGuidedAccess;
- (void)serviceStartRequestWithOptions:(id)arg1;
- (void)serviceUserRelevantEventDidOccur;
- (void)serviceWillBeginTapToEdit;
- (void)serviceWillDismissViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceWillPresentViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceWillStartTest:(id)arg1;
- (id)sessionDelegate;
- (void)setBugReportingAvailable:(bool)arg1;
- (void)setCarDisplayGatekeeperVisible:(bool)arg1;
- (void)setCarDisplaySnippetVisible:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHelpButtonEmphasized:(bool)arg1;
- (void)setRequestOptions:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSpeechSynthesis:(id)arg1;
- (void)setStatusBarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStatusBarHidden:(bool)arg1 animated:(bool)arg2;
- (void)setStatusBarHidden:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setStatusViewDisabled:(bool)arg1;
- (void)setStatusViewHeight:(double)arg1;
- (void)setStatusViewHidden:(bool)arg1;
- (void)setStatusViewUserInteractionEnabled:(bool)arg1;
- (void)setViewServiceApplicationInfo:(id)arg1;
- (void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2 lockState:(unsigned long long)arg3;
- (void)siriDidActivateFromSource:(long long)arg1;
- (void)siriDidDeactivate;
- (void)siriDidHidePasscodeUnlock;
- (void)siriIdleAndQuietStatusDidChange:(bool)arg1;
- (void)siriKeyboardViewDidChange:(struct { bool x1; bool x2; bool x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; double x5; }*)arg1;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)siriWillHidePasscodeUnlockForResult:(long long)arg1;
- (void)siriWillShowPasscodeUnlock;
- (void)siriWillShowPasscodeUnlockAndCancelRequest:(bool)arg1;
- (id)speechSynthesisDelegate;
- (void)startRequestForText:(id)arg1;
- (void)userInteractionDidOccur;
- (void)viewDidAppear:(bool)arg1;
- (id)viewServiceApplicationInfo;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
