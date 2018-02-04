/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKQuantity : _DKObject <_DKHasComparableValue, _DKHasObjectType, _DKHasPrimaryValue> {
    double  _doubleValue;
    _DKQuantityType * _quantityType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double doubleValue;
@property (readonly) unsigned long long hash;
@property (retain) _DKQuantityType *quantityType;
@property (readonly) Class superclass;

+ (id)entityName;
+ (id)fromPBCodable:(id)arg1;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(bool)arg2 cache:(id)arg3;
+ (id)quantityWithDouble:(double)arg1 type:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compareValue:(id)arg1;
- (bool)copyToManagedObject:(id)arg1;
- (id)description;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDouble:(double)arg1 type:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)objectType;
- (id)primaryValue;
- (id)quantityType;
- (void)setDoubleValue:(double)arg1;
- (void)setQuantityType:(id)arg1;
- (id)stringValue;
- (id)toPBCodable;
- (long long)typeCode;

@end
