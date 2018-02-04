/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSimpleDataEntryHeightItem : HKSimpleDataEntryItem <UIPickerViewDataSource, UIPickerViewDelegate> {
    HKSimpleDataEntryPlainTextCell * _cell;
    NSNumber * _centimeterValue;
    NSNumber * _defaultValue;
    UIPickerView * _picker;
    NSString * _registrantModelKey;
    NSString * _title;
    bool  _usesImperialUnits;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_defaultCentimeterValue;
- (id)_formattedValueForDisplay;
- (void)_setHeightValueForPicker:(id)arg1 selectedRow:(long long)arg2;
- (void)_setTextForInputTextField:(id)arg1;
- (void)_setupPlaceholder;
- (void)_updateLocaleDependentValues;
- (void)_valueDidChange;
- (void)beginEditing;
- (id)cell;
- (void)doneButtonTapped:(id)arg1;
- (id)formattedKeyAndValue;
- (id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 heightInCm:(id)arg3 defaultHeightInCm:(id)arg4;
- (void)localeDidChange:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)updateCellDisplay;

@end
