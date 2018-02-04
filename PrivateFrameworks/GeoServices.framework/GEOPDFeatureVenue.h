/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDFeatureVenue : PBCodable <NSCopying> {
    NSMutableArray * _buildings;
    NSMutableArray * _levels;
    PBUnknownFields * _unknownFields;
    GEOPDVenueContainer * _venueContainer;
}

@property (nonatomic, retain) NSMutableArray *buildings;
@property (nonatomic, readonly) bool hasVenueContainer;
@property (nonatomic, retain) NSMutableArray *levels;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDVenueContainer *venueContainer;

+ (Class)buildingType;
+ (Class)levelType;

- (void).cxx_destruct;
- (void)addBuilding:(id)arg1;
- (void)addLevel:(id)arg1;
- (id)buildingAtIndex:(unsigned long long)arg1;
- (id)buildings;
- (unsigned long long)buildingsCount;
- (void)clearBuildings;
- (void)clearLevels;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVenueContainer;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)levelAtIndex:(unsigned long long)arg1;
- (id)levels;
- (unsigned long long)levelsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBuildings:(id)arg1;
- (void)setLevels:(id)arg1;
- (void)setVenueContainer:(id)arg1;
- (id)unknownFields;
- (id)venueContainer;
- (void)writeTo:(id)arg1;

@end
