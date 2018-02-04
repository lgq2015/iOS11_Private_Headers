/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLFeatureValue : NSObject <NSCopying> {
    NSObject * _objectValue;
    long long  _type;
    bool  _undefined;
    id  _value;
}

@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) double doubleValue;
@property (nonatomic, readonly) struct __CVBuffer { }*imageBufferValue;
@property (nonatomic, readonly) long long int64Value;
@property (nonatomic, readonly) MLMultiArray *multiArrayValue;
@property (nonatomic, retain) NSObject *objectValue;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (nonatomic, readonly) long long type;
@property (getter=isUndefined, nonatomic, readonly) bool undefined;
@property (retain) id value;

+ (id)featureValueOfType:(long long)arg1 fromObject:(id)arg2 error:(id*)arg3;
+ (id)featureValueWithDictionary:(id)arg1 error:(id*)arg2;
+ (id)featureValueWithDouble:(double)arg1;
+ (id)featureValueWithInt64:(long long)arg1;
+ (id)featureValueWithMultiArray:(id)arg1;
+ (id)featureValueWithPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (id)featureValueWithString:(id)arg1;
+ (id)undefinedFeatureValueWithType:(long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)description;
- (id)dictionaryValue;
- (double)doubleValue;
- (unsigned long long)hash;
- (struct __CVBuffer { }*)imageBufferValue;
- (id)initWithUndefinedValueAndType:(long long)arg1;
- (id)initWithValue:(id)arg1 type:(long long)arg2;
- (long long)int64Value;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFeatureValue:(id)arg1;
- (bool)isUndefined;
- (id)multiArrayValue;
- (id)objectValue;
- (void)setObjectValue:(id)arg1;
- (void)setValue:(id)arg1;
- (id)stringValue;
- (long long)type;
- (id)value;

@end
