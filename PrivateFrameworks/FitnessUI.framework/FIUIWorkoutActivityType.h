/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIWorkoutActivityType : NSObject <NSCoding> {
    unsigned long long  _auxiliaryTypeIdentifier;
    unsigned long long  _identifier;
    bool  _isIndoor;
    NSDictionary * _metadata;
}

@property (nonatomic, readonly) unsigned long long auxiliaryTypeIdentifier;
@property (nonatomic, readonly) unsigned long long effectiveTypeIdentifier;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) bool isCategorizedOtherWorkout;
@property (nonatomic, readonly) bool isIndoor;
@property (nonatomic, readonly) HKQuantity *lapLength;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) long long swimmingLocationType;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(bool)arg2;
+ (id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(bool)arg2 metadata:(id)arg3;
+ (id)activityTypeWithWorkout:(id)arg1;
+ (id)possibleActivityTypesForIdentifier:(unsigned long long)arg1 locationType:(long long)arg2 swimmingLocationType:(long long)arg3 wheelchairUser:(bool)arg4;
+ (id)supportedActivityTypesWithIsWheelchairUser:(bool)arg1;
+ (id)wheelchairActivityTypes;

- (void).cxx_destruct;
- (id)_defaultEnabledMetricsForActivityType:(unsigned long long)arg1;
- (id)_indoorDefaultEnabledMetricsForActivityType:(unsigned long long)arg1;
- (id)_machineProvidedMetrics;
- (id)_metricsForSwimmingWithLocationType:(long long)arg1;
- (id)activityTypeByAddingLapLength:(double)arg1;
- (id)allAvailableMetrics;
- (id)allAvailableMetricsWithIsMachineWorkout:(bool)arg1;
- (id)appendMachineMetricsIfPossibleToMetrics:(id)arg1 maxNumMetrics:(long long)arg2;
- (unsigned long long)auxiliaryTypeIdentifier;
- (id)defaultEnabledMetrics;
- (id)description;
- (unsigned long long)effectiveTypeIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasLocationTypePool;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(bool)arg2;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(bool)arg2 metadata:(id)arg3;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(bool)arg2 metadata:(id)arg3 auxiliaryTypeIdentifier:(unsigned long long)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isAvailableMetricType:(unsigned long long)arg1 withIsMachineWorkout:(bool)arg2;
- (bool)isCategorizedOtherWorkout;
- (bool)isEqual:(id)arg1;
- (bool)isIndoor;
- (id)lapLength;
- (id)localizedName;
- (id)localizedNameComponents;
- (id)metadata;
- (long long)swimmingLocationType;
- (id)uniqueIdentifier;

@end
