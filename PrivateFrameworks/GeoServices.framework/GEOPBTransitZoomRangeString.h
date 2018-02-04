/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitZoomRangeString : PBCodable <NSCopying> {
    struct { 
        unsigned int minZoom : 1; 
    }  _has;
    NSString * _labelLanguage;
    NSString * _labelText;
    unsigned int  _minZoom;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasLabelLanguage;
@property (nonatomic, readonly) bool hasLabelText;
@property (nonatomic) bool hasMinZoom;
@property (nonatomic, retain) NSString *labelLanguage;
@property (nonatomic, retain) NSString *labelText;
@property (nonatomic) unsigned int minZoom;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLabelLanguage;
- (bool)hasLabelText;
- (bool)hasMinZoom;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)labelLanguage;
- (id)labelText;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minZoom;
- (bool)readFrom:(id)arg1;
- (void)setHasMinZoom:(bool)arg1;
- (void)setLabelLanguage:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setMinZoom:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
