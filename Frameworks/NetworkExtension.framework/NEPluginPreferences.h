/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPluginPreferences : NSObject {
    NSString * _pluginType;
    struct __SCPreferences { } * _prefs;
}

@property (readonly) NSString *pluginType;
@property struct __SCPreferences { }*prefs;

+ (id)copyIdentifiersOfInstalledVPNApps;
+ (bool)isAppInstalled:(id)arg1;
+ (bool)isEnabledForPluginType:(id)arg1 applicationRemoved:(bool)arg2;
+ (void)removePreferencesForPluginType:(id)arg1;

- (void).cxx_destruct;
- (id)copyAppURL;
- (struct __CFDictionary { }*)copyPersistentDataOfType:(long long)arg1 configurationIdentifier:(id)arg2;
- (void)dealloc;
- (id)initWithPluginType:(id)arg1;
- (bool)isFlagSet:(struct __CFString { }*)arg1;
- (bool)isPluginTypeEnabled;
- (id)pluginType;
- (struct __SCPreferences { }*)prefs;
- (void)setPluginTypeEnabled:(bool)arg1 appURLData:(id)arg2;
- (bool)setPreferences:(struct __CFDictionary { }*)arg1 ofType:(long long)arg2 configurationIdentifier:(id)arg3;
- (void)setPrefs:(struct __SCPreferences { }*)arg1;

@end
