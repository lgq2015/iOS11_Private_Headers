/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
 */

@interface FBUISceneUpdateSettingsEvent : FBUISceneEvent {
    FBSSceneSettingsDiff * _diff;
    FBSSceneSettings * _settings;
}

@property (nonatomic, copy) FBSSceneSettings *settings;
@property (nonatomic, retain) FBSSceneSettingsDiff *settingsDiff;

- (void)dealloc;
- (void)setSettings:(id)arg1;
- (void)setSettingsDiff:(id)arg1;
- (id)settings;
- (id)settingsDiff;

@end
