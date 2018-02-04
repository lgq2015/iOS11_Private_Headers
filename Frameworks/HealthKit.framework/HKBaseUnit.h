/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKBaseUnit : HKUnit <_HKFactor> {
    NSString * _prefix;
    double  _proportionalSize;
    NSString * _root;
    bool  _uniqued;
    NSString * _unitString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _HKBaseDimension *dimension;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double proportionalSize;
@property (readonly) Class superclass;

+ (id)_rootUnitWithDefinition:(struct { char *x1; bool x2; char *x3; double x4; double x5; bool x6; })arg1;
+ (id)_uniquedRootUnit:(id)arg1;
+ (id)_uniquedRootUnitFromDefinition:(struct { char *x1; bool x2; char *x3; double x4; double x5; bool x6; })arg1;
+ (id)_uniquedUnitWithPrefix:(id)arg1 conversionConstant:(id)arg2 rootUnit:(id)arg3;
+ (id)_uniquedUnitWithPrefix:(id)arg1 rootUnit:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)unitFromString:(id)arg1;

- (void).cxx_destruct;
- (id)_baseUnits;
- (id)_computeBaseUnitReductionAndProportionalSize:(out double*)arg1 withCycleSet:(id)arg2;
- (id)_initWithUnitString:(id)arg1 proportionalSize:(double)arg2 scaleOffset:(double)arg3;
- (id)_unitByPrefixing:(id)arg1 withConversionConstant:(id)arg2;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)dimension;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (double)proportionalSize;
- (id)unitString;

@end
