/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNCommuteDestination : NSObject <NSCopying, NSSecureCoding> {
    GEODirectionsRequest * _directionsRequest;
    GEOETATrafficUpdateResponse * _etaResponse;
    GEOETARoute * _etaRoute;
    bool  _invalid;
    MNLocation * _lastLocation;
    MNLocation * _lastMatchedLocation;
    GEOComposedRoute * _nonRecommendedRoute;
    MNObserverHashTable * _observers;
    double  _remainingDistance;
    double  _remainingTime;
    GEOComposedRoute * _route;
    GEORouteSet * _routeSet;
    long long  _score;
    NSDictionary * _scores;
    MNCommuteDestinationSuggestion * _suggestion;
}

@property (readonly) bool canCalculateETA;
@property (readonly) bool canGetETARoute;
@property (nonatomic, retain) GEODirectionsRequest *directionsRequest;
@property (nonatomic, retain) GEOETATrafficUpdateResponse *etaResponse;
@property (nonatomic, retain) GEOETARoute *etaRoute;
@property (nonatomic, readonly) double geodesicDistance;
@property (nonatomic) bool invalid;
@property (nonatomic, retain) MNLocation *lastLocation;
@property (nonatomic, retain) MNLocation *lastMatchedLocation;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) GEOComposedRoute *nonRecommendedRoute;
@property (retain) MNObserverHashTable *observers;
@property (nonatomic) double remainingDistance;
@property (nonatomic) double remainingTime;
@property (nonatomic, retain) GEOComposedRoute *route;
@property (nonatomic, retain) GEORouteSet *routeSet;
@property (nonatomic) long long score;
@property (nonatomic, retain) NSDictionary *scores;
@property (readonly) NSString *shortDescription;
@property (nonatomic, retain) MNCommuteDestinationSuggestion *suggestion;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) GEOComposedWaypoint *waypoint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (bool)canCalculateETA;
- (bool)canGetETARoute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)directionsRequest;
- (void)encodeWithCoder:(id)arg1;
- (id)etaResponse;
- (id)etaRoute;
- (double)geodesicDistance;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)invalid;
- (bool)isEqual:(id)arg1;
- (id)lastLocation;
- (id)lastMatchedLocation;
- (id)name;
- (id)nonRecommendedRoute;
- (id)observers;
- (double)remainingDistance;
- (double)remainingTime;
- (void)removeObserver:(id)arg1;
- (id)route;
- (id)routeSet;
- (long long)score;
- (id)scores;
- (void)setDirectionsRequest:(id)arg1;
- (void)setEtaResponse:(id)arg1;
- (void)setEtaRoute:(id)arg1;
- (void)setInvalid:(bool)arg1;
- (void)setLastLocation:(id)arg1;
- (void)setLastMatchedLocation:(id)arg1;
- (void)setNonRecommendedRoute:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setRemainingDistance:(double)arg1;
- (void)setRemainingTime:(double)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteSet:(id)arg1;
- (void)setScore:(long long)arg1;
- (void)setScores:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (id)shortDescription;
- (id)suggestion;
- (id)uniqueIdentifier;
- (void)updateFrom:(id)arg1;
- (id)waypoint;

@end
