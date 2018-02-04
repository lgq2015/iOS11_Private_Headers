/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAddressCorrectionAddress : PBCodable <NSCopying> {
    NSString * _addressID;
    GEOLocation * _addressLocation;
}

@property (nonatomic, retain) NSString *addressID;
@property (nonatomic, retain) GEOLocation *addressLocation;
@property (nonatomic, readonly) bool hasAddressID;
@property (nonatomic, readonly) bool hasAddressLocation;

- (void).cxx_destruct;
- (id)addressID;
- (id)addressLocation;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddressID;
- (bool)hasAddressLocation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddressID:(id)arg1;
- (void)setAddressLocation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
