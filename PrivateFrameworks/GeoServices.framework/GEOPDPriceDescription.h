/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPriceDescription : PBCodable <NSCopying> {
    NSString * _priceDescription;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasPriceDescription;
@property (nonatomic, retain) NSString *priceDescription;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)priceDescriptionForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPriceDescription;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)priceDescription;
- (bool)readFrom:(id)arg1;
- (void)setPriceDescription:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
