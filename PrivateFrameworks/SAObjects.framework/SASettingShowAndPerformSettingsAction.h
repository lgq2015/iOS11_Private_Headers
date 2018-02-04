/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingShowAndPerformSettingsAction : SABaseClientBoundCommand

@property (nonatomic, retain) <SASettingSettingsAction> *settingsAction;

+ (id)showAndPerformSettingsAction;
+ (id)showAndPerformSettingsActionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setSettingsAction:(id)arg1;
- (id)settingsAction;

@end
