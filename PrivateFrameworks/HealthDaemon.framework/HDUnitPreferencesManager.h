/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDUnitPreferencesManager : NSObject {
    NSMutableDictionary * _defaultPreferredUnits;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _resourceQueue;
    NSDictionary * _unitPreferences;
}

- (void).cxx_destruct;
- (id)_authorizationStatusesForTypes:(id)arg1 authorizationServer:(id)arg2 error:(id*)arg3;
- (void)_localeDidChange:(id)arg1;
- (void)_persistUnitPreferenceForType:(id)arg1 unit:(id)arg2;
- (id)_quantityTypeFromKeyString:(id)arg1;
- (id)_queue_defaultUnitForType:(id)arg1;
- (id)_queue_generateUnitPreferences:(id*)arg1;
- (void)_queue_notifyObserversWithUnitPreferences;
- (id)_queue_unitForType:(id)arg1 preferencesDictionary:(id)arg2;
- (id)_queue_unitPreferenceDictionaryWithError:(id*)arg1;
- (void)_queue_updateUnitPreferenceCacheWithUnit:(id)arg1 type:(id)arg2;
- (id)_stringFromQuantityType:(id)arg1;
- (id)_unitFromValueString:(id)arg1 quantityType:(id)arg2;
- (id)_unitPreferencesDictionaryFromKeyValueDictionary:(id)arg1;
- (void)_unitPreferencesDidChange;
- (void)addUnitPreferenceObserver:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)removeUnitPreferenceObserver:(id)arg1;
- (bool)setPreferredUnit:(id)arg1 forType:(id)arg2 error:(id*)arg3;
- (void)setPreferredUnitToDefaultIfNotSetForType:(id)arg1;
- (id)unitPreferencesDictionaryForTypes:(id)arg1 authorizationServer:(id)arg2 error:(id*)arg3;
- (id)unitTesting_preferredUnitForType:(id)arg1 error:(id*)arg2;

@end
