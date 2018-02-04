/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

@interface SGUIBannerView : UIView <SGUIEventsAndContactsTableViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    UIImageView * _bannerImageView;
    UIButton * _closeButton;
    SGUISuggestionConfirmationController * _confirmationController;
    <SGUIBannerViewDelegate> * _delegate;
    NSLayoutConstraint * _detailsBaselineConstraint;
    UILabel * _detailsLabel;
    UIImageView * _disclosureImageView;
    NSMutableSet * _doneSuggestions;
    NSLayoutConstraint * _imageCenterYConstraint;
    NSArray * _multipleBannerImageConstraints;
    NSArray * _orderedSuggestions;
    UIImageView * _secondaryBannerImageView;
    NSArray * _singleBannerImageConstraints;
    <SGRealtimeSuggestion> * _suggestionBeingConfirmed;
    UITapGestureRecognizer * _tapGestureRecognizer;
    NSLayoutConstraint * _titleBaselineConstraint;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly, copy) UIImage *bannerImage;
@property (nonatomic, retain) UIImageView *bannerImageView;
@property (nonatomic, retain) UIButton *closeButton;
@property (nonatomic, readonly, copy) NSArray *currentSuggestionGroup;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SGUIBannerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *detailsLabel;
@property (nonatomic, readonly, copy) UIImage *disclosureImage;
@property (nonatomic, retain) UIImageView *disclosureImageView;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *orderedSuggestions;
@property (nonatomic, readonly, copy) UIImage *secondaryBannerImage;
@property (nonatomic, retain) UIImageView *secondaryBannerImageView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)_calendarImage;
+ (id)_cancelImage;
+ (id)_contactsImage;
+ (id)_disclosureChevronImage:(bool)arg1;
+ (id)bannerViewForEventSuggestions:(id)arg1 contactSuggestions:(id)arg2;
+ (id)bannerViewForSuggestions:(id)arg1;
+ (double)imageCenterOffsetFromTitleBaselineConstant;
+ (double)interLabelBaselineDeltaConstant;
+ (id)subtitleFont;
+ (id)titleFont;
+ (double)topMarginConstant;

- (void).cxx_destruct;
- (void)_confirmCurrentSuggestion;
- (void)_confirmSuggestion:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_dismissBannerRejectSuggestion:(bool)arg1;
- (void)_dismissPresentedViewController:(id)arg1;
- (void)_dismissViewControllerAnimated:(bool)arg1;
- (id)_filterRealtimeSuggestions:(id)arg1 forClass:(Class)arg2;
- (id)_findSuggestionsOfClass:(Class)arg1;
- (void)_hideMe;
- (void)_installLayoutConstraints;
- (void)_presentModalViewController:(id)arg1 fromSourceView:(id)arg2;
- (void)_presentModalViewControllerFromButton:(id)arg1;
- (id)_presentedControllerCancelButtonItem;
- (id)_presentedControllerDoneButtonItem;
- (id)_presentingViewController;
- (void)_setupViews;
- (void)_tapGestureRecognized:(id)arg1;
- (void)_update;
- (void)_updateUI;
- (id)addButtonTitle;
- (bool)areMultipleSuggestionsPresent;
- (id)bannerImage;
- (id)bannerImageView;
- (id)closeButton;
- (void)confirmContactSuggestion;
- (void)confirmEventSuggestion;
- (void)controller:(id)arg1 doneWithSuggestion:(id)arg2;
- (id)currentSuggestionGroup;
- (id)delegate;
- (id)detailsLabel;
- (id)disclosureImage;
- (id)disclosureImagePressed;
- (id)disclosureImageView;
- (void)dismissBanner:(id)arg1;
- (id)initWithEventSuggestions:(id)arg1 contactSuggestions:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSuggestions:(id)arg1;
- (unsigned long long)numberOfSuggestions;
- (id)orderedSuggestions;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (id)popoverSourceView;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
- (id)secondaryBannerImage;
- (id)secondaryBannerImageView;
- (void)setBannerImageView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailsLabel:(id)arg1;
- (void)setDisclosureImageView:(id)arg1;
- (void)setOrderedSuggestions:(id)arg1;
- (void)setSecondaryBannerImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;
- (void)updateConstraints;
- (void)updateFonts;

@end
