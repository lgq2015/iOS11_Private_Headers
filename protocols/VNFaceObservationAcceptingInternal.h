/* made by EzioChiu.
 */

@protocol VNFaceObservationAcceptingInternal <VNFaceObservationAccepting, VNObservationsCacheKeyProviding>

@required

- (bool)getOptionalValidatedInputFaceObservations:(id*)arg1 clippedToRegionOfInterest:(bool)arg2 error:(id*)arg3;
- (NSArray *)validatedInputFaceObservationsClippedToRegionOfInterest:(bool)arg1 error:(id*)arg2;

@end
