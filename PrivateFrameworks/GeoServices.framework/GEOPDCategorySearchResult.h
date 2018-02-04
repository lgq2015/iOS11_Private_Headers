/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDCategorySearchResult : PBCodable <NSCopying> {
    NSMutableArray * _browseCategorys;
    GEOPDRelatedSearchSuggestion * _defaultRelatedSearchSuggestion;
    GEOMapRegion * _displayMapRegion;
    bool  _enablePartialClientization;
    struct { 
        unsigned int enablePartialClientization : 1; 
        unsigned int isChainResultSet : 1; 
    }  _has;
    bool  _isChainResultSet;
    NSMutableArray * _relatedSearchSuggestions;
    NSMutableArray * _resultDetourInfos;
    GEOPDSearchClientBehavior * _searchClientBehavior;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *browseCategorys;
@property (nonatomic, retain) GEOPDRelatedSearchSuggestion *defaultRelatedSearchSuggestion;
@property (nonatomic, retain) GEOMapRegion *displayMapRegion;
@property (nonatomic) bool enablePartialClientization;
@property (nonatomic, readonly) bool hasDefaultRelatedSearchSuggestion;
@property (nonatomic, readonly) bool hasDisplayMapRegion;
@property (nonatomic) bool hasEnablePartialClientization;
@property (nonatomic) bool hasIsChainResultSet;
@property (nonatomic, readonly) bool hasSearchClientBehavior;
@property (nonatomic) bool isChainResultSet;
@property (nonatomic, retain) NSMutableArray *relatedSearchSuggestions;
@property (nonatomic, retain) NSMutableArray *resultDetourInfos;
@property (nonatomic, retain) GEOPDSearchClientBehavior *searchClientBehavior;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)browseCategoryType;
+ (Class)relatedSearchSuggestionType;
+ (Class)resultDetourInfoType;

- (void).cxx_destruct;
- (void)addBrowseCategory:(id)arg1;
- (void)addRelatedSearchSuggestion:(id)arg1;
- (void)addResultDetourInfo:(id)arg1;
- (id)browseCategoryAtIndex:(unsigned long long)arg1;
- (id)browseCategorys;
- (unsigned long long)browseCategorysCount;
- (void)clearBrowseCategorys;
- (void)clearRelatedSearchSuggestions;
- (void)clearResultDetourInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultRelatedSearchSuggestion;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayMapRegion;
- (bool)enablePartialClientization;
- (bool)hasDefaultRelatedSearchSuggestion;
- (bool)hasDisplayMapRegion;
- (bool)hasEnablePartialClientization;
- (bool)hasIsChainResultSet;
- (bool)hasSearchClientBehavior;
- (unsigned long long)hash;
- (bool)isChainResultSet;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)relatedSearchSuggestionAtIndex:(unsigned long long)arg1;
- (id)relatedSearchSuggestions;
- (unsigned long long)relatedSearchSuggestionsCount;
- (id)resultDetourInfoAtIndex:(unsigned long long)arg1;
- (id)resultDetourInfos;
- (unsigned long long)resultDetourInfosCount;
- (id)searchClientBehavior;
- (void)setBrowseCategorys:(id)arg1;
- (void)setDefaultRelatedSearchSuggestion:(id)arg1;
- (void)setDisplayMapRegion:(id)arg1;
- (void)setEnablePartialClientization:(bool)arg1;
- (void)setHasEnablePartialClientization:(bool)arg1;
- (void)setHasIsChainResultSet:(bool)arg1;
- (void)setIsChainResultSet:(bool)arg1;
- (void)setRelatedSearchSuggestions:(id)arg1;
- (void)setResultDetourInfos:(id)arg1;
- (void)setSearchClientBehavior:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
