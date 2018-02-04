/* made by EzioChiu.
 */

@protocol IFVector <NSObject, NSCopying, IFVectorOperating>

@required

+ (<IFVector> *)ones:(unsigned long long)arg1;
+ (<IFVector> *)vectorWithElements:(double*)arg1 length:(unsigned long long)arg2;
+ (<IFVector> *)zeros:(unsigned long long)arg1;

- (unsigned long long)length;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (double*)vector;

@end
