/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDIpGeoLookupParameters : PBCodable <NSCopying> {
    NSString * _ipAddress;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasIpAddress;
@property (nonatomic, retain) NSString *ipAddress;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIpAddress;
- (unsigned long long)hash;
- (id)ipAddress;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIpAddress:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end