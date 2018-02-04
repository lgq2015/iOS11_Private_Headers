/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchFilter : PBCodable <NSCopying> {
    GEOPDBrandFilter * _brandFilter;
    GEOPDCategoryFilter * _categoryFilter;
    PBUnknownFields * _unknownFields;
    GEOPDSearchVenueFilter * _venueFilter;
}

@property (nonatomic, retain) GEOPDBrandFilter *brandFilter;
@property (nonatomic, retain) GEOPDCategoryFilter *categoryFilter;
@property (nonatomic, readonly) bool hasBrandFilter;
@property (nonatomic, readonly) bool hasCategoryFilter;
@property (nonatomic, readonly) bool hasVenueFilter;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDSearchVenueFilter *venueFilter;

- (void).cxx_destruct;
- (id)brandFilter;
- (id)categoryFilter;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBrandFilter;
- (bool)hasCategoryFilter;
- (bool)hasVenueFilter;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBrandFilter:(id)arg1;
- (void)setCategoryFilter:(id)arg1;
- (void)setVenueFilter:(id)arg1;
- (id)unknownFields;
- (id)venueFilter;
- (void)writeTo:(id)arg1;

@end
