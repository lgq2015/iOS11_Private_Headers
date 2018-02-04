/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADCoreDefaults : NSObject {
    struct __CFString { } * _defaultsBundleID;
    NSMutableDictionary * _factoryDefaults;
}

@property (nonatomic) struct __CFString { }*defaultsBundleID;
@property (nonatomic, retain) NSMutableDictionary *factoryDefaults;

+ (id)_defaultValueForKey:(id)arg1 valueClass:(Class)arg2;
+ (void)_setDefaultValue:(id)arg1 forKey:(id)arg2;
+ (void)addFactoryDefaults:(id)arg1;
+ (id)arrayForKey:(id)arg1;
+ (bool)boolForKey:(id)arg1;
+ (bool)defaultIsSetForKey:(id)arg1;
+ (double)doubleForKey:(id)arg1;
+ (id)factoryDefaults;
+ (long long)integerForKey:(id)arg1;
+ (void)setArray:(id)arg1 forKey:(id)arg2;
+ (void)setBool:(bool)arg1 forKey:(id)arg2;
+ (void)setDouble:(double)arg1 forKey:(id)arg2;
+ (void)setInteger:(long long)arg1 forKey:(id)arg2;
+ (void)setString:(id)arg1 forKey:(id)arg2;
+ (id)sharedInstance;
+ (id)stringForKey:(id)arg1;

- (void).cxx_destruct;
- (struct __CFString { }*)defaultsBundleID;
- (id)factoryDefaults;
- (id)init;
- (void)setDefaultsBundleID:(struct __CFString { }*)arg1;
- (void)setFactoryDefaults:(id)arg1;

@end
