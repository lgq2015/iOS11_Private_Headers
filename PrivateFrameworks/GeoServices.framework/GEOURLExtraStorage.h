/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOURLExtraStorage : PBCodable <NSCopying> {
    GEOMapRegion * _mapRegion;
    NSString * _phoneNumber;
    GEOStyleAttributes * _styleAttributes;
    PBUnknownFields * _unknownFields;
    NSString * _url;
}

@property (nonatomic, readonly) bool hasMapRegion;
@property (nonatomic, readonly) bool hasPhoneNumber;
@property (nonatomic, readonly) bool hasStyleAttributes;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *url;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMapRegion;
- (bool)hasPhoneNumber;
- (bool)hasStyleAttributes;
- (bool)hasUrl;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (id)phoneNumber;
- (bool)readFrom:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)styleAttributes;
- (id)unknownFields;
- (id)url;
- (void)writeTo:(id)arg1;

@end
