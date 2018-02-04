/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAttribution : PBCodable <NSCopying> {
    NSString * _actionUrlComponent;
    NSMutableArray * _attributionUrls;
    NSString * _externalComponentId;
    NSString * _externalItemId;
    PBUnknownFields * _unknownFields;
    NSString * _vendorId;
}

@property (nonatomic, retain) NSString *actionUrlComponent;
@property (nonatomic, retain) NSMutableArray *attributionUrls;
@property (nonatomic, retain) NSString *externalComponentId;
@property (nonatomic, retain) NSString *externalItemId;
@property (nonatomic, readonly) bool hasActionUrlComponent;
@property (nonatomic, readonly) bool hasExternalComponentId;
@property (nonatomic, readonly) bool hasExternalItemId;
@property (nonatomic, readonly) bool hasVendorId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *vendorId;

+ (id)attributionForPlaceDataEncyclopedia:(id)arg1;
+ (id)attributionForPlaceDataEntity:(id)arg1;
+ (id)attributionForPlaceDataPhotos:(id)arg1;
+ (id)attributionForPlaceDataRestaurantReservationLink:(id)arg1;
+ (id)attributionForPlaceDataReview:(id)arg1;
+ (Class)attributionUrlType;

- (void).cxx_destruct;
- (bool)_isYelp;
- (id)actionUrlComponent;
- (void)addAttributionUrl:(id)arg1;
- (id)attributionUrlAtIndex:(unsigned long long)arg1;
- (id)attributionUrls;
- (unsigned long long)attributionUrlsCount;
- (void)clearAttributionUrls;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalComponentId;
- (id)externalItemId;
- (bool)hasActionUrlComponent;
- (bool)hasExternalComponentId;
- (bool)hasExternalItemId;
- (bool)hasVendorId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionUrlComponent:(id)arg1;
- (void)setAttributionUrls:(id)arg1;
- (void)setExternalComponentId:(id)arg1;
- (void)setExternalItemId:(id)arg1;
- (void)setVendorId:(id)arg1;
- (id)unknownFields;
- (id)vendorId;
- (void)writeTo:(id)arg1;

@end
