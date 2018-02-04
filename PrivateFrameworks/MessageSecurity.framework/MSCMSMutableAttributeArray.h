/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

@interface MSCMSMutableAttributeArray : NSMutableArray {
    NSMutableArray * _attributes;
    struct Attribute { struct heim_oid { unsigned long long x_1_1_1; unsigned int *x_1_1_2; } x1; struct Attribute_value { unsigned int x_2_1_1; struct heim_base_data {} *x_2_1_2; } x2; } * _encodedAttributes;
    NSMutableArray * _genericAttributes;
}

@property (retain) NSMutableArray *attributes;
@property struct Attribute { struct heim_oid { unsigned long long x_1_1_1; unsigned int *x_1_1_2; } x1; struct Attribute_value { unsigned int x_2_1_1; struct heim_base_data {} *x_2_1_2; } x2; }*encodedAttributes;
@property (retain) NSMutableArray *genericAttributes;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (id)attributes;
- (id)calculateAttributesWithDigest:(id)arg1 error:(id*)arg2;
- (unsigned long long)count;
- (void)dealloc;
- (struct Attribute { struct heim_oid { unsigned long long x_1_1_1; unsigned int *x_1_1_2; } x1; struct Attribute_value { unsigned int x_2_1_1; struct heim_base_data {} *x_2_1_2; } x2; }*)encodeAttributesWithError:(id*)arg1;
- (struct Attribute { struct heim_oid { unsigned long long x_1_1_1; unsigned int *x_1_1_2; } x1; struct Attribute_value { unsigned int x_2_1_1; struct heim_base_data {} *x_2_1_2; } x2; }*)encodedAttributes;
- (id)genericAttributes;
- (id)getAttributesWithType:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)removeAttributes:(id)arg1;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)reset;
- (void)setAttributes:(id)arg1;
- (void)setEncodedAttributes:(struct Attribute { struct heim_oid { unsigned long long x_1_1_1; unsigned int *x_1_1_2; } x1; struct Attribute_value { unsigned int x_2_1_1; struct heim_base_data {} *x_2_1_2; } x2; }*)arg1;
- (void)setGenericAttributes:(id)arg1;

@end
