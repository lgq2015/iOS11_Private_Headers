/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationRouteSummary : PBCodable <NSCopying> {
    GEOComposedWaypoint * _destination;
    NSString * _destinationName;
    struct { 
        unsigned int travelTime : 1; 
        unsigned int transportType : 1; 
    }  _has;
    GEOComposedWaypoint * _origin;
    int  _transportType;
    double  _travelTime;
}

@property (nonatomic, retain) GEOComposedWaypoint *destination;
@property (nonatomic, retain) NSString *destinationName;
@property (nonatomic, readonly) bool hasDestination;
@property (nonatomic, readonly) bool hasDestinationName;
@property (nonatomic, readonly) bool hasOrigin;
@property (nonatomic) bool hasTransportType;
@property (nonatomic) bool hasTravelTime;
@property (nonatomic, retain) GEOComposedWaypoint *origin;
@property (nonatomic) int transportType;
@property (nonatomic) double travelTime;

- (void).cxx_destruct;
- (int)StringAsTransportType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destination;
- (id)destinationName;
- (id)dictionaryRepresentation;
- (bool)hasDestination;
- (bool)hasDestinationName;
- (bool)hasOrigin;
- (bool)hasTransportType;
- (bool)hasTravelTime;
- (unsigned long long)hash;
- (id)initWithRoute:(id)arg1 destinationName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)origin;
- (bool)readFrom:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setHasTravelTime:(bool)arg1;
- (void)setOrigin:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setTransportType:(int)arg1;
- (void)setTravelTime:(double)arg1;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (double)travelTime;
- (void)writeTo:(id)arg1;

@end
