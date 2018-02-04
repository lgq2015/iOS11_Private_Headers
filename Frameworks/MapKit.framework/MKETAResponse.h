/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKETAResponse : NSObject {
    MKMapItem * _destination;
    double  _distance;
    NSDate * _expectedArrivalDate;
    NSDate * _expectedDepartureDate;
    double  _expectedTravelTime;
    NSArray * _sortedETAs;
    MKMapItem * _source;
    unsigned long long  _transportType;
}

@property (nonatomic, readonly) MKMapItem *destination;
@property (nonatomic, readonly) double distance;
@property (nonatomic, retain) NSDate *expectedArrivalDate;
@property (nonatomic, retain) NSDate *expectedDepartureDate;
@property (nonatomic, readonly) double expectedTravelTime;
@property (getter=_sortedETAs, nonatomic, readonly) NSArray *sortedETAs;
@property (nonatomic, readonly) MKMapItem *source;
@property (nonatomic, readonly) unsigned long long transportType;

- (void).cxx_destruct;
- (id)_sortedETAs;
- (unsigned long long)_transportType:(int)arg1;
- (id)destination;
- (double)distance;
- (id)expectedArrivalDate;
- (id)expectedDepartureDate;
- (double)expectedTravelTime;
- (id)initWithSource:(id)arg1 destination:(id)arg2 expectedTravelTime:(double)arg3 distance:(double)arg4 sortedETAs:(id)arg5;
- (void)setExpectedArrivalDate:(id)arg1;
- (void)setExpectedDepartureDate:(id)arg1;
- (id)source;
- (unsigned long long)transportType;

@end
