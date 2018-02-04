/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingSetBooleanPreference : SASettingSetBool

@property (nonatomic, copy) NSString *settingKey;

+ (id)setBooleanPreference;
+ (id)setBooleanPreferenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setSettingKey:(id)arg1;
- (id)settingKey;

@end
