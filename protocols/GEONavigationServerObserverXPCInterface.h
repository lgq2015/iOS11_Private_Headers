/* made by EzioChiu.
 */

@protocol GEONavigationServerObserverXPCInterface <NSObject>

@required

- (void)currentRoadNameUpdated:(NSString *)arg1;
- (void)navigationUpdatedWithVoiceVolumeData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithActiveRouteDetailsData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithGuidanceStateData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithNavigationRouteSummaryData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithPositionFromDestinationData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithPositionFromManeuverData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithPositionFromSignData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithRideSelectionData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithStepIndexData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithStepNameInfoData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithTrafficIncidentAlertDetailsData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithTransitSummaryData:(NSData *)arg1;

@end
