/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDRelatedSearchSuggestion : PBCodable <NSCopying> {
    NSString * _displayString;
    NSString * _searchBarDisplayToken;
    NSData * _suggestionEntryMetadata;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *displayString;
@property (nonatomic, readonly) bool hasDisplayString;
@property (nonatomic, readonly) bool hasSearchBarDisplayToken;
@property (nonatomic, readonly) bool hasSuggestionEntryMetadata;
@property (nonatomic, retain) NSString *searchBarDisplayToken;
@property (nonatomic, retain) NSData *suggestionEntryMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayString;
- (bool)hasDisplayString;
- (bool)hasSearchBarDisplayToken;
- (bool)hasSuggestionEntryMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)searchBarDisplayToken;
- (void)setDisplayString:(id)arg1;
- (void)setSearchBarDisplayToken:(id)arg1;
- (void)setSuggestionEntryMetadata:(id)arg1;
- (id)suggestionEntryMetadata;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
