/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSDNDSettingsDetail : NSObject <PSSettingsBoolDetail>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)iconImage;
+ (bool)isEnabled;
+ (void)loadStateWithCompletion:(id /* block */)arg1;
+ (id)preferencesURL;
+ (void)setEnabled:(bool)arg1;

@end
