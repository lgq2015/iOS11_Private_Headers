/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIUnitManager : NSObject {
    HKHealthStore * _healthStore;
    NSMutableDictionary * _preferredUnits;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_loadPreferredUnitsFromDefaults;
- (void)_localeDidChange:(id)arg1;
- (void)_notifyUnitPreferencesChanged;
- (id)_preferredHKUnitForQuantityType:(id)arg1;
- (void)_setPreferredHKUnit:(id)arg1 forQuantityType:(id)arg2;
- (void)_storePreferredUnitsInDefaults:(id)arg1;
- (void)_updatePreferredUnits;
- (void)_userPreferencesDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithHealthStore:(id)arg1;
- (void)setPreferredUnitsForTesting:(id)arg1;
- (void)setUserActiveEnergyBurnedUnit:(id)arg1;
- (void)setUserBasalEnergyBurnedUnit:(id)arg1;
- (void)setUserDistanceCyclingUnit:(unsigned long long)arg1;
- (void)setUserDistanceUnit:(unsigned long long)arg1 forDistanceType:(unsigned long long)arg2;
- (void)setUserDistanceWalkingRunningUnit:(unsigned long long)arg1;
- (id)userActiveEnergyBurnedUnit;
- (id)userBasalEnergyBurnedUnit;
- (id)userDistanceCyclingHKUnit;
- (unsigned long long)userDistanceCyclingUnit;
- (id)userDistanceElevationHKUnit;
- (unsigned long long)userDistanceElevationUnit;
- (id)userDistanceHKUnitForDistanceType:(unsigned long long)arg1;
- (unsigned long long)userDistanceUnitForDistanceType:(unsigned long long)arg1;
- (id)userDistanceWalkingRunningHKUnit;
- (unsigned long long)userDistanceWalkingRunningUnit;
- (id)userLapLengthHKUnit;

@end
