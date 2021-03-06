/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsManagedSource : CFPrefsPlistSource

- (void)alreadylocked_setValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3 from:(id)arg4;
- (id)initWithDomain:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 byHost:(bool)arg3 containingPreferences:(id)arg4;
- (bool)managed;
- (long long)sendMessageSettingValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;

@end
