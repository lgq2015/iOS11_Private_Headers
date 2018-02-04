/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDVenueFeatureValue : PBCodable <NSCopying> {
    GEOPDFeatureBuilding * _featureBuilding;
    GEOPDFeaturePOI * _featurePoi;
    GEOPDFeatureVenue * _featureVenue;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDFeatureBuilding *featureBuilding;
@property (nonatomic, retain) GEOPDFeaturePOI *featurePoi;
@property (nonatomic, retain) GEOPDFeatureVenue *featureVenue;
@property (nonatomic, readonly) bool hasFeatureBuilding;
@property (nonatomic, readonly) bool hasFeaturePoi;
@property (nonatomic, readonly) bool hasFeatureVenue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featureBuilding;
- (id)featurePoi;
- (id)featureVenue;
- (bool)hasFeatureBuilding;
- (bool)hasFeaturePoi;
- (bool)hasFeatureVenue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeatureBuilding:(id)arg1;
- (void)setFeaturePoi:(id)arg1;
- (void)setFeatureVenue:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
