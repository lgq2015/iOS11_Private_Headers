/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupBrowseProductsViewController : PKPaymentSetupTableViewController <PKPaymentSetupActivitySpinnerProtocol, UITableViewDelegate, UITextFieldDelegate> {
    <PKPaymentSetupBrowseProductsViewControllerDelegate> * _delegate;
    PKSearchableTableHeaderView * _headerView;
    PKPaymentSetupBrowseProductsModel * _model;
    PKPaymentSetupProduct * _selectedProduct;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentSetupBrowseProductsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaymentSetupBrowseProductsModel *model;
@property (nonatomic, readonly) PKPaymentSetupProduct *selectedProduct;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isLikelySection:(long long)arg1;
- (bool)_isUnlikelySection:(long long)arg1;
- (void)_nextTapped:(id)arg1;
- (void)_notifyDelegateDidSelectProduct:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)_productAtIndexPath:(id)arg1;
- (bool)_searchUIEnabled;
- (void)_setNavigationBarEnabled:(bool)arg1;
- (bool)_showLikelySection;
- (void)_updateFilterString:(id)arg1 userInteraction:(bool)arg2;
- (void)_updateSelectedProduct:(id)arg1;
- (void)clearSearchField;
- (void)clearSelectedProduct;
- (void)dealloc;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)delegate;
- (void)hideActivitySpinner;
- (id)initWithModel:(id)arg1 context:(long long)arg2;
- (id)initWithProducts:(id)arg1 context:(long long)arg2;
- (id)initWithProducts:(id)arg1 likelyProductIdentifiers:(id)arg2 context:(long long)arg3;
- (id)model;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)selectedProduct;
- (void)setDelegate:(id)arg1;
- (void)setModel:(id)arg1;
- (void)showActivitySpinner;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
