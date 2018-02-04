/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSetupFieldPicker : PKPaymentSetupField {
    NSArray * _pickerItems;
}

@property (nonatomic, copy) PKPaymentSetupFieldPickerItem *currentValue;
@property (nonatomic, readonly, copy) NSArray *pickerItems;

- (void).cxx_destruct;
- (id)currentValue;
- (id)displayString;
- (unsigned long long)fieldType;
- (id)pickerItems;
- (void)setCurrentValue:(id)arg1;
- (id)submissionString;
- (void)updateWithConfiguration:(id)arg1;

@end
