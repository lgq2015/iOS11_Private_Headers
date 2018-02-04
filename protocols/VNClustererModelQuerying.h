/* made by EzioChiu.
 */

@protocol VNClustererModelQuerying

@required

- (NSSet *)allClusteredFaceIdsAndReturnError:(id*)arg1;
- (NSArray *)clusteredFaceIdsForClusterContainingFaceId:(NSNumber *)arg1 error:(id*)arg2;
- (NSNumber *)distanceBetweenClustersWithFaceId:(NSNumber *)arg1 andFaceId:(NSNumber *)arg2 error:(id*)arg3;
- (NSDictionary *)distanceBetweenLevel1Clusters:(NSArray *)arg1 error:(id*)arg2;
- (NSDictionary *)getDistances:(NSArray *)arg1 to:(NSArray *)arg2 error:(id*)arg3;
- (NSArray *)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:(NSArray *)arg1 error:(id*)arg2;
- (NSNumber *)maximumFaceIdInModelAndReturnError:(id*)arg1;
- (NSArray *)suggestionsForClustersWithFaceIds:(NSDictionary *)arg1 affinityThreshold:(float)arg2 error:(id*)arg3;

@end