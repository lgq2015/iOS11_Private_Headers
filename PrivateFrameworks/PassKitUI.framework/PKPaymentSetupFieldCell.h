/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupFieldCell : PKTableViewCell <PKDatePickerDelegate, UIPickerViewDataSource, UIPickerViewDelegate, UITextFieldDelegate> {
    bool  _canResignFirstResponder;
    PKDatePicker * _dateInputView;
    NSArray * _defaultCenterBarButtonGroups;
    NSArray * _defaultLeadingBarButtonGroups;
    NSArray * _defaultTrailingBarButtonGroups;
    <PKPaymentSetupFieldCellDelegate> * _delegate;
    UIColor * _editableTextFieldCameraCapturedTextColor;
    UIColor * _editableTextFieldDisabledTextColor;
    UIColor * _editableTextFieldTextColor;
    bool  _enabled;
    bool  _ignoreCurrentValueChangedNotifications;
    double  _minimumTextLabelWidth;
    PKPaymentSetupField * _paymentSetupField;
    UIPickerView * _pickerInputView;
    bool  _shouldDrawFullWidthSeperator;
    bool  _shouldDrawSeperator;
}

@property (nonatomic) bool canResignFirstResponder;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentSetupFieldCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) UIColor *editableTextFieldCameraCapturedTextColor;
@property (nonatomic, copy) UIColor *editableTextFieldDisabledTextColor;
@property (nonatomic, copy) UIColor *editableTextFieldTextColor;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) double minimumTextLabelWidth;
@property (nonatomic, retain) PKPaymentSetupField *paymentSetupField;
@property (nonatomic) bool shouldDrawFullWidthSeperator;
@property (nonatomic) bool shouldDrawSeperator;
@property (readonly) Class superclass;

+ (double)minimumCellHeight;
+ (id)paymentSetupFieldCellForField:(id)arg1 fromTableView:(id)arg2;
+ (id)reuseIdentifier;
+ (long long)tableViewCellStyle;

- (void).cxx_destruct;
- (void)_applyDefaultValues;
- (void)_editableTextFieldDidBeginEditing:(id)arg1;
- (void)_editableTextFieldValueChanged:(id)arg1;
- (void)_paymentSetupFieldCurrentValueChangedNotification:(id)arg1;
- (void)_pullCurrentValueFromField;
- (void)_pushCurrentValueToField;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_separatorFrame;
- (void)_updateDisplay:(bool)arg1;
- (void)_updateDisplayForFieldTypeDate:(id)arg1;
- (void)_updateDisplayForFieldTypePicker:(id)arg1;
- (void)_updateDisplayForFieldTypeText:(id)arg1;
- (bool)canResignFirstResponder;
- (void)datePicker:(id)arg1 didChangeDate:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)editableTextFieldCameraCapturedTextColor;
- (id)editableTextFieldDisabledTextColor;
- (id)editableTextFieldTextColor;
- (double)heightForWidth:(double)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSetupField:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isEnabled;
- (void)layoutSubviews;
- (double)minimumTextLabelWidth;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)paymentSetupField;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)prepareForReuse;
- (void)setCanResignFirstResponder:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditableTextFieldCameraCapturedTextColor:(id)arg1;
- (void)setEditableTextFieldDisabledTextColor:(id)arg1;
- (void)setEditableTextFieldTextColor:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setMinimumTextLabelWidth:(double)arg1;
- (void)setPaymentSetupField:(id)arg1;
- (void)setShouldDrawFullWidthSeperator:(bool)arg1;
- (void)setShouldDrawSeperator:(bool)arg1;
- (bool)shouldDrawFullWidthSeperator;
- (bool)shouldDrawSeperator;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)updatePaymentSetupFieldWithCurrentCellValue;

@end
