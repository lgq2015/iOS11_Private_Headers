/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDFeatureBuilding : PBCodable <NSCopying> {
    GEOPDVenueBuilding * _building;
    NSMutableArray * _levels;
    PBUnknownFields * _unknownFields;
    GEOPDVenueContainer * _venueContainer;
}

@property (nonatomic, retain) GEOPDVenueBuilding *building;
@property (nonatomic, readonly) bool hasBuilding;
@property (nonatomic, readonly) bool hasVenueContainer;
@property (nonatomic, retain) NSMutableArray *levels;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDVenueContainer *venueContainer;

+ (Class)levelType;

- (void).cxx_destruct;
- (void)addLevel:(id)arg1;
- (id)building;
- (void)clearLevels;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBuilding;
- (bool)hasVenueContainer;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)levelAtIndex:(unsigned long long)arg1;
- (id)levels;
- (unsigned long long)levelsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBuilding:(id)arg1;
- (void)setLevels:(id)arg1;
- (void)setVenueContainer:(id)arg1;
- (id)unknownFields;
- (id)venueContainer;
- (void)writeTo:(id)arg1;

@end
