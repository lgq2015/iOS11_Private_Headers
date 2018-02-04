/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupBuiltInPrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell {
    UIButton * _cameraCaptureButton;
    bool  _showsCameraCaptureButton;
}

@property (nonatomic, readonly, retain) UIButton *cameraCaptureButton;
@property (nonatomic) bool showsCameraCaptureButton;

- (void).cxx_destruct;
- (id)cameraCaptureButton;
- (void)dealloc;
- (id)init;
- (void)setPaymentSetupField:(id)arg1;
- (void)setShowsCameraCaptureButton:(bool)arg1;
- (bool)showsCameraCaptureButton;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldClear:(id)arg1;

@end
