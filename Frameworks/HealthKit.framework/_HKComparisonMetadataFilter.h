/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKComparisonMetadataFilter : _HKMetadataFilter {
    id  _value;
}

@property (nonatomic, readonly) id value;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_acceptsOperatorType:(unsigned long long)arg1;
+ (id)filterWithKey:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithKey:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3;
- (bool)acceptsDataObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)value;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)_filterIgnoringPrivateMetadata;
- (id)predicateWithProfile:(id)arg1;

@end
