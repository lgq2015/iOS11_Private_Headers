/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKSyntheticGEORouteHypothesis : NSObject <EKGEORouteHypothesis> {
    NSDate * _aggressiveDepartureDate;
    double  _aggressiveTravelTime;
    NSDate * _conservativeDepartureDate;
    double  _conservativeTravelTime;
    unsigned long long  _currentTrafficDensity;
    double  _estimatedTravelTime;
    NSString * _routeName;
    NSDate * _suggestedDepartureDate;
    bool  _supportsLiveTraffic;
    NSString * _trafficDensityDescription;
    int  _transportType;
    long long  _travelState;
}

@property (nonatomic, retain) NSDate *aggressiveDepartureDate;
@property (nonatomic) double aggressiveTravelTime;
@property (nonatomic, retain) NSDate *conservativeDepartureDate;
@property (nonatomic) double conservativeTravelTime;
@property (nonatomic) unsigned long long currentTrafficDensity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double estimatedTravelTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *routeName;
@property (nonatomic, retain) NSDate *suggestedDepartureDate;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsLiveTraffic;
@property (nonatomic, retain) NSString *trafficDensityDescription;
@property (nonatomic) int transportType;
@property (nonatomic) long long travelState;

- (void).cxx_destruct;
- (id)aggressiveDepartureDate;
- (double)aggressiveTravelTime;
- (id)conservativeDepartureDate;
- (double)conservativeTravelTime;
- (unsigned long long)currentTrafficDensity;
- (double)estimatedTravelTime;
- (id)initWithStartDate:(id)arg1 conservativeTravelTime:(double)arg2 estimatedTravelTime:(double)arg3 aggressiveTravelTime:(double)arg4;
- (id)routeName;
- (void)setAggressiveDepartureDate:(id)arg1;
- (void)setAggressiveTravelTime:(double)arg1;
- (void)setConservativeDepartureDate:(id)arg1;
- (void)setConservativeTravelTime:(double)arg1;
- (void)setCurrentTrafficDensity:(unsigned long long)arg1;
- (void)setEstimatedTravelTime:(double)arg1;
- (void)setRouteName:(id)arg1;
- (void)setSuggestedDepartureDate:(id)arg1;
- (void)setSupportsLiveTraffic:(bool)arg1;
- (void)setTrafficDensityDescription:(id)arg1;
- (void)setTransportType:(int)arg1;
- (void)setTravelState:(long long)arg1;
- (id)suggestedDepartureDate;
- (bool)supportsLiveTraffic;
- (id)trafficDensityDescription;
- (int)transportType;
- (long long)travelState;

@end
