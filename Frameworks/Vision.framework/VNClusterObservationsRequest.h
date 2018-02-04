/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNClusterObservationsRequest : VNFaceObservationDrivenClusteringRequest

- (bool)hasCancellationHook;
- (bool)internalCancelInContext:(id)arg1 error:(id*)arg2;
- (bool)internalPerformInContext:(id)arg1 error:(id*)arg2;

@end
