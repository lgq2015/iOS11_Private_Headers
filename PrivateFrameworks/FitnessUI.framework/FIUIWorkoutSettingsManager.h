/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIWorkoutSettingsManager : NSObject {
    NPSDomainAccessor * _domainAccessor;
    NSMutableArray * _enabledMetrics;
    NSMutableDictionary * _settingOverridesByMetric;
    NSMutableDictionary * _settingsByActivityType;
    NPSManager * _syncManager;
    FIUIWorkoutActivityType * _workoutActivityType;
}

@property (nonatomic, retain) NPSDomainAccessor *domainAccessor;
@property (nonatomic, retain) NPSManager *syncManager;

- (void).cxx_destruct;
- (void)_migratePaceViewSettingIfNeeded;
- (void)_readFromDomain;
- (void)_writeToDomain;
- (long long)disabledIndexForMetricType:(unsigned long long)arg1;
- (id)domainAccessor;
- (id)init;
- (id)initWithWorkoutActivityType:(id)arg1;
- (bool)isMetricEnabled:(unsigned long long)arg1;
- (void)moveMetricType:(unsigned long long)arg1 toEnabledIndex:(long long)arg2;
- (id)orderedDisabledMetrics;
- (id)orderedEnabledAndSupportedMetrics;
- (id)orderedEnabledMetrics;
- (id)orderedSupportedMetrics;
- (void)reloadMetrics;
- (void)setDomainAccessor:(id)arg1;
- (void)setEnabled:(bool)arg1 forMetricType:(unsigned long long)arg2 didChange:(bool*)arg3;
- (void)setSyncManager:(id)arg1;
- (id)supportedMetrics;
- (id)syncManager;

@end
