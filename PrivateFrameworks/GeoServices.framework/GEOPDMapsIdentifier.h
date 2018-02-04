/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDMapsIdentifier : PBCodable <NSCopying> {
    struct { 
        unsigned int placeType : 1; 
    }  _has;
    int  _placeType;
    GEOPDShardedId * _shardedId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasPlaceType;
@property (nonatomic, readonly) bool hasShardedId;
@property (nonatomic) int placeType;
@property (nonatomic, retain) GEOPDShardedId *shardedId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsPlaceType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlaceType;
- (bool)hasShardedId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)placeDisplayType;
- (int)placeType;
- (id)placeTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPlaceType:(bool)arg1;
- (void)setPlaceType:(int)arg1;
- (void)setShardedId:(id)arg1;
- (id)shardedId;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
