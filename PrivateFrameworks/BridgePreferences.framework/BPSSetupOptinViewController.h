/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

@interface BPSSetupOptinViewController : BPSSetupPageViewController <BPSBuddyController, PBAutomationDocumentation> {
    UIButton * _alternateChoiceButton;
    NSMutableDictionary * _automationBlocks;
    UILabel * _detailTextLabel;
    UILabel * _detailTextTitleLabel;
    UIButton * _learnMoreButton;
    UIButton * _okayButton;
    UIScrollView * _scrollView;
    unsigned long long  _style;
    UIButton * _suggestedChoiceButton;
    BPSWatchView * _watchView;
}

@property (nonatomic, retain) UIButton *alternateChoiceButton;
@property (nonatomic, retain) NSMutableDictionary *automationBlocks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *detailTextLabel;
@property (nonatomic, retain) UILabel *detailTextTitleLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIButton *learnMoreButton;
@property (nonatomic, retain) UIButton *okayButton;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic) unsigned long long style;
@property (nonatomic, retain) UIButton *suggestedChoiceButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) BPSWatchView *watchView;

- (void).cxx_destruct;
- (void)_madeOptinChoice:(bool)arg1 withAlertController:(id)arg2;
- (double)alternateButtonDetailTextPaddingWithImage;
- (void)alternateButtonPressed:(id)arg1;
- (id)alternateButtonTitle;
- (id)alternateChoiceButton;
- (void)applyConfirmedOptin:(bool)arg1;
- (id)automationBlocks;
- (id)detailAtrributedString;
- (id)detailString;
- (id)detailTextLabel;
- (id)detailTextTitleLabel;
- (id)detailTitleString;
- (double)imageDetailPadding;
- (id)imageResource;
- (id)imageResourceBundleIdentifier;
- (id)init;
- (id)learnMoreButton;
- (void)learnMoreButtonPressed:(id)arg1;
- (id)learnMoreButtonTitle;
- (id)okayButton;
- (void)okayButtonPressed:(id)arg1;
- (id)okayButtonTitle;
- (double)okayButtonTopPadding;
- (id)scrollView;
- (void)setAlternateChoiceButton:(id)arg1;
- (void)setAutomationBlocks:(id)arg1;
- (void)setDetailTextLabel:(id)arg1;
- (void)setDetailTextTitleLabel:(id)arg1;
- (void)setLearnMoreButton:(id)arg1;
- (void)setOkayButton:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setSuggestedChoiceButton:(id)arg1;
- (void)setWatchView:(id)arg1;
- (void)showOptinConfirmationAlert:(id)arg1 optinChoice:(bool)arg2;
- (double)sidePadding;
- (unsigned long long)style;
- (void)suggestedButtonPressed:(id)arg1;
- (id)suggestedButtonTitle;
- (id)suggestedChoiceButton;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (bool)wantsAlternateChoicePillButton;
- (bool)wantsAlternateChoiceSystemButton;
- (bool)wantsLearnMoreButton;
- (bool)wantsOkayPillButton;
- (bool)wantsSuggestedChoicePillButton;
- (bool)wantsToShowWatchHW;
- (id)watchView;

@end
