/* made by EzioChiu.
 */

@protocol MLFeatureArray <NSFastEnumeration>

@required

- (unsigned long long)count;
- (MLFeatureValue *)objectAtIndexedSubscript:(unsigned long long)arg1;

@end
