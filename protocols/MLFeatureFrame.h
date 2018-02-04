/* made by EzioChiu.
 */

@protocol MLFeatureFrame

@required

- (NSDictionary *)description;
- (unsigned long long)featureCount;
- (id)featureFrameByAddingFrame:(id <MLFeatureFrame>)arg1 error:(id*)arg2;
- (<MLFeatureProvider> *)objectAtIndexedSubscript:(unsigned long long)arg1;
- (<MLFeatureArray> *)objectForKeyedSubscript:(NSString *)arg1;
- (unsigned long long)sampleCount;
- (id)subsetWithFeaturesNamed:(NSArray *)arg1;

@end
