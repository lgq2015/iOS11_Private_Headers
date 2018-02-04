/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUITableViewController : SearchUIKeyboardableTableViewController <SearchUIFeedbackDelegateInternal> {
    <SFFeedbackListener> * _feedbackListener;
    SearchUIPeekDelegate * _peekDelegate;
    long long  _preferredPunchoutIndex;
    <UIViewControllerPreviewing> * _previewingContext;
    <SearchUIResultViewDelegate> * _resultViewDelegate;
    bool  _shouldUseInsetRoundedSections;
    SearchUITableModel * _tableModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <SFFeedbackListener> *feedbackListener;
@property (readonly) unsigned long long hash;
@property (retain) SearchUIPeekDelegate *peekDelegate;
@property long long preferredPunchoutIndex;
@property (retain) <UIViewControllerPreviewing> *previewingContext;
@property <SearchUIResultViewDelegate> *resultViewDelegate;
@property (nonatomic) bool shouldUseInsetRoundedSections;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;
@property (retain) SearchUITableModel *tableModel;
@property (retain) SearchUITableView *tableView;

+ (void)applySeparatorStyleToCell:(id)arg1 forCurrentRowModel:(id)arg2 nextRowModel:(id)arg3;
+ (double)layoutMarginWidthForOrientation:(long long)arg1;

- (void).cxx_destruct;
- (id)cardSectionForIndexPath:(id)arg1;
- (void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(bool)arg2;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (id)cellForIndexPath:(id)arg1 reuseIfPossible:(bool)arg2;
- (void)deselectRowsForIndexPath:(id)arg1 animated:(bool)arg2;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })enumerateSelectableCellsForIndexPath:(id)arg1 withBlock:(id /* block */)arg2;
- (id)fallbackPeekViewControllerForIndexPath:(id)arg1;
- (id)feedbackListener;
- (bool)forwardFeedbackForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)handleSelectionAtIndexPath:(id)arg1 wasPop:(bool)arg2;
- (id)init;
- (id)nextCardForIndexPath:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)offScreenContentScrollDistance;
- (id)peekDelegate;
- (long long)preferredPunchoutIndex;
- (id)preferredViewControllerForIndexPath:(id)arg1 isPreview:(bool)arg2;
- (void)presentViewController:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(bool)arg2;
- (id)previewingContext;
- (id)punchoutPickerDismissText:(id)arg1;
- (id)punchoutPickerTitleForIndexPath:(id)arg1;
- (id)punchoutsForIndexPath:(id)arg1;
- (void)requestAuthIfNecessaryAndPresentViewController:(id)arg1 animated:(bool)arg2;
- (void)resignTextField;
- (bool)respondsToSelector:(SEL)arg1;
- (id)resultForIndexPath:(id)arg1;
- (id)resultViewDelegate;
- (void)roundNecessaryCornersForTableCellSelectedBackground:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setFeedbackListener:(id)arg1;
- (void)setPeekDelegate:(id)arg1;
- (void)setPreferredPunchoutIndex:(long long)arg1;
- (void)setPreviewingContext:(id)arg1;
- (void)setResultViewDelegate:(id)arg1;
- (void)setShouldUseInsetRoundedSections:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTableModel:(id)arg1;
- (bool)shouldUseInsetRoundedSections;
- (void)showViewController:(id)arg1;
- (unsigned long long)style;
- (id)tableModel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContentScrolledOffScreenStatus;
- (void)updateLayoutMarginsForOrientation:(long long)arg1;
- (void)updateTableForNewCellHeightAnimated:(bool)arg1;
- (void)updateViewControllerTitle:(id)arg1;
- (void)updateWithTableModel:(id)arg1;
- (id)viewControllerForIndexPath:(id)arg1 isPeek:(bool)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
