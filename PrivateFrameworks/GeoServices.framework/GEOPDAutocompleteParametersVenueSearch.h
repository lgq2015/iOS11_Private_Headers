/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteParametersVenueSearch : PBCodable <NSCopying> {
    unsigned long long  _buildingId;
    NSMutableArray * _categorys;
    struct { 
        unsigned int buildingId : 1; 
        unsigned int levelId : 1; 
        unsigned int sectionId : 1; 
        unsigned int venueId : 1; 
        unsigned int maxResults : 1; 
        unsigned int highlightDiff : 1; 
    }  _has;
    bool  _highlightDiff;
    unsigned long long  _levelId;
    int  _maxResults;
    NSString * _query;
    unsigned long long  _sectionId;
    PBUnknownFields * _unknownFields;
    unsigned long long  _venueId;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic) unsigned long long buildingId;
@property (nonatomic, retain) NSMutableArray *categorys;
@property (nonatomic) bool hasBuildingId;
@property (nonatomic) bool hasHighlightDiff;
@property (nonatomic) bool hasLevelId;
@property (nonatomic) bool hasMaxResults;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic) bool hasSectionId;
@property (nonatomic) bool hasVenueId;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic) bool highlightDiff;
@property (nonatomic) unsigned long long levelId;
@property (nonatomic) int maxResults;
@property (nonatomic, retain) NSString *query;
@property (nonatomic) unsigned long long sectionId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned long long venueId;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

+ (Class)categoryType;

- (void).cxx_destruct;
- (void)addCategory:(id)arg1;
- (unsigned long long)buildingId;
- (id)categoryAtIndex:(unsigned long long)arg1;
- (id)categorys;
- (unsigned long long)categorysCount;
- (void)clearCategorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBuildingId;
- (bool)hasHighlightDiff;
- (bool)hasLevelId;
- (bool)hasMaxResults;
- (bool)hasQuery;
- (bool)hasSectionId;
- (bool)hasVenueId;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (bool)highlightDiff;
- (bool)isEqual:(id)arg1;
- (unsigned long long)levelId;
- (int)maxResults;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (bool)readFrom:(id)arg1;
- (unsigned long long)sectionId;
- (void)setBuildingId:(unsigned long long)arg1;
- (void)setCategorys:(id)arg1;
- (void)setHasBuildingId:(bool)arg1;
- (void)setHasHighlightDiff:(bool)arg1;
- (void)setHasLevelId:(bool)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setHasSectionId:(bool)arg1;
- (void)setHasVenueId:(bool)arg1;
- (void)setHighlightDiff:(bool)arg1;
- (void)setLevelId:(unsigned long long)arg1;
- (void)setMaxResults:(int)arg1;
- (void)setQuery:(id)arg1;
- (void)setSectionId:(unsigned long long)arg1;
- (void)setVenueId:(unsigned long long)arg1;
- (void)setViewportInfo:(id)arg1;
- (id)unknownFields;
- (unsigned long long)venueId;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
