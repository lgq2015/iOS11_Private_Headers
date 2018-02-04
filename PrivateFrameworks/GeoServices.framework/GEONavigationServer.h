/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationServer : NSObject <GEONavigationServerPushStateXPCInterface> {
    NSData * _activeRouteDetailsData;
    NSData * _guidanceStateData;
    NSData * _navigationVoiceVolumeData;
    NSMutableArray * _peers;
    NSData * _positionFromDestinationData;
    NSData * _positionFromManeuverData;
    NSData * _positionFromSignData;
    NSData * _rideSelectionsData;
    NSData * _routeSummaryData;
    NSData * _stepIndexData;
    NSData * _stepNameInfoData;
    NSData * _trafficIncidentAlertDetailsData;
    NSData * _transitSummaryData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (void)_forEachValidPeerProxy:(id /* block */)arg1;
- (void)_requestActiveRouteDetailsDataWithPeer:(id)arg1;
- (void)_requestGuidanceStateWithPeer:(id)arg1;
- (void)_requestNavigationVoiceVolumeWithPeer:(id)arg1;
- (void)_requestPositionFromDestinationWithPeer:(id)arg1;
- (void)_requestPositionFromManeuverWithPeer:(id)arg1;
- (void)_requestPositionFromSignWithPeer:(id)arg1;
- (void)_requestRideSelectionsWithPeer:(id)arg1;
- (void)_requestRouteSummaryWithPeer:(id)arg1;
- (void)_requestStepIndexWithPeer:(id)arg1;
- (void)_requestStepNameInfoWithPeer:(id)arg1;
- (void)_requestTrafficIncidentDetailsDataWithPeer:(id)arg1;
- (void)_requestTransitSummaryWithPeer:(id)arg1;
- (void)_sendMessage:(long long)arg1 data:(id)arg2 toPeer:(id)arg3;
- (void)_updateAllPeersWithMessage:(long long)arg1 data:(id)arg2;
- (void)clearAllData;
- (void)dealloc;
- (id)init;
- (void)setCurrentRoadName:(id)arg1;
- (void)setNavigationVoiceVolumeWithData:(id)arg1;
- (void)setRouteSummaryWithActiveRouteDetailsData:(id)arg1;
- (void)setRouteSummaryWithGuidanceStateData:(id)arg1;
- (void)setRouteSummaryWithNavigationRouteSummaryData:(id)arg1;
- (void)setRouteSummaryWithPositionFromDestinationData:(id)arg1;
- (void)setRouteSummaryWithPositionFromManeuverData:(id)arg1;
- (void)setRouteSummaryWithPositionFromSignData:(id)arg1;
- (void)setRouteSummaryWithRideSelectionsData:(id)arg1;
- (void)setRouteSummaryWithStepIndexData:(id)arg1;
- (void)setRouteSummaryWithStepNameInfoData:(id)arg1;
- (void)setRouteSummaryWithTrafficIncidentAlertDetailsData:(id)arg1;
- (void)setRouteSummaryWithTransitSummaryData:(id)arg1;
- (bool)shouldAcceptNewConnection:(id)arg1 shouldCreateNavigationPeer:(bool)arg2;

@end
