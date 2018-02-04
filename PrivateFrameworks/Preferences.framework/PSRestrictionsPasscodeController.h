/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSRestrictionsPasscodeController : NSObject

+ (id)_generateSalt;
+ (id)_keychainPasswordForRestrictions;
+ (void)_removeKeychainPasswordForRestrictions;
+ (id)_restrictionPasswordDictionary;
+ (bool)legacyRestrictionsInEffect;
+ (void)migrateRestrictionsPasscode;
+ (id)newHashDataForPassword:(id)arg1 andSalt:(id)arg2;
+ (id)passwordForRestrictions;
+ (void)removePasswordForRestrictions;
+ (id)saltForRestrictions;
+ (void)setPIN:(id)arg1;
+ (void)setPasswordForRestrictions:(id)arg1;
+ (bool)settingEnabled;
+ (bool)validatePIN:(id)arg1;

@end
