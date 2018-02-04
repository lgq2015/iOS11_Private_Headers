/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapsServerMetadata : PBCodable <NSCopying> {
    NSMutableArray * _mapsSearchResults;
    NSMutableArray * _suggestionEntryMetadataDisplayeds;
    NSData * _suggestionEntryMetadataTappedOn;
}

@property (nonatomic, readonly) bool hasSuggestionEntryMetadataTappedOn;
@property (nonatomic, retain) NSMutableArray *mapsSearchResults;
@property (nonatomic, retain) NSMutableArray *suggestionEntryMetadataDisplayeds;
@property (nonatomic, retain) NSData *suggestionEntryMetadataTappedOn;

+ (Class)mapsSearchResultType;
+ (Class)suggestionEntryMetadataDisplayedType;

- (void).cxx_destruct;
- (void)addMapsSearchResult:(id)arg1;
- (void)addSuggestionEntryMetadataDisplayed:(id)arg1;
- (void)clearMapsSearchResults;
- (void)clearSuggestionEntryMetadataDisplayeds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSuggestionEntryMetadataTappedOn;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mapsSearchResultAtIndex:(unsigned long long)arg1;
- (id)mapsSearchResults;
- (unsigned long long)mapsSearchResultsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMapsSearchResults:(id)arg1;
- (void)setSuggestionEntryMetadataDisplayeds:(id)arg1;
- (void)setSuggestionEntryMetadataTappedOn:(id)arg1;
- (id)suggestionEntryMetadataDisplayedAtIndex:(unsigned long long)arg1;
- (id)suggestionEntryMetadataDisplayeds;
- (unsigned long long)suggestionEntryMetadataDisplayedsCount;
- (id)suggestionEntryMetadataTappedOn;
- (void)writeTo:(id)arg1;

@end
