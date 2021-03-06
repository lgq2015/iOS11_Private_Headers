/* made by EzioChiu.
 */

@protocol IFCentroidStoreInternal <IFCentroidStore, IFCentroidStoreCounting>

@required

- (<IFVector> *)centroid;
- (double)centroidScoreForFeature:(IFFeature *)arg1;
- (<IFVector> *)centroidWithScaling:(NSDictionary *)arg1;
- (void)enumerateStateWithBlock:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, IFFeature *, unsigned long long, NSDictionary *, id*, bool, void*
- (IFFeature *)featureForIndex:(unsigned long long)arg1;
- (unsigned long long)indexForFeature:(IFFeature *)arg1;
- (IFCentroidModelParameters *)parameters;
- (bool)setCentroidFeature:(IFFeature *)arg1;
- (void)setParameters:(IFCentroidModelParameters *)arg1;
- (<IFVector> *)vectorFromFeatureVector:(IFFeatureVector *)arg1;

@end
