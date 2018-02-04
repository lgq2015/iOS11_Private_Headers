/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStorageCompletion : PBCodable <NSCopying> {
    GEOPDAutocompleteEntry * _autocompleteEntry;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDAutocompleteEntry *autocompleteEntry;
@property (nonatomic, readonly) bool hasAutocompleteEntry;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)storageForCompletionItem:(id)arg1;

- (void).cxx_destruct;
- (void)applyToUserSearchInput:(id)arg1;
- (id)autocompleteEntry;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAutocompleteEntry;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAutocompleteEntry:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
