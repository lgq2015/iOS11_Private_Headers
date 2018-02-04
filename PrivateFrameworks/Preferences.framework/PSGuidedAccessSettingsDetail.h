/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSGuidedAccessSettingsDetail : NSObject <PSSettingsDetail>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)enterGuidedAccessMode;
+ (unsigned long long)guidedAccessAvailability;
+ (bool)guidedAccessHasPasscode;
+ (id)iconImage;
+ (id)preferencesURL;
+ (void)setGuidedAccessSwitchEnabled:(bool)arg1;

@end
