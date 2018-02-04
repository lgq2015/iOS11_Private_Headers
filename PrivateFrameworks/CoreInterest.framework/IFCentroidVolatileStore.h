/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFCentroidVolatileStore : NSObject <IFCentroidStore, IFCentroidStoreInternal> {
    NSDictionary * centroid;
    <IFVector> * centroidVector;
    NSMutableArray * documents;
    NSCountedSet * features;
    IFCentroidModelParameters * modelParameters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) IFCentroidModelParameters *parameters;
@property (readonly) Class superclass;

+ (id)defaultStore;

- (void).cxx_destruct;
- (id)_documentsContainingFeaturesLike:(id)arg1;
- (id)_featureOccurrencesInDocuments:(id)arg1 interactionType:(long long)arg2;
- (id)_featuresSortedByCountAscending:(bool)arg1;
- (id)_vectorFromDictionary:(id)arg1;
- (bool)addFeatureVectors:(id)arg1;
- (id)centroid;
- (double)centroidScoreForFeature:(id)arg1;
- (id)centroidWithScaling:(id)arg1;
- (unsigned long long)deleteFeatureVectors;
- (unsigned long long)deleteFeatureVectorsInExcessOf:(unsigned long long)arg1;
- (unsigned long long)deleteFeatureVectorsOlderThan:(id)arg1;
- (unsigned long long)deleteFeatureVectorsWithFeatureLike:(id)arg1;
- (unsigned long long)documentCount;
- (unsigned long long)documentCountContainsFeatureLike:(id)arg1;
- (void)enumerateStateWithBlock:(id /* block */)arg1;
- (unsigned long long)featureCount;
- (id)featureForIndex:(unsigned long long)arg1;
- (unsigned long long)indexForFeature:(id)arg1;
- (id)init;
- (id)leastFrequentFeature;
- (unsigned long long)leastFrequentFeatureCount;
- (id)mostFrequentFeature;
- (unsigned long long)mostFrequentFeatureCount;
- (id)parameters;
- (bool)setCentroidFeature:(id)arg1;
- (void)setParameters:(id)arg1;
- (id)vectorFromFeatureVector:(id)arg1;

@end
