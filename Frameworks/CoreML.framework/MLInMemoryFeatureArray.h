/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLInMemoryFeatureArray : MLFeatureArray <NSCopying> {
    NSArray * _values;
}

@property (readonly) NSArray *valueArray;

+ (id)convertToFeatureValues:(id)arg1 ofType:(long long)arg2 error:(id*)arg3;
+ (id)featureArrayWithArray:(id)arg1 description:(id)arg2 error:(id*)arg3;
+ (id)featureArrayWithArray:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (id)initWithFeatureValues:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)valueArray;

@end
