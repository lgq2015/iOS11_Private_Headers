/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOWaypointPlace : PBCodable <NSCopying> {
    GEOLatLng * _center;
    NSMutableArray * _roadAccessPoints;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic, readonly) bool hasCenter;
@property (nonatomic, retain) NSMutableArray *roadAccessPoints;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)roadAccessPointType;

- (void).cxx_destruct;
- (void)addRoadAccessPoint:(id)arg1;
- (id)center;
- (void)clearRoadAccessPoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCenter;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)roadAccessPointAtIndex:(unsigned long long)arg1;
- (id)roadAccessPoints;
- (unsigned long long)roadAccessPointsCount;
- (void)setCenter:(id)arg1;
- (void)setRoadAccessPoints:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
