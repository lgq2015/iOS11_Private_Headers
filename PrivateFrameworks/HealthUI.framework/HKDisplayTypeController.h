/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDisplayTypeController : NSObject <_HKWheelchairUseCharacteristicCacheObserver> {
    NSArray * _displayTypes;
    NSDictionary * _displayTypesByCategoryIdentifier;
    NSDictionary * _displayTypesByIdentifier;
    NSDictionary * _displayTypesByObjectType;
    _HKWheelchairUseCharacteristicCache * _wheelchairUseCharacteristicCache;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)allDisplayTypes;
- (id)displayTypeForObjectType:(id)arg1;
- (id)displayTypeForObjectTypeUnifyingBloodPressureTypes:(id)arg1;
- (id)displayTypeWithIdentifier:(id)arg1;
- (id)displayTypesForCategoryIdentifier:(long long)arg1;
- (id)init;
- (void)setWheelchairUseCharacteristicCache:(id)arg1;
- (void)wheelchairUseCharacteristicCache:(id)arg1 wheelchairUsageDidChange:(bool)arg2;

@end
