/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationServerPeer : GEONavdPeer <GEONavigationServerRequestStateXPCInterface> {
    GEONavigationServer * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) GEONavigationServer *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)requestActiveRouteDetailsData;
- (void)requestGuidanceState;
- (void)requestNavigationVoiceVolume;
- (void)requestPositionFromDestination;
- (void)requestPositionFromManeuver;
- (void)requestPositionFromSign;
- (void)requestRideSelections;
- (void)requestRouteSummary;
- (void)requestStepIndex;
- (void)requestStepNameInfo;
- (void)requestTrafficIncidentDetailsData;
- (void)requestTransitSummary;
- (void)requestUpdates;
- (void)setDelegate:(id)arg1;

@end
