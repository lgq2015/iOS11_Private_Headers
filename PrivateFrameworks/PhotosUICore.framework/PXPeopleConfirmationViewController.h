/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleConfirmationViewController : UIViewController <PXPeopleSuggestionManagerDelegate, PXPeopleSummaryDelegate> {
    UILabel * _descriptionLabel;
    PXAnimatedHeaderView * _headerView;
    UIActivityIndicatorView * _interimLoadingIndicator;
    UILabel * _interimLoadingLabel;
    NSTimer * _loadingDelayTimer;
    PXPeopleConfirmationLoadingView * _loadingView;
    bool  _showTypeDebugColor;
    PXPeopleSuggestionManager * _suggestionManager;
    PXPeopleSuggestionView * _suggestionView;
    bool  _suggestionsPresented;
    PXPeopleConfirmationSummaryViewController * _summaryViewController;
    unsigned long long  _viewState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *descriptionLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXAnimatedHeaderView *headerView;
@property (nonatomic, retain) UIActivityIndicatorView *interimLoadingIndicator;
@property (nonatomic, retain) UILabel *interimLoadingLabel;
@property (readonly) bool isSummaryViewShowing;
@property (nonatomic, retain) NSTimer *loadingDelayTimer;
@property (nonatomic, retain) PXPeopleConfirmationLoadingView *loadingView;
@property (nonatomic) bool showTypeDebugColor;
@property (readonly) PXPeopleSuggestionManager *suggestionManager;
@property (nonatomic, retain) PXPeopleSuggestionView *suggestionView;
@property (nonatomic) bool suggestionsPresented;
@property (nonatomic, retain) PXPeopleConfirmationSummaryViewController *summaryViewController;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long viewState;

- (void).cxx_destruct;
- (unsigned long long)autoConfirmedCountForSummaryViewController:(id)arg1;
- (void)confirmTapped:(id)arg1;
- (void)confirmationCountUpdatedForSuggestionManager:(id)arg1;
- (void)denyTapped:(id)arg1;
- (id)descriptionLabel;
- (void)dismissSummary;
- (void)displaySummary;
- (void)doneTapped:(id)arg1;
- (id)headerView;
- (id)initWithPerson:(id)arg1;
- (id)interimLoadingIndicator;
- (id)interimLoadingLabel;
- (bool)isSummaryViewShowing;
- (id)loadingDelayTimer;
- (id)loadingView;
- (void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg1;
- (void)performUndo:(id)arg1;
- (id)personForSummaryViewController:(id)arg1;
- (void)presentSuggestion:(id)arg1 animated:(bool)arg2;
- (void)setDescriptionLabel:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setInterimLoadingIndicator:(id)arg1;
- (void)setInterimLoadingLabel:(id)arg1;
- (void)setLoadingDelayTimer:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setShowTypeDebugColor:(bool)arg1;
- (void)setSuggestionView:(id)arg1;
- (void)setSuggestionsPresented:(bool)arg1;
- (void)setSummaryViewController:(id)arg1;
- (void)setViewState:(unsigned long long)arg1;
- (bool)showTypeDebugColor;
- (void)suggestionDidDisplay;
- (id)suggestionManager;
- (void)suggestionManager:(id)arg1 hasNewSuggestionsAvailable:(id)arg2;
- (id)suggestionView;
- (bool)suggestionsPresented;
- (id)summaryViewController;
- (void)undoConfirm:(id)arg1;
- (void)undoDeny:(id)arg1;
- (void)updateViewWithViewState:(unsigned long long)arg1;
- (unsigned long long)userConfirmedCountForSummaryViewController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)viewState;
- (void)willLoadMoreSuggestionsForSuggestionManager:(id)arg1;

@end
