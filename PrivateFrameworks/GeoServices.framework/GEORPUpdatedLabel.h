/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPUpdatedLabel : PBCodable <NSCopying> {
    GEOLatLng * _center;
    NSString * _localizedText;
}

@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic, readonly) bool hasCenter;
@property (nonatomic, readonly) bool hasLocalizedText;
@property (nonatomic, retain) NSString *localizedText;

- (void).cxx_destruct;
- (id)center;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCenter;
- (bool)hasLocalizedText;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localizedText;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setLocalizedText:(id)arg1;
- (void)writeTo:(id)arg1;

@end
