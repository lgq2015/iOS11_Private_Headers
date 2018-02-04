/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAddressObjectGeocodingParameters : PBCodable <NSCopying> {
    NSData * _addressObject;
    struct { 
        unsigned int maxResults : 1; 
    }  _has;
    unsigned int  _maxResults;
    PBUnknownFields * _unknownFields;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic, retain) NSData *addressObject;
@property (nonatomic, readonly) bool hasAddressObject;
@property (nonatomic) bool hasMaxResults;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

- (void).cxx_destruct;
- (id)addressObject;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddressObject;
- (bool)hasMaxResults;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxResults;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddressObject:(id)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (void)setViewportInfo:(id)arg1;
- (id)unknownFields;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
