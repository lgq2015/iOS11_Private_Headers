/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult : PBCodable <NSCopying> {
    NSMutableArray * _searchResultsForCategoryEntrys;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *searchResultsForCategoryEntrys;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)searchResultsForCategoryEntryType;

- (void).cxx_destruct;
- (void)addSearchResultsForCategoryEntry:(id)arg1;
- (void)clearSearchResultsForCategoryEntrys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)searchResultsForCategoryEntryAtIndex:(unsigned long long)arg1;
- (id)searchResultsForCategoryEntrys;
- (unsigned long long)searchResultsForCategoryEntrysCount;
- (void)setSearchResultsForCategoryEntrys:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
