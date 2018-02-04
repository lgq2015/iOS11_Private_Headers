/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDRestaurantReservationLink : PBCodable <NSCopying> {
    NSMutableArray * _restaurantLinks;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *restaurantLinks;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)reservationLinkForPlaceData:(id)arg1;
+ (Class)restaurantLinkType;

- (void).cxx_destruct;
- (void)addRestaurantLink:(id)arg1;
- (void)clearRestaurantLinks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)restaurantLinkAtIndex:(unsigned long long)arg1;
- (id)restaurantLinks;
- (unsigned long long)restaurantLinksCount;
- (void)setRestaurantLinks:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
