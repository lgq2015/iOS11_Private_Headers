/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKETAProvider : NSObject <MKLocationManagerObserver, MKQuickRouteConfigurableView, MKQuickRouteManagerDelegate, MKQuickRouteTransportTypeFinding> {
    bool  _active;
    GEOAutomobileOptions * _automobileOptions;
    CLLocation * _currentLocation;
    <MKETAProviderDelegate> * _delegate;
    bool  _distanceOrETAWasFound;
    NSString * _distanceTextItem;
    unsigned long long  _etaTransportType;
    double  _etaTravelTime;
    NSNumber * _lastTransportTypeFound;
    <GEOTransitLineItem> * _lineItem;
    MKMapItem * _nearestStationItem;
    NSHashTable * _observers;
    NSLock * _observersLock;
    <_MKPlaceItem> * _placeItem;
    _MKQuickRouteManager * _quickRouteManager;
    NSTimer * _refreshTimer;
    GEOTransitOptions * _transitOptions;
}

@property (nonatomic, retain) GEOAutomobileOptions *automobileOptions;
@property (nonatomic, readonly) CLLocation *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKETAProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *distanceString;
@property (nonatomic, readonly) unsigned long long etaTransportType;
@property (nonatomic, readonly) double etaTravelTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOTransitLineItem> *lineItem;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSLock *observersLock;
@property (nonatomic, readonly) <_MKPlaceItem> *placeItem;
@property (readonly) Class superclass;
@property (nonatomic, retain) GEOTransitOptions *transitOptions;
@property (nonatomic, readonly) NSNumber *transportTypePreferenceNumber;

- (void).cxx_destruct;
- (bool)_areDistanceAndETAInformationAvailable;
- (void)_cancelTimer;
- (void)_commonInit;
- (void)_configureETAForMapItem:(id)arg1;
- (void)_notifyETAAllObservers;
- (void)_notifyLocationAllObservers;
- (void)_refreshTimer;
- (bool)_shouldUpdateETAForMapView:(id)arg1;
- (void)_startTimer;
- (void)_updateETA;
- (void)_updateETADisplayWithTransportType:(unsigned long long)arg1 travelTime:(double)arg2 distance:(double)arg3;
- (void)_updateETAHandler:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)automobileOptions;
- (void)cancel;
- (void)configureWithNearestStationMapItem:(id)arg1;
- (id)currentLocation;
- (id)currentMapItem;
- (void)dealloc;
- (id)delegate;
- (id)distanceString;
- (unsigned long long)etaTransportType;
- (double)etaTravelTime;
- (void)findDirectionsTypeForOriginCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 destinationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 handler:(id /* block */)arg3;
- (id)initWithLineItem:(id)arg1;
- (id)initWithPlaceItem:(id)arg1;
- (id)lineItem;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (id)observers;
- (id)observersLock;
- (id)placeItem;
- (void)quickRouteManager:(id)arg1 didUpdateETA:(id)arg2 error:(id)arg3 animated:(bool)arg4;
- (bool)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;
- (bool)quickRouteShouldOnlyUseAutomobile;
- (void)removeObserver:(id)arg1;
- (void)setAutomobileOptions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setObserversLock:(id)arg1;
- (void)setTransitOptions:(id)arg1;
- (void)start;
- (id)transitOptions;
- (id)transportTypePreferenceNumber;

@end
