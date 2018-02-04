/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORoadAccessPoint : PBCodable <NSCopying> {
    int  _drivingDirection;
    struct { 
        unsigned int drivingDirection : 1; 
        unsigned int walkingDirection : 1; 
        unsigned int isApproximate : 1; 
    }  _has;
    bool  _isApproximate;
    GEOLatLng * _location;
    PBUnknownFields * _unknownFields;
    int  _walkingDirection;
}

@property (nonatomic) int drivingDirection;
@property (nonatomic) bool hasDrivingDirection;
@property (nonatomic) bool hasIsApproximate;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasWalkingDirection;
@property (nonatomic) bool isApproximate;
@property (nonatomic, retain) GEOLatLng *location;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) int walkingDirection;

- (void).cxx_destruct;
- (int)StringAsDrivingDirection:(id)arg1;
- (int)StringAsWalkingDirection:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)drivingDirection;
- (id)drivingDirectionAsString:(int)arg1;
- (bool)hasDrivingDirection;
- (bool)hasIsApproximate;
- (bool)hasLocation;
- (bool)hasWalkingDirection;
- (unsigned long long)hash;
- (bool)isApproximate;
- (bool)isEqual:(id)arg1;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDrivingDirection:(int)arg1;
- (void)setHasDrivingDirection:(bool)arg1;
- (void)setHasIsApproximate:(bool)arg1;
- (void)setHasWalkingDirection:(bool)arg1;
- (void)setIsApproximate:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setWalkingDirection:(int)arg1;
- (id)unknownFields;
- (int)walkingDirection;
- (id)walkingDirectionAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
