/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIHealthSettingsPickerController : NSObject <FIUIHealthSettingsForceUpdatable, UIPickerViewDataSource, UIPickerViewDelegate> {
    bool  _isMetricLocale;
    UIPickerView * _pickerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isMetricLocale;
@property (nonatomic, retain) UIPickerView *pickerView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)forceUpdate;
- (id)init;
- (bool)isMetricLocale;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (void)setIsMetricLocale:(bool)arg1;
- (void)setPickerView:(id)arg1;

@end
