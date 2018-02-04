/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDFeatureIdGeocodingParameters : PBCodable <NSCopying> {
    unsigned long long  _featureId;
    struct { 
        unsigned int featureId : 1; 
    }  _has;
    GEOLatLng * _location;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned long long featureId;
@property (nonatomic) bool hasFeatureId;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic, retain) GEOLatLng *location;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)featureId;
- (bool)hasFeatureId;
- (bool)hasLocation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeatureId:(unsigned long long)arg1;
- (void)setHasFeatureId:(bool)arg1;
- (void)setLocation:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
