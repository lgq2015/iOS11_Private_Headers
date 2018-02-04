/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface FakeBitsAndPieces : NSObject {
    NSDate * _endDate;
    NSDate * _expires;
    GEOLocation * _location;
    NSString * _name;
    NSDate * _startDate;
    unsigned long long  _type;
    GEOComposedWaypoint * _waypoint;
    double  _weight;
}

@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDate *expires;
@property (readonly) MNCommuteDestinationSuggestion *fakeSuggestion;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) GEOComposedWaypoint *waypoint;
@property (nonatomic) double weight;

- (void).cxx_destruct;
- (id)endDate;
- (id)expires;
- (id)fakeSuggestion;
- (id)location;
- (id)name;
- (void)setEndDate:(id)arg1;
- (void)setExpires:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setWaypoint:(id)arg1;
- (void)setWeight:(double)arg1;
- (id)startDate;
- (unsigned long long)type;
- (id)waypoint;
- (double)weight;

@end
