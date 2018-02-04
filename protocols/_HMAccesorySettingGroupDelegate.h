/* made by EzioChiu.
 */

@protocol _HMAccesorySettingGroupDelegate <NSObject>

@required

- (void)_settingGroup:(_HMAccessorySettingGroup *)arg1 didAddSetting:(_HMAccessorySetting *)arg2;
- (void)_settingGroup:(_HMAccessorySettingGroup *)arg1 didAddSettingGroup:(_HMAccessorySettingGroup *)arg2;
- (void)_settingGroup:(_HMAccessorySettingGroup *)arg1 didRemoveSetting:(_HMAccessorySetting *)arg2;
- (void)_settingGroup:(_HMAccessorySettingGroup *)arg1 didRemoveSettingGroup:(_HMAccessorySettingGroup *)arg2;

@end
