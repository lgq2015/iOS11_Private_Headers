/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKCompoundFilter : _HKFilter {
    unsigned long long  _compoundType;
    NSArray * _subfilters;
}

@property (nonatomic, readonly) unsigned long long compoundType;
@property (nonatomic, readonly, copy) NSArray *subfilters;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)filterWithSubfilters:(id)arg1 compoundType:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithZone:(struct _NSZone { }*)arg1 subfilters:(id)arg2;
- (id)_subfilters;
- (bool)acceptsDataObject:(id)arg1;
- (unsigned long long)compoundType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)subfilters;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;

@end
