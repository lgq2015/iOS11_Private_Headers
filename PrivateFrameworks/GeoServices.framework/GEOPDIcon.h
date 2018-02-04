/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDIcon : PBCodable <NSCopying> {
    GEOPDPhoto * _image;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, retain) GEOPDPhoto *image;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasImage;
- (unsigned long long)hash;
- (id)image;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setImage:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
