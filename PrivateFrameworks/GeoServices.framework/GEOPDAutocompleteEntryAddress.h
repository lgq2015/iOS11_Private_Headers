/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteEntryAddress : PBCodable <NSCopying> {
    GEOLatLng * _center;
    double  _distance;
    struct { 
        unsigned int distance : 1; 
        unsigned int opaqueGeoId : 1; 
    }  _has;
    unsigned long long  _opaqueGeoId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic) double distance;
@property (nonatomic, readonly) bool hasCenter;
@property (nonatomic) bool hasDistance;
@property (nonatomic) bool hasOpaqueGeoId;
@property (nonatomic) unsigned long long opaqueGeoId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)center;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)distance;
- (bool)hasCenter;
- (bool)hasDistance;
- (bool)hasOpaqueGeoId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)opaqueGeoId;
- (bool)readFrom:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setDistance:(double)arg1;
- (void)setHasDistance:(bool)arg1;
- (void)setHasOpaqueGeoId:(bool)arg1;
- (void)setOpaqueGeoId:(unsigned long long)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
