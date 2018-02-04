/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDVenueIdentifier : PBCodable <NSCopying> {
    unsigned long long  _buildingId;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _containedBys;
    unsigned long long  _featureId;
    unsigned long long  _fixtureId;
    unsigned long long  _geminiId;
    struct { 
        unsigned int buildingId : 1; 
        unsigned int featureId : 1; 
        unsigned int fixtureId : 1; 
        unsigned int geminiId : 1; 
        unsigned int levelId : 1; 
        unsigned int unitId : 1; 
        unsigned int venueId : 1; 
        unsigned int levelOrdinal : 1; 
    }  _has;
    unsigned long long  _levelId;
    int  _levelOrdinal;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _sectionIds;
    unsigned long long  _unitId;
    PBUnknownFields * _unknownFields;
    unsigned long long  _venueId;
}

@property (nonatomic) unsigned long long buildingId;
@property (nonatomic, readonly) unsigned long long*containedBys;
@property (nonatomic, readonly) unsigned long long containedBysCount;
@property (nonatomic) unsigned long long featureId;
@property (nonatomic) unsigned long long fixtureId;
@property (nonatomic) unsigned long long geminiId;
@property (nonatomic) bool hasBuildingId;
@property (nonatomic) bool hasFeatureId;
@property (nonatomic) bool hasFixtureId;
@property (nonatomic) bool hasGeminiId;
@property (nonatomic) bool hasLevelId;
@property (nonatomic) bool hasLevelOrdinal;
@property (nonatomic) bool hasUnitId;
@property (nonatomic) bool hasVenueId;
@property (nonatomic) unsigned long long levelId;
@property (nonatomic) int levelOrdinal;
@property (nonatomic, readonly) unsigned long long*sectionIds;
@property (nonatomic, readonly) unsigned long long sectionIdsCount;
@property (nonatomic) unsigned long long unitId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned long long venueId;

- (void).cxx_destruct;
- (void)addContainedBy:(unsigned long long)arg1;
- (void)addSectionId:(unsigned long long)arg1;
- (unsigned long long)buildingId;
- (void)clearContainedBys;
- (void)clearSectionIds;
- (unsigned long long)containedByAtIndex:(unsigned long long)arg1;
- (unsigned long long*)containedBys;
- (unsigned long long)containedBysCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)featureId;
- (unsigned long long)fixtureId;
- (unsigned long long)geminiId;
- (bool)hasBuildingId;
- (bool)hasFeatureId;
- (bool)hasFixtureId;
- (bool)hasGeminiId;
- (bool)hasLevelId;
- (bool)hasLevelOrdinal;
- (bool)hasUnitId;
- (bool)hasVenueId;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithVenueID:(unsigned long long)arg1 businessID:(unsigned long long)arg2;
- (id)initWithVenueID:(unsigned long long)arg1 businessID:(unsigned long long)arg2 componentIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)levelId;
- (int)levelOrdinal;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)sectionIdAtIndex:(unsigned long long)arg1;
- (unsigned long long*)sectionIds;
- (unsigned long long)sectionIdsCount;
- (void)setBuildingId:(unsigned long long)arg1;
- (void)setContainedBys:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setFeatureId:(unsigned long long)arg1;
- (void)setFixtureId:(unsigned long long)arg1;
- (void)setGeminiId:(unsigned long long)arg1;
- (void)setHasBuildingId:(bool)arg1;
- (void)setHasFeatureId:(bool)arg1;
- (void)setHasFixtureId:(bool)arg1;
- (void)setHasGeminiId:(bool)arg1;
- (void)setHasLevelId:(bool)arg1;
- (void)setHasLevelOrdinal:(bool)arg1;
- (void)setHasUnitId:(bool)arg1;
- (void)setHasVenueId:(bool)arg1;
- (void)setLevelId:(unsigned long long)arg1;
- (void)setLevelOrdinal:(int)arg1;
- (void)setSectionIds:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setUnitId:(unsigned long long)arg1;
- (void)setVenueId:(unsigned long long)arg1;
- (unsigned long long)unitId;
- (id)unknownFields;
- (unsigned long long)venueId;
- (void)writeTo:(id)arg1;

@end
