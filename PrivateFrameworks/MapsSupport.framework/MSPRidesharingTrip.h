/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPRidesharingTrip : PBCodable <NSCopying> {
    GEOComposedWaypoint * _endWaypoint;
    GEOComposedWaypoint * _startWaypoint;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOComposedWaypoint *endWaypoint;
@property (nonatomic, readonly) bool hasEndWaypoint;
@property (nonatomic, readonly) bool hasStartWaypoint;
@property (nonatomic, retain) GEOComposedWaypoint *startWaypoint;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endWaypoint;
- (bool)hasEndWaypoint;
- (bool)hasStartWaypoint;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndWaypoint:(id)arg1;
- (void)setStartWaypoint:(id)arg1;
- (id)startWaypoint;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
