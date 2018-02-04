/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNGetDistancesRequest : VNFaceObservationDrivenClusteringRequest {
    NSArray * _clusterIDs;
}

@property (nonatomic, readonly, copy) NSArray *clusterIDs;

- (void).cxx_destruct;
- (id)clusterIDs;
- (id)initWithFaceObservations:(id)arg1 clusterIDs:(id)arg2;
- (id)initWithFaceObservations:(id)arg1 clusterIDs:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)internalPerformInContext:(id)arg1 error:(id*)arg2;
- (id)newDefaultRequestInstance;

@end
