/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteHypothesizerUpdater : NSObject <NSSecureCoding> {
    GEOMapRegion * _arrivalMapRegion;
    GEOCommonOptions * _commonOptions;
    GEODirectionsRequest * _currentRequest;
    <GEORouteHypothesizerUpdaterDelegate> * _delegate;
    GEOComposedWaypoint * _destination;
    GEODirectionsRequestFeedback * _feedback;
    bool  _hasArrived;
    bool  _isNavd;
    bool  _isTraveling;
    GEOLocation * _lastMatchedLocation;
    NSDate * _lastRerouteDate;
    unsigned long long  _numThrottledReroutes;
    GEOLocation * _originLocation;
    NSLock * _requestLock;
    NSMutableArray * _rerouteEntries;
    GEOComposedRoute * _route;
    GEORouteAttributes * _routeAttributes;
    GEORouteMatch * _routeMatch;
    double  _score;
    bool  _shouldThrottleReroutes;
    GEOComposedWaypoint * _source;
}

@property (nonatomic) <GEORouteHypothesizerUpdaterDelegate> *delegate;
@property (nonatomic, retain) GEODirectionsRequestFeedback *feedback;
@property (nonatomic, readonly) bool hasArrived;
@property (nonatomic) bool isNavd;
@property (nonatomic, readonly) bool isTraveling;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic, readonly) GEORouteAttributes *routeAttributes;
@property (nonatomic, readonly) GEORouteMatch *routeMatch;
@property (nonatomic, readonly) double score;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_checkForArrival:(id)arg1 routeMatch:(id)arg2;
- (void)_requestNewRouteFromLocation:(id)arg1 usualRouteData:(id)arg2;
- (int)_transportType;
- (void)_updateScoreForLocation:(id)arg1;
- (void)cancelCurrentRequest;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)feedback;
- (bool)hasArrived;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3;
- (bool)isNavd;
- (bool)isTraveling;
- (id)route;
- (id)routeAttributes;
- (id)routeMatch;
- (id)routeMatchForLocation:(id)arg1;
- (double)score;
- (void)setDelegate:(id)arg1;
- (void)setFeedback:(id)arg1;
- (void)setIsNavd:(bool)arg1;
- (void)startUpdatingFromLocation:(id)arg1 existingRoute:(id)arg2 usualRouteData:(id)arg3;
- (void)updateForLocation:(id)arg1;

@end
