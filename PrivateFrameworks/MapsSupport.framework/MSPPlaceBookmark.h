/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPPlaceBookmark : PBCodable <NSCopying> {
    GEOLatLng * _droppedPinCoordinate;
    int  _droppedPinFloorOrdinal;
    struct { 
        unsigned int droppedPinFloorOrdinal : 1; 
        unsigned int origin : 1; 
    }  _has;
    GEOMapItemStorage * _mapItemStorage;
    int  _origin;
    NSString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOLatLng *droppedPinCoordinate;
@property (nonatomic) int droppedPinFloorOrdinal;
@property (nonatomic, readonly) bool hasDroppedPinCoordinate;
@property (nonatomic) bool hasDroppedPinFloorOrdinal;
@property (nonatomic, readonly) bool hasMapItemStorage;
@property (nonatomic) bool hasOrigin;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic) int origin;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsOrigin:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)droppedPinCoordinate;
- (int)droppedPinFloorOrdinal;
- (bool)hasDroppedPinCoordinate;
- (bool)hasDroppedPinFloorOrdinal;
- (bool)hasMapItemStorage;
- (bool)hasOrigin;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mapItemStorage;
- (void)mergeFrom:(id)arg1;
- (int)origin;
- (id)originAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDroppedPinCoordinate:(id)arg1;
- (void)setDroppedPinFloorOrdinal:(int)arg1;
- (void)setHasDroppedPinFloorOrdinal:(bool)arg1;
- (void)setHasOrigin:(bool)arg1;
- (void)setMapItemStorage:(id)arg1;
- (void)setOrigin:(int)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
