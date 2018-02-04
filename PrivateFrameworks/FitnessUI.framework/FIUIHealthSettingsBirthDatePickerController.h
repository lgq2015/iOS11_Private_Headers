/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIHealthSettingsBirthDatePickerController : NSObject <FIUIHealthSettingsForceUpdatable> {
    id /* block */  _dateOfBirthUpdateHandler;
    FIUIHealthSettingsDatePicker * _datePickerView;
}

@property (nonatomic, copy) id /* block */ dateOfBirthUpdateHandler;
@property (nonatomic, retain) FIUIHealthSettingsDatePicker *datePickerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)dateOfBirthUpdateHandler;
- (id)datePickerView;
- (void)forceUpdate;
- (id)init;
- (void)setDateOfBirth:(id)arg1;
- (void)setDateOfBirthUpdateHandler:(id /* block */)arg1;
- (void)setDatePickerView:(id)arg1;

@end
