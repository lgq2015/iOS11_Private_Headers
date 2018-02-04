/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKDevicePropertyFilter : _HKFilter {
    NSSet * _allowedValues;
    NSString * _keyPath;
    NSString * _propertyKey;
}

@property (nonatomic, readonly) NSSet *allowedValues;
@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) NSString *propertyKey;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_acceptsOperatorType:(unsigned long long)arg1;
+ (id)_keyPathForProperty:(id)arg1;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithDeviceProperty:(id)arg1 allowedValues:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithKey:(id)arg1 allowedValues:(id)arg2;
- (bool)acceptsDataObject:(id)arg1;
- (id)allowedValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (id)propertyKey;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)_devicesWithProfile:(id)arg1 error:(id*)arg2;
- (id)predicateWithProfile:(id)arg1;

@end
