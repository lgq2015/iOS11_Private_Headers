/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapMatchRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int searchThreshold : 1; 
    }  _has;
    NSMutableArray * _locations;
    double  _searchThreshold;
    NSMutableArray * _waypoints;
}

@property (nonatomic) bool hasSearchThreshold;
@property (nonatomic, retain) NSMutableArray *locations;
@property (nonatomic) double searchThreshold;
@property (nonatomic, retain) NSMutableArray *waypoints;

+ (Class)locationType;
+ (Class)waypointType;

- (void).cxx_destruct;
- (void)addLocation:(id)arg1;
- (void)addWaypoint:(id)arg1;
- (void)clearLocations;
- (void)clearWaypoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSearchThreshold;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locationAtIndex:(unsigned long long)arg1;
- (id)locations;
- (unsigned long long)locationsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (double)searchThreshold;
- (void)setHasSearchThreshold:(bool)arg1;
- (void)setLocations:(id)arg1;
- (void)setSearchThreshold:(double)arg1;
- (void)setWaypoints:(id)arg1;
- (id)waypointAtIndex:(unsigned long long)arg1;
- (id)waypoints;
- (unsigned long long)waypointsCount;
- (void)writeTo:(id)arg1;

@end
