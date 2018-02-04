/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupFieldsViewController : PKPaymentSetupTableViewController <PKNavigationItemController, PKPaymentSetupFieldCellDelegate, UITextFieldDelegate> {
    id  _currentNextActionBlock;
    NSMapTable * _fieldIdentifierToCellMap;
    PKPaymentSetupFieldsModel * _fieldsModel;
    bool  _hasScrolledToShowFields;
    PKTableHeaderView * _headerView;
    bool  _hidesBackButton;
    NSArray * _leftBarButtonItems;
    bool  _navigationEnabled;
    NSArray * _rightBarButtonItems;
    bool  _rightBarButtonItemsEnabled;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    bool  _showingActivitySpinner;
    PKPaymentWebService * _webService;
}

@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKPaymentSetupFieldsModel *fieldsModel;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (getter=isShowingActivitySpinner, nonatomic, readonly) bool showingActivitySpinner;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKPaymentWebService *webService;

- (void).cxx_destruct;
- (id)_contextSpecificStringForAggDKey:(id)arg1;
- (void)_destroyNavigationBarButtonItemsAnimated:(bool)arg1;
- (void)_handleNextButtonTapped:(id)arg1;
- (void)_setIdleTimerDisabled:(bool)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)_setLeftBarButtonItems:(id)arg1 animated:(bool)arg2;
- (void)_setNavigationBarEnabled:(bool)arg1 animated:(bool)arg2;
- (void)_setRightBarButtonItems:(id)arg1 animated:(bool)arg2;
- (void)_setRightBarButtonItemsEnabled:(bool)arg1;
- (void)_setTableViewHeaderActivityIndicatorActive:(bool)arg1 title:(id)arg2 subtitle:(id)arg3 animated:(bool)arg4;
- (void)_triggerNextActionLoop;
- (void)_updateNavigationItemAnimated:(bool)arg1;
- (void)_updateRightBarButtonState;
- (id)allCells;
- (id)cellForIdentifier:(id)arg1;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (bool)fieldCellEditableTextFieldShouldBeginEditing:(id)arg1;
- (bool)fieldCellEditableTextFieldShouldClear:(id)arg1;
- (bool)fieldCellEditableTextFieldShouldReturn:(id)arg1;
- (void)fieldCellEditableTextFieldValueDidChange:(id)arg1;
- (id)fieldForIdentifier:(id)arg1;
- (id)fieldsModel;
- (id)firstEmptyCell;
- (id)firstEmptyField;
- (id)firstEmptySetupField;
- (id)firstResponderCell;
- (id)footerView;
- (void)handleNextActionError:(id)arg1 shouldContinue:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)handleNextActionWithCompletion:(id /* block */)arg1;
- (void)handleNextButtonTapped:(id)arg1;
- (id)headerView;
- (void)hideActivitySpinner;
- (void)hideActivitySpinnerWithTitle:(id)arg1 subtitle:(id)arg2 animated:(bool)arg3;
- (id)initWithWebService:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4;
- (bool)isComplete;
- (bool)isEmpty;
- (bool)isShowingActivitySpinner;
- (void)logAggDCheckpointForKey:(id)arg1;
- (void)logAggDContextSpecificCheckpointForKey:(id)arg1;
- (id)nextResponderCellForCurrentIdentifier:(id)arg1;
- (void)noteFieldIdentifiersChanged;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)readonlyFieldIdentifiers;
- (void)setFieldsModel:(id)arg1;
- (void)setHeaderViewTitle:(id)arg1 subtitle:(id)arg2;
- (void)setHidesBackButton:(bool)arg1 animated:(bool)arg2;
- (void)setSetupDelegate:(id)arg1;
- (void)setWebService:(id)arg1;
- (id)setupDelegate;
- (bool)shouldAppearWithFirstEmptyFieldAsFirstResponder;
- (void)showActivitySpinnerWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)visibleFieldIdentifiers;
- (id)webService;

@end
