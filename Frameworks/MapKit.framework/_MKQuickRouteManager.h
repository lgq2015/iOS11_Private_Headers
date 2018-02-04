/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKQuickRouteManager : NSObject {
    double  _closeWalkTravelTime;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    <MKQuickRouteManagerDelegate> * _delegate;
    _MKRouteETAFetcher * _etaFetcher;
    bool  _fetchAllTransportTypes;
    _MKRouteETA * _lastETA;
    NSError * _lastError;
    unsigned long long  _lastPreferredDirectionsType;
    double  _maxDistanceToRequestETA;
    double  _maxWalkingDistance;
    <MKQuickRouteTransportTypeFinding> * _transportTypeFinder;
    NSObject<MKQuickRouteConfigurableView> * _view;
    bool  _viewHasChangedSinceLastUpdate;
}

@property (nonatomic, copy) GEOAutomobileOptions *automobileOptions;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic) <MKQuickRouteManagerDelegate> *delegate;
@property (nonatomic) bool fetchAllTransportTypes;
@property (nonatomic, readonly) bool isOnlyDriving;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic, retain) MKMapItem *originMapItem;
@property (nonatomic, copy) GEOTransitOptions *transitOptions;
@property (nonatomic) <MKQuickRouteTransportTypeFinding> *transportTypeFinder;
@property (getter=isUsingCurrentLocationForOrigin, nonatomic, readonly) bool usingCurrentLocationForOrigin;
@property (nonatomic) NSObject<MKQuickRouteConfigurableView> *view;

+ (double)_maxDistanceToRequestETA;
+ (unsigned long long)counterpartForTransportType:(unsigned long long)arg1;
+ (unsigned long long)directionsTypeForMapItem:(id)arg1 delegate:(id)arg2 mapType:(unsigned long long)arg3;
+ (bool)isLikelyToReturnETAForLocation:(id)arg1;

- (void).cxx_destruct;
- (void)_performWithTransportType:(id /* block */)arg1;
- (void)_resetState;
- (bool)_transportTypeShouldBeSmart;
- (id)automobileOptions;
- (id)bestETAForPreferredDirectionsType:(unsigned long long)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)delegate;
- (id)description;
- (struct CLLocationCoordinate2D { double x1; double x2; })destinationCoordinate;
- (unsigned long long)directionsTypeForMapType:(unsigned long long)arg1;
- (unsigned long long)directionsTypeForOriginCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 destinationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 preferredDirectionsType:(unsigned long long)arg3;
- (bool)fetchAllTransportTypes;
- (unsigned long long)guessTransportTypeForDistance:(double)arg1 preferredDirectionsType:(unsigned long long)arg2;
- (bool)haveETAsForPreferredTransportType:(unsigned long long)arg1;
- (id)init;
- (bool)isOnlyDriving;
- (bool)isUsingCurrentLocationForOrigin;
- (id)mapItem;
- (struct CLLocationCoordinate2D { double x1; double x2; })originCoordinate;
- (id)originMapItem;
- (void)requestNewETAForPreferredTransportType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)routeETAForTransportType:(unsigned long long)arg1;
- (void)setAutomobileOptions:(id)arg1;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchAllTransportTypes:(bool)arg1;
- (void)setMapItem:(id)arg1;
- (void)setOriginMapItem:(id)arg1;
- (void)setTransitOptions:(id)arg1;
- (void)setTransportTypeFinder:(id)arg1;
- (void)setView:(id)arg1;
- (id)transitOptions;
- (id)transportTypeFinder;
- (void)updateETA;
- (id)view;

@end
