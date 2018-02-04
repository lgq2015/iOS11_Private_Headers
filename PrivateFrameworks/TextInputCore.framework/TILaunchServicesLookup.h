/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TILaunchServicesLookup : NSObject <TIKeyboardActivityObserving> {
    NSArray * _cache;
    NSDate * _lastCacheUpdate;
}

@property (nonatomic, retain) NSArray *cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastCacheUpdate;
@property (readonly) Class superclass;

+ (void)disableForTesting:(bool)arg1;
+ (void)enumerateInstalledApplicationNames:(id /* block */)arg1;
+ (id)genreIDsForApplicationIdentifier:(id)arg1;
+ (id)lookupAppNames;
+ (id)sharedInstance;

- (id)appNames;
- (id)cache;
- (void)cacheNames:(id)arg1;
- (void)dealloc;
- (void)enumerateAppNames:(id /* block */)arg1;
- (void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;
- (id)init;
- (void)keyboardActivityDidTransition:(id)arg1;
- (id)lastCacheUpdate;
- (void)resetCache;
- (void)setCache:(id)arg1;
- (void)setLastCacheUpdate:(id)arg1;
- (id)tryCache;

@end
