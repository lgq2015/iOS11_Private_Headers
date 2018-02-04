/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPUserSearchInput : PBCodable <NSCopying> {
    GEOPDAutocompleteEntry * _autocompleteEntry;
    GEOLatLng * _coordinate;
    struct { 
        unsigned int origin : 1; 
    }  _has;
    int  _origin;
    GEOPDPlace * _place;
    NSString * _searchString;
    NSString * _singleLineAddressString;
}

@property (nonatomic, retain) GEOPDAutocompleteEntry *autocompleteEntry;
@property (nonatomic, retain) GEOLatLng *coordinate;
@property (nonatomic, readonly) bool hasAutocompleteEntry;
@property (nonatomic, readonly) bool hasCoordinate;
@property (nonatomic) bool hasOrigin;
@property (nonatomic, readonly) bool hasPlace;
@property (nonatomic, readonly) bool hasSearchString;
@property (nonatomic, readonly) bool hasSingleLineAddressString;
@property (nonatomic) int origin;
@property (nonatomic, retain) GEOPDPlace *place;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic, retain) NSString *singleLineAddressString;

- (void).cxx_destruct;
- (int)StringAsOrigin:(id)arg1;
- (id)autocompleteEntry;
- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAutocompleteEntry;
- (bool)hasCoordinate;
- (bool)hasOrigin;
- (bool)hasPlace;
- (bool)hasSearchString;
- (bool)hasSingleLineAddressString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)origin;
- (id)originAsString:(int)arg1;
- (id)place;
- (bool)readFrom:(id)arg1;
- (id)searchString;
- (void)setAutocompleteEntry:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setHasOrigin:(bool)arg1;
- (void)setOrigin:(int)arg1;
- (void)setPlace:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSingleLineAddressString:(id)arg1;
- (id)singleLineAddressString;
- (void)writeTo:(id)arg1;

@end
