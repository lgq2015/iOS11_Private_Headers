/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPerformActionSelectItemView : UIView <PKPerformActionView, UITableViewDataSource, UITableViewDelegate> {
    PKPaymentPassAction * _action;
    NSDateFormatter * _dateFormatter;
    <PKPerformActionViewDelegate> * _delegate;
    PKPerformActionSelectItemExpiresHeader * _expiresHeader;
    PKPass * _pass;
    PKSelectedItemActionItem * _selectedItem;
    UITableView * _tableView;
}

@property (nonatomic, readonly) UITextField *amountTextField;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPerformActionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addSubviews;
- (id)_optionsSectionFooterText;
- (id)_optionsSectionHeaderText;
- (bool)_showsExpirationSection;
- (id)amountTextField;
- (id)delegate;
- (id)init;
- (id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3;
- (void)layoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pass;
- (void)saveLastInputValues;
- (id)serviceProviderData;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)transactionAmount;
- (id)transactionCurrency;

@end
