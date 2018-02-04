/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSActionPickerViewAssistant : NSObject <BCSActionPickerItemDelegate> {
    UIAlertController * _alertController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isShowingPicker, nonatomic, readonly) bool showingPicker;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanUpAlertController;
- (void)actionPickerItem:(id)arg1 didDismissAlertController:(id)arg2;
- (id)actionPickerItemAlertController:(id)arg1;
- (bool)isShowingPicker;
- (bool)showActionPickerWithItems:(id)arg1 fromViewController:(id)arg2 presentingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
