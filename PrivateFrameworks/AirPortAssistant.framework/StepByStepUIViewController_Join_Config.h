/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface StepByStepUIViewController_Join_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {
    int  deviceKind;
    NSString * personalizedBaseName;
    unsigned int  productID;
    bool  supportsSpruce;
}

@property (nonatomic, retain) NSString *personalizedBaseName;

- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)personalizedBaseName;
- (void)prepareParams;
- (void)primaryActionSelected:(bool)arg1;
- (void)selectedDeviceUpdated;
- (void)setPersonalizedBaseName:(id)arg1;
- (void)setupDevices;
- (void)setupEditableBaseStationName;
- (void)setupHeaderAndFooter;
- (void)setupTable;
- (bool)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4;
- (bool)shouldEnableNextButton;
- (bool)showMoreOptions;
- (void)syncTopoUIForTarget:(id)arg1 andSource:(id)arg2 andNetwork:(id)arg3 connectionType:(id)arg4;
- (void)textFieldDidChangeAtIndexPath:(id)arg1;
- (void)updateNavigationButtons;
- (void)validateAndUpdateNextButton;

@end
