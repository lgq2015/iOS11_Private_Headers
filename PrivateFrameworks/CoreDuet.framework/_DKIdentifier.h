/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKIdentifier : _DKObject <_DKHasComparableValue, _DKHasObjectType, _DKHasPrimaryValue> {
    _DKIdentifierType * _identifierType;
    NSString * _stringValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) _DKIdentifierType *identifierType;
@property (retain) NSString *stringValue;
@property (readonly) Class superclass;

+ (id)_identifierFromManagedObject:(id)arg1 readMetadata:(bool)arg2 cache:(id)arg3;
+ (id)entityName;
+ (id)fromPBCodable:(id)arg1;
+ (id)identifierWithString:(id)arg1 type:(id)arg2;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(bool)arg2 cache:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compareValue:(id)arg1;
- (bool)copyToManagedObject:(id)arg1;
- (id)description;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (id)identifierType;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 type:(id)arg2;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (id)objectType;
- (id)primaryValue;
- (void)setIdentifierType:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (id)toPBCodable;
- (long long)typeCode;

@end
