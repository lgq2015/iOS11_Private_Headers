/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIResultViewController : UIViewController <UIGestureRecognizerDelegate> {
    <SearchUIResultViewDelegate> * _delegate;
    SearchUIReplicatorView * _replicatorView;
    SearchUIResultTableViewController * _resultTableViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SearchUIResultViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double distanceToTopOfAppIcons;
@property (nonatomic) <SFFeedbackListener> *feedbackListener;
@property (nonatomic, retain) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (retain) SearchUIReplicatorView *replicatorView;
@property (retain) SearchUIResultTableViewController *resultTableViewController;
@property (nonatomic, retain) SearchUISearchField *searchField;
@property (nonatomic) bool shouldHideResultsUnderKeyboard;
@property (nonatomic) bool shouldUseInsetRoundedSections;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentScrollView;
- (id)delegate;
- (void)didTap;
- (double)distanceToTopOfAppIcons;
- (unsigned long long)edgesForExtendedLayout;
- (id)feedbackListener;
- (id)footerView;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (void)replaceResult:(id)arg1 withResult:(id)arg2 inResultSection:(id)arg3;
- (id)replicatorView;
- (id)resultTableViewController;
- (id)searchField;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackListener:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setReplicatorView:(id)arg1;
- (void)setResultTableViewController:(id)arg1;
- (void)setSearchField:(id)arg1;
- (void)setShouldHideResultsUnderKeyboard:(bool)arg1;
- (void)setShouldUseInsetRoundedSections:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (bool)shouldHideResultsUnderKeyboard;
- (bool)shouldUseInsetRoundedSections;
- (unsigned long long)style;
- (void)updateWithResultSections:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
