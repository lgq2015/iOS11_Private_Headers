/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
 */

@interface FBUISceneUpdateClientSettingsEvent : FBUISceneEvent {
    FBSSceneClientSettingsDiff * _diff;
    FBSSceneClientSettings * _settings;
}

@property (nonatomic, copy) FBSSceneClientSettings *settings;
@property (nonatomic, retain) FBSSceneClientSettingsDiff *settingsDiff;

- (void)dealloc;
- (void)setSettings:(id)arg1;
- (void)setSettingsDiff:(id)arg1;
- (id)settings;
- (id)settingsDiff;

@end