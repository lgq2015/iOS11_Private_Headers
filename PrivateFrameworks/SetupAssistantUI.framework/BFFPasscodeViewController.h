/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFPasscodeViewController : UIViewController <BFFPasscodeCreationDelegate, BFFPasscodeInputViewDelegate> {
    bool  _footerButtonIsSkip;
    NSObject<BFFPasscodeViewControllerDelegate> * _passcodeCreationDelegate;
    BFFPasscodeCreationManager * _passcodeManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSObject<BFFPasscodeViewControllerDelegate> *passcodeCreationDelegate;
@property (nonatomic, retain) BFFPasscodeCreationManager *passcodeManager;
@property (readonly) Class superclass;

+ (bool)allowSkip;
+ (id)localizedFirstEntryInstructionsForTouchID;

- (void).cxx_destruct;
- (bool)_allowSkip;
- (void)_animatedPasscodeViewTransitionToState:(unsigned long long)arg1 animation:(unsigned long long)arg2;
- (void)_commitPasscodeEntryTypeChange;
- (void)_finishedWithPasscode:(id)arg1;
- (id)_firstEntryInstructions;
- (id)_passcodeInputViewForState:(unsigned long long)arg1;
- (void)_setupFirstEntry;
- (void)_showPasscodeOptionsSheet;
- (void)_showSkipPasscodeAlert;
- (void)_showWeakWarningAlert;
- (void)_updateNextButton;
- (void)_updateNextButtonForPasscode:(id)arg1;
- (void)clear;
- (void)configurePasscodeTypeUsingAnimations:(bool)arg1;
- (void)dealloc;
- (id)instructionsForState:(unsigned long long)arg1;
- (void)loadView;
- (void)nextButtonPressed;
- (id)passcodeCreationDelegate;
- (void)passcodeInput:(id)arg1 enteredPasscode:(id)arg2;
- (void)passcodeInput:(id)arg1 tappedFooterButton:(id)arg2;
- (void)passcodeInput:(id)arg1 willChangeContents:(id)arg2;
- (id)passcodeManager;
- (void)passcodeManager:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)passcodeManagerDidSetPasscode:(id)arg1;
- (void)passcodeManagerWillSetPasscode:(id)arg1;
- (id)passcodeOptionAlertController;
- (void)setPasscodeCreationDelegate:(id)arg1;
- (void)setPasscodeManager:(id)arg1;
- (id)titleForState:(unsigned long long)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
