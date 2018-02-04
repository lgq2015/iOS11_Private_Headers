/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAbstractRangeStatusItem : HFStatusItem

+ (id)_defaultValueFormatter;
+ (id)_localizedRangeStringForKey:(id)arg1;
+ (unsigned long long)abstractCurrentModeInResponse:(id)arg1;
+ (unsigned long long)abstractTargetModeInResponse:(id)arg1;
+ (id)controllableServiceTypes;
+ (id)currentModeCharacteristicTypes;
+ (id)currentValueCharacteristicType;
+ (id)customValueFormatter;
+ (id)displayTitleStringForService:(id)arg1 withResponse:(id)arg2 multipleServices:(bool)arg3 updateOptions:(id)arg4;
+ (id /* block */)displayValueComparator;
+ (bool)isPercentRange;
+ (id)localizationKeyPrefix;
+ (id)maximumTargetValueCharacteristicType;
+ (id)minimumTargetValueCharacteristicType;
+ (id)sensorServiceTypes;
+ (id)targetModeCharacteristicTypes;
+ (id)targetValueCharacteristicType;

- (id)_subclass_updateWithOptions:(id)arg1;

@end
