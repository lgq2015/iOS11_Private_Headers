/* made by EzioChiu.
 */

@protocol IFCentroidStoreCounting <NSObject>

@required

- (unsigned long long)documentCount;
- (unsigned long long)documentCountContainsFeatureLike:(IFFeatureMatch *)arg1;
- (unsigned long long)featureCount;
- (IFFeature *)leastFrequentFeature;
- (unsigned long long)leastFrequentFeatureCount;
- (IFFeature *)mostFrequentFeature;
- (unsigned long long)mostFrequentFeatureCount;

@end
