/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDGeocodingParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int maxResults : 1; 
    }  _has;
    unsigned int  _maxResults;
    NSString * _queryString;
    GEOStructuredAddress * _structuredAddress;
    PBUnknownFields * _unknownFields;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic) bool hasMaxResults;
@property (nonatomic, readonly) bool hasQueryString;
@property (nonatomic, readonly) bool hasStructuredAddress;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic, retain) NSString *queryString;
@property (nonatomic, retain) GEOStructuredAddress *structuredAddress;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxResults;
- (bool)hasQueryString;
- (bool)hasStructuredAddress;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (id)initWithForwardGeocodeAddress:(id)arg1 addressString:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxResults;
- (void)mergeFrom:(id)arg1;
- (id)queryString;
- (bool)readFrom:(id)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (void)setQueryString:(id)arg1;
- (void)setStructuredAddress:(id)arg1;
- (void)setViewportInfo:(id)arg1;
- (id)structuredAddress;
- (id)unknownFields;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
