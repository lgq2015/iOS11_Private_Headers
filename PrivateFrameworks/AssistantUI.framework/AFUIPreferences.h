/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUIPreferences : NSObject {
    <AFUIPreferencesDelegate> * _delegate;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic) <AFUIPreferencesDelegate> *delegate;

- (void).cxx_destruct;
- (void)_mutateValueForKey:(id)arg1 block:(id /* block */)arg2;
- (bool)boolForKey:(id)arg1;
- (id)delegate;
- (double)doubleForKey:(id)arg1;
- (id)init;
- (id)initWithDefaultsAtURL:(id)arg1;
- (id)initWithDefaultsResource:(id)arg1 withExtension:(id)arg2 inBundle:(id)arg3;
- (long long)integerForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (void)synchronize;

@end
