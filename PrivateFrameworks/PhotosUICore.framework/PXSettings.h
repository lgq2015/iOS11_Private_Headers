/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSettings : _UISettings {
    NSMutableSet * _archivedSettings;
    long long  _version;
}

@property (nonatomic) long long version;

+ (id)_defaultsKey;
+ (id)_signatureDictionaryWithDefaultSettings:(id*)arg1;
+ (id)_userDefaults;
+ (id)createSharedInstance;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_resetValuesThatChangedBetweenCurrentDefaultValues:(id)arg1 andArchivedDefaultValues:(id)arg2 defaultSettings:(id)arg3;
- (void)addKeyObserver:(id)arg1;
- (void)addKeyPathObserver:(id)arg1;
- (id)archiveValueForKey:(id)arg1;
- (void)defaultValueDidChangeForKey:(id)arg1;
- (id)parentSettings;
- (void)performPostSaveActions;
- (void)removeKeyObserver:(id)arg1;
- (void)removeKeyPathObserver:(id)arg1;
- (void)save;
- (void)setVersion:(long long)arg1;
- (long long)version;

@end
