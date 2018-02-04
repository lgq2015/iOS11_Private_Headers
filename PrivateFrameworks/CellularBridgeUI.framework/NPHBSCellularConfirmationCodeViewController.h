/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
 */

@interface NPHBSCellularConfirmationCodeViewController : UIViewController <UITextFieldDelegate> {
    NPHSetupTableViewCell * _confirmationCodeCell;
    UILabel * _confirmationCodeTitleLabel;
    <NPHBSCellularConfirmationCodeViewControllerDelegate> * _delegate;
    UITableView * _infoTableView;
    NSLayoutConstraint * _infoTableViewHeightConstraint;
}

@property (nonatomic) UILabel *confirmationCodeTitleLabel;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NPHBSCellularConfirmationCodeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UITableView *infoTableView;
@property (nonatomic) NSLayoutConstraint *infoTableViewHeightConstraint;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)confirm:(id)arg1;
- (id)confirmationCodeTitleLabel;
- (id)delegate;
- (id)infoTableView;
- (id)infoTableViewHeightConstraint;
- (id)init;
- (void)setConfirmationCodeTitleLabel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInfoTableView:(id)arg1;
- (void)setInfoTableViewHeightConstraint:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
