/* made by EzioChiu.
 */

@protocol PKPaymentSetupFieldCellDelegate <NSObject>

@optional

- (bool)fieldCellEditableTextFieldShouldBeginEditing:(PKPaymentSetupFieldCell *)arg1;
- (bool)fieldCellEditableTextFieldShouldClear:(PKPaymentSetupFieldCell *)arg1;
- (bool)fieldCellEditableTextFieldShouldReturn:(PKPaymentSetupFieldCell *)arg1;
- (void)fieldCellEditableTextFieldValueDidChange:(PKPaymentSetupFieldCell *)arg1;

@end
