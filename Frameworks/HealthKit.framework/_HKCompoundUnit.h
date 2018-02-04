/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKCompoundUnit : HKUnit {
    _HKFactorization * _baseUnits;
    _HKDimension * _dimension;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dimensionLock;
}

+ (bool)supportsSecureCoding;
+ (id)unitWithBaseUnits:(id)arg1;

- (void).cxx_destruct;
- (id)_baseUnits;
- (id)_computeBaseUnitReductionAndProportionalSize:(out double*)arg1 withCycleSet:(id)arg2;
- (id)_initWithBaseUnits:(id)arg1;
- (id)dimension;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)unitString;

@end
