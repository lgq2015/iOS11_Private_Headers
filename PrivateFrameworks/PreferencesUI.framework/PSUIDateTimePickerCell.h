/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIDateTimePickerCell : PSTableCell {
    UIDatePicker * _datePicker;
}

+ (double)preferredHeight;

- (void).cxx_destruct;
- (id)datePicker;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (void)timeZoneChanged:(id)arg1;

@end