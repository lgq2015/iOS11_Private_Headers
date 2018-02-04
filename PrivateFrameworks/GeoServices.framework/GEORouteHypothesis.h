/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteHypothesis : NSObject <NSSecureCoding> {
    NSDate * _aggressiveDepartureDate;
    double  _aggressiveTravelTime;
    NSDate * _conservativeDepartureDate;
    double  _conservativeTravelTime;
    unsigned long long  _currentTrafficDensity;
    NSError * _error;
    double  _estimatedTravelTime;
    NSDate * _generationDate;
    unsigned long long  _historicTrafficDensity;
    GEOLocation * _lastLocation;
    GEORouteHypothesisIncident * _mostRelevantIncident;
    NSString * _routeName;
    NSDate * _suggestedDepartureDate;
    bool  _supportsLiveTraffic;
    NSString * _trafficDensityDescription;
    int  _transportType;
    long long  _travelState;
}

@property (nonatomic, readonly) NSDate *aggressiveDepartureDate;
@property (nonatomic, readonly) double aggressiveTravelTime;
@property (nonatomic, readonly) NSDate *conservativeDepartureDate;
@property (nonatomic, readonly) double conservativeTravelTime;
@property (nonatomic, readonly) unsigned long long currentTrafficDensity;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) double estimatedTravelTime;
@property (nonatomic, readonly) NSDate *generationDate;
@property (nonatomic, readonly) unsigned long long historicTrafficDensity;
@property (nonatomic, readonly) GEOLocation *lastLocation;
@property (nonatomic, readonly) GEORouteHypothesisIncident *mostRelevantIncident;
@property (nonatomic, readonly, copy) NSString *routeName;
@property (nonatomic, readonly) NSDate *suggestedDepartureDate;
@property (nonatomic, readonly) bool supportsLiveTraffic;
@property (nonatomic, readonly) NSString *trafficDensityDescription;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) long long travelState;

+ (id)_routeHypothesisErrorWithUnderlyingError:(id)arg1;
+ (bool)supportsSecureCoding;
+ (bool)supportsTravelState:(long long)arg1 forTransportType:(int)arg2;

- (void).cxx_destruct;
- (void)_clearHypothesisAndSetErrorWithCode:(long long)arg1;
- (void)_setError:(id)arg1;
- (void)_updateCurrentTrafficDensity:(double)arg1 staticTravelTime:(double)arg2;
- (void)_updateDepartureAndArrivalSuggestionsForArrivalDate:(id)arg1 travelTimeWithTraffic:(double)arg2 conservativeTravelTime:(double)arg3 aggressiveTravelTime:(double)arg4 transportType:(int)arg5;
- (void)_updateHistoricTrafficDensity:(double)arg1 staticTravelTime:(double)arg2;
- (void)_updateTrafficDensityDescription:(id)arg1;
- (void)_updateTrafficIncidents:(id)arg1;
- (void)_updateTravelStateHasArrived:(bool)arg1 isTraveling:(bool)arg2 travelScore:(double)arg3;
- (id)aggressiveDepartureDate;
- (double)aggressiveTravelTime;
- (id)conservativeDepartureDate;
- (double)conservativeTravelTime;
- (unsigned long long)currentTrafficDensity;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (double)estimatedTravelTime;
- (id)generationDate;
- (unsigned long long)historicTrafficDensity;
- (id)initWithCoder:(id)arg1;
- (id)lastLocation;
- (id)mostRelevantIncident;
- (id)routeName;
- (void)setLastLocation:(id)arg1;
- (void)setRouteName:(id)arg1;
- (void)setSupportsLiveTraffic:(bool)arg1;
- (id)suggestedDepartureDate;
- (bool)supportsLiveTraffic;
- (id)trafficDensityDescription;
- (int)transportType;
- (long long)travelState;

@end