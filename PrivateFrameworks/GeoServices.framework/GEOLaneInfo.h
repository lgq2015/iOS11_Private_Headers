/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLaneInfo : PBCodable <NSCopying> {
    NSMutableArray * _arrows;
    struct { 
        unsigned int hov : 1; 
        unsigned int preferredForMultipleManeuvers : 1; 
        unsigned int supportsManeuver : 1; 
    }  _has;
    bool  _hov;
    bool  _preferredForMultipleManeuvers;
    bool  _supportsManeuver;
}

@property (nonatomic, retain) NSMutableArray *arrows;
@property (nonatomic) bool hasHov;
@property (nonatomic) bool hasPreferredForMultipleManeuvers;
@property (nonatomic) bool hasSupportsManeuver;
@property (nonatomic) bool hov;
@property (nonatomic) bool preferredForMultipleManeuvers;
@property (nonatomic) bool supportsManeuver;

+ (Class)arrowType;

- (void).cxx_destruct;
- (void)addArrow:(id)arg1;
- (id)arrowAtIndex:(unsigned long long)arg1;
- (id)arrows;
- (unsigned long long)arrowsCount;
- (void)clearArrows;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHov;
- (bool)hasPreferredForMultipleManeuvers;
- (bool)hasSupportsManeuver;
- (unsigned long long)hash;
- (bool)hov;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)preferredForMultipleManeuvers;
- (bool)readFrom:(id)arg1;
- (void)setArrows:(id)arg1;
- (void)setHasHov:(bool)arg1;
- (void)setHasPreferredForMultipleManeuvers:(bool)arg1;
- (void)setHasSupportsManeuver:(bool)arg1;
- (void)setHov:(bool)arg1;
- (void)setPreferredForMultipleManeuvers:(bool)arg1;
- (void)setSupportsManeuver:(bool)arg1;
- (bool)supportsManeuver;
- (void)writeTo:(id)arg1;

@end
