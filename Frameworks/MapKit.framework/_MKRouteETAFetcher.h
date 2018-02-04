/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKRouteETAFetcher : NSObject {
    GEOAutomobileOptions * _automobileOptions;
    NSMutableDictionary * _etaResults;
    MKDirections * _inProgressETAUpdate;
    bool  _lastETAUpdateHadError;
    double  _lastRequestTime;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _lastUpdatedETAOriginCoordinate;
    double  _lastUpdatedETATime;
    MKMapItem * _mapItem;
    bool  _optionsHaveChangedSinceLastUpdate;
    MKMapItem * _originMapItem;
    double  _staleDistance;
    double  _staleTimeInterval;
    GEOTransitOptions * _transitOptions;
}

@property (nonatomic, copy) GEOAutomobileOptions *automobileOptions;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } destinationCoordinate;
@property (nonatomic, readonly) NSMutableDictionary *etaResults;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } originCoordinate;
@property (nonatomic, retain) MKMapItem *originMapItem;
@property (nonatomic, copy) GEOTransitOptions *transitOptions;

- (void).cxx_destruct;
- (void)_didUpdateETAResult;
- (void)_resetState;
- (id)automobileOptions;
- (void)dealloc;
- (struct CLLocationCoordinate2D { double x1; double x2; })destinationCoordinate;
- (id)etaResults;
- (void)expireETAsIfNoLongerValid;
- (id)init;
- (void)invalidateETAForTransportType:(unsigned long long)arg1;
- (bool)isUsingCurrentLocationForOrigin;
- (bool)isValidETA:(id)arg1;
- (id)mapItem;
- (struct CLLocationCoordinate2D { double x1; double x2; })originCoordinate;
- (id)originMapItem;
- (void)requestNewETAForTransportType:(unsigned long long)arg1 additionalTransportTypes:(id)arg2 completion:(id /* block */)arg3;
- (id)routeETAForTransportType:(unsigned long long)arg1;
- (void)setAutomobileOptions:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setOriginMapItem:(id)arg1;
- (void)setTransitOptions:(id)arg1;
- (bool)shouldUpdateEstimatedTravelTimeForNewOrigin:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)transitOptions;

@end
