/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WeatherInMemoryDefaults : NSObject <WeatherPreferencesPersistence> {
    NSMutableDictionary * _inMemoryStore;
    bool  _synchronizeWasCalled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableDictionary *inMemoryStore;
@property (readonly) Class superclass;
@property (readonly) bool synchronizeWasCalled;

- (void).cxx_destruct;
- (id)arrayForKey:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)inMemoryStore;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setInMemoryStore:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (bool)synchronize;
- (bool)synchronizeWasCalled;

@end
