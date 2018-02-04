/* made by EzioChiu.
 */

@protocol IFCentroidModel <NSObject>

@required

+ (<IFCentroidModel> *)modelWithStore:(id <IFCentroidStore>)arg1 parameters:(IFCentroidModelParameters *)arg2;

- (NSArray *)centroid;
- (IFCentroidModelParameters *)parameters;
- (double)scoreForFeatureVector:(IFFeatureVector *)arg1 scoringParameters:(IFCentroidScoringParameters *)arg2;
- (<IFCentroidStore> *)store;
- (bool)update;

@end
