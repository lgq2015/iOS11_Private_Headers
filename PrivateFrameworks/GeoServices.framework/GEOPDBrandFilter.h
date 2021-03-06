/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDBrandFilter : PBCodable <NSCopying> {
    unsigned long long  _brandMuid;
    struct { 
        unsigned int brandMuid : 1; 
    }  _has;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned long long brandMuid;
@property (nonatomic) bool hasBrandMuid;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (unsigned long long)brandMuid;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBrandMuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBrandMuid:(unsigned long long)arg1;
- (void)setHasBrandMuid:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
