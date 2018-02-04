/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNRouteManager : NSObject <MNLocationManagerObserver> {
    MNActiveRouteDetails * _activeRouteDetails;
    NSArray * _allRoutes;
    NSMutableArray * _alternateRoutes;
    MNActiveRouteInfo * _currentRouteInfo;
    GEORouteSet * _currentRouteSet;
    GEOComposedWaypoint * _originalDestination;
    GEOComposedRoute * _originalRoute;
    MNActiveRouteInfo * _originalRouteInfo;
    GEORoutePreloader * _preloader;
    GEORouteAttributes * _routeAttributes;
    MNRoutePlanningDetails * _routePlanningDetails;
    NSString * _tileLoaderClientIdentifier;
}

@property (nonatomic, readonly) MNActiveRouteDetails *activeRouteDetails;
@property (nonatomic, readonly) NSArray *allRoutes;
@property (nonatomic, readonly) NSArray *alternateRoutes;
@property (nonatomic, readonly) GEOComposedRoute *currentRoute;
@property (nonatomic, readonly) MNActiveRouteInfo *currentRouteInfo;
@property (nonatomic, readonly) GEORouteSet *currentRouteSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOETARoute *etaRoute;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOComposedWaypoint *originalDestination;
@property (nonatomic, readonly) GEOComposedRoute *originalRoute;
@property (nonatomic, readonly) GEORouteAttributes *routeAttributes;
@property (nonatomic, readonly) MNRoutePlanningDetails *routePlanningDetails;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearPreloader;
- (void)_updatePreloaderForNewRoute;
- (id)activeRouteDetails;
- (id)allRoutes;
- (id)alternateRoutes;
- (void)clearCurrentRoute;
- (void)close;
- (id)currentRoute;
- (id)currentRouteInfo;
- (id)currentRouteSet;
- (void)dealloc;
- (id)etaRoute;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)open;
- (id)originalDestination;
- (id)originalRoute;
- (id)routeAttributes;
- (id)routePlanningDetails;
- (void)updateForLocation:(id)arg1;
- (void)updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;
- (bool)updateForRoutePlanningDetails:(id)arg1 outError:(out id*)arg2;
- (void)updateWithAlternateRoutes:(id)arg1;

@end
