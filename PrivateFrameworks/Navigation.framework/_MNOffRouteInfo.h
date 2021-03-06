/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface _MNOffRouteInfo : NSObject {
    NSDate * _date;
    GEOComposedWaypoint * _destination;
    double  _distancePenalty;
    NSDate * _lastUpddate;
    double  _originalDistanceFromDestination;
    double  _penalty;
    double  _throttledReroutesPenalty;
}

@property (nonatomic, readonly) double penalty;

- (void).cxx_destruct;
- (struct { double x1; double x2; })_coordinateFromWaypoint:(id)arg1;
- (id)description;
- (id)initWithCurrentDate:(id)arg1 location:(id)arg2 destination:(id)arg3;
- (double)penalty;
- (void)updateWithCurrentDate:(id)arg1 location:(id)arg2 isMostRecentReroute:(bool)arg3 throttledReroutesCount:(unsigned long long)arg4;

@end
