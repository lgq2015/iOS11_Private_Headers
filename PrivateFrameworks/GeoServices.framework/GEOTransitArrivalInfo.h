/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitArrivalInfo : PBCodable <NSCopying> {
    int  _destinationLocation;
    struct { 
        unsigned int destinationLocation : 1; 
    }  _has;
}

@property (nonatomic) int destinationLocation;
@property (nonatomic) bool hasDestinationLocation;

- (int)StringAsDestinationLocation:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)destinationLocation;
- (id)destinationLocationAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (bool)hasDestinationLocation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDestinationLocation:(int)arg1;
- (void)setHasDestinationLocation:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
