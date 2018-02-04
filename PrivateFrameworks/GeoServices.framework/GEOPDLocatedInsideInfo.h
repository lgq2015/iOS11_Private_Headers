/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLocatedInsideInfo : PBCodable <NSCopying> {
    int  _featureType;
    struct { 
        unsigned int muid : 1; 
        unsigned int featureType : 1; 
    }  _has;
    unsigned long long  _muid;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int featureType;
@property (nonatomic) bool hasFeatureType;
@property (nonatomic) bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsFeatureType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)featureType;
- (id)featureTypeAsString:(int)arg1;
- (bool)hasFeatureType;
- (bool)hasMuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (bool)readFrom:(id)arg1;
- (void)setFeatureType:(int)arg1;
- (void)setHasFeatureType:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
