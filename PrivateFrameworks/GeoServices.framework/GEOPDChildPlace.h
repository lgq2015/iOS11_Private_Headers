/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDChildPlace : PBCodable <NSCopying> {
    GEOPDMapsIdentifier * _mapsId;
    NSString * _name;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasMapsId;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, retain) GEOPDMapsIdentifier *mapsId;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMapsId;
- (bool)hasName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mapsId;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setMapsId:(id)arg1;
- (void)setName:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
