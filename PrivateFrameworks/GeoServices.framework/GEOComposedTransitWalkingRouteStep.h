/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedTransitWalkingRouteStep : GEOComposedWalkingRouteStep {
    struct { 
        double latitude; 
        double longitude; 
    }  _endCoordinate;
    <GEOTransitRoutingIncidentMessage> * _routeDetailsIncidentMessage;
    NSArray * _routeDetailsPrimaryArtwork;
    <GEOTransitArtworkDataSource> * _routeDetailsSecondaryArtwork;
    struct { 
        double latitude; 
        double longitude; 
    }  _startCoordinate;
    NSArray * _steppingArtwork;
    <GEOTransitRoutingIncidentMessage> * _steppingIncidentMessage;
    GEOTransitStep * _transitStep;
}

@property (nonatomic, readonly) <GEOTransitRoutingIncidentMessage> *routeDetailsIncidentMessage;
@property (nonatomic, readonly) <GEOTransitRoutingIncidentMessage> *steppingIncidentMessage;

- (void).cxx_destruct;
- (void)_commonInitWithDecoderData:(id)arg1;
- (unsigned int)distance;
- (struct { double x1; double x2; })endGeoCoordinate;
- (id)initWithComposedRoute:(id)arg1 transitStep:(id)arg2 stepIndex:(unsigned long long)arg3 geoStep:(id)arg4 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 maneuverPointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (id)initWithComposedRoute:(id)arg1 transitStep:(id)arg2 stepIndex:(unsigned long long)arg3 startCoordinate:(struct { double x1; double x2; })arg4 endCoordinate:(struct { double x1; double x2; })arg5 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (id)instructions;
- (bool)isArrivalStep;
- (id)routeDetailsIncidentMessage;
- (id)routeDetailsPrimaryArtwork;
- (id)routeDetailsSecondaryArtwork;
- (struct { double x1; double x2; })startGeoCoordinate;
- (id)steppingArtwork;
- (id)steppingIncidentMessage;
- (id)transitStep;

@end
