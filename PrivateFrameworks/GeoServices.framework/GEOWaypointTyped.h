/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOWaypointTyped : PBCodable <NSCopying> {
    struct { 
        unsigned int waypointType : 1; 
        unsigned int isCurrentLocation : 1; 
        unsigned int isLocationOfInterest : 1; 
    }  _has;
    bool  _isCurrentLocation;
    bool  _isLocationOfInterest;
    PBUnknownFields * _unknownFields;
    GEOWaypointID * _waypointId;
    GEOWaypointLocation * _waypointLocation;
    GEOWaypointPlace * _waypointPlace;
    int  _waypointType;
}

@property (nonatomic) bool hasIsCurrentLocation;
@property (nonatomic) bool hasIsLocationOfInterest;
@property (nonatomic, readonly) bool hasWaypointId;
@property (nonatomic, readonly) bool hasWaypointLocation;
@property (nonatomic, readonly) bool hasWaypointPlace;
@property (nonatomic) bool hasWaypointType;
@property (nonatomic) bool isCurrentLocation;
@property (nonatomic) bool isLocationOfInterest;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOWaypointID *waypointId;
@property (nonatomic, retain) GEOWaypointLocation *waypointLocation;
@property (nonatomic, retain) GEOWaypointPlace *waypointPlace;
@property (nonatomic) int waypointType;

- (void).cxx_destruct;
- (int)StringAsWaypointType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsCurrentLocation;
- (bool)hasIsLocationOfInterest;
- (bool)hasWaypointId;
- (bool)hasWaypointLocation;
- (bool)hasWaypointPlace;
- (bool)hasWaypointType;
- (unsigned long long)hash;
- (bool)isCurrentLocation;
- (bool)isEqual:(id)arg1;
- (bool)isLocationOfInterest;
- (id)locationForWaypoint;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsCurrentLocation:(bool)arg1;
- (void)setHasIsLocationOfInterest:(bool)arg1;
- (void)setHasWaypointType:(bool)arg1;
- (void)setIsCurrentLocation:(bool)arg1;
- (void)setIsLocationOfInterest:(bool)arg1;
- (void)setWaypointId:(id)arg1;
- (void)setWaypointLocation:(id)arg1;
- (void)setWaypointPlace:(id)arg1;
- (void)setWaypointType:(int)arg1;
- (id)unknownFields;
- (id)waypointId;
- (id)waypointLocation;
- (id)waypointPlace;
- (int)waypointType;
- (id)waypointTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
