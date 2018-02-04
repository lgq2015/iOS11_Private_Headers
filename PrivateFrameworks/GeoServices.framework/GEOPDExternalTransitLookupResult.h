/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDExternalTransitLookupResult : PBCodable <NSCopying> {
    NSString * _providerId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasProviderId;
@property (nonatomic, retain) NSString *providerId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProviderId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)providerId;
- (bool)readFrom:(id)arg1;
- (void)setProviderId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
