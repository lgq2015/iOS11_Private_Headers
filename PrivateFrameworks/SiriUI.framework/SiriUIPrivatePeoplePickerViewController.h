/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIPrivatePeoplePickerViewController : SiriUISnippetViewController <SiriUIObjectPickerViewControllerDelegate> {
    SAABPersonPicker * _picker;
    SiriUIObjectPickerViewController * _pickerController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_pickerController;
- (void)_showPicker:(id)arg1;
- (void)configureReusableFooterView:(id)arg1;
- (double)desiredHeightForFooterView;
- (double)desiredHeightForWidth:(double)arg1;
- (Class)footerViewClass;
- (id)initWithSnippet:(id)arg1;
- (void)loadView;
- (void)pickerViewController:(id)arg1 didSelectObject:(id)arg2 fromPicker:(id)arg3;
- (void)pickerViewController:(id)arg1 willDismissPicker:(id)arg2;
- (void)pickerViewController:(id)arg1 willPresentPicker:(id)arg2;
- (bool)usePlatterStyle;
- (id)viewControllerForPickerPresentation:(id)arg1;

@end
