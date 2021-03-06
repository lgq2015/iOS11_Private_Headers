/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSCapabilityManager : NSObject {
    NSMutableDictionary * _overrides;
}

@property (nonatomic, retain) NSMutableDictionary *overrides;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)applicationDisplayIdentifiers;
- (id)capabilityAnswer:(id)arg1;
- (bool)capabilityBoolAnswer:(id)arg1;
- (bool)hasCapabilities:(id)arg1;
- (id)init;
- (id)overrides;
- (id)preferencesCapabilityAnswer:(id)arg1;
- (void)resetOverrides;
- (void)setOverrideValue:(id)arg1 forKey:(id)arg2;
- (void)setOverrides:(id)arg1;
- (id)supportsAutoWhiteBalanceCapability;
- (id)supportsDisplayZoomCapability;
- (id)supportsInEDUModeCapability;
- (id)supportsInStoreDemoModeCapability;
- (id)supportsNightShiftCapability;
- (id)supportsPSShowStorageCapability;
- (id)supportsRaiseToWakeCapability;

@end
