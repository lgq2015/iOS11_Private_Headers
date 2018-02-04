/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVPointCharacteristic : PBCodable <NSCopying> {
    bool  _brunnelEntry;
    bool  _castShadow;
    bool  _cropped;
    struct { 
        unsigned int roadLaneCount : 1; 
        unsigned int roadOffset : 1; 
        unsigned int sectionIndex : 1; 
        unsigned int vertexIndex : 1; 
        unsigned int zLevel : 1; 
        unsigned int brunnelEntry : 1; 
        unsigned int castShadow : 1; 
        unsigned int cropped : 1; 
        unsigned int shouldDrawLanes : 1; 
    }  _has;
    GEOVLaneCharacteristic * _laneCharacteristic;
    int  _roadLaneCount;
    int  _roadOffset;
    int  _sectionIndex;
    bool  _shouldDrawLanes;
    int  _vertexIndex;
    int  _zLevel;
}

@property (nonatomic) bool brunnelEntry;
@property (nonatomic) bool castShadow;
@property (nonatomic) bool cropped;
@property (nonatomic) bool hasBrunnelEntry;
@property (nonatomic) bool hasCastShadow;
@property (nonatomic) bool hasCropped;
@property (nonatomic, readonly) bool hasLaneCharacteristic;
@property (nonatomic) bool hasRoadLaneCount;
@property (nonatomic) bool hasRoadOffset;
@property (nonatomic) bool hasSectionIndex;
@property (nonatomic) bool hasShouldDrawLanes;
@property (nonatomic) bool hasVertexIndex;
@property (nonatomic) bool hasZLevel;
@property (nonatomic, retain) GEOVLaneCharacteristic *laneCharacteristic;
@property (nonatomic) int roadLaneCount;
@property (nonatomic) int roadOffset;
@property (nonatomic) int sectionIndex;
@property (nonatomic) bool shouldDrawLanes;
@property (nonatomic) int vertexIndex;
@property (nonatomic) int zLevel;

- (void).cxx_destruct;
- (bool)brunnelEntry;
- (bool)castShadow;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)cropped;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBrunnelEntry;
- (bool)hasCastShadow;
- (bool)hasCropped;
- (bool)hasLaneCharacteristic;
- (bool)hasRoadLaneCount;
- (bool)hasRoadOffset;
- (bool)hasSectionIndex;
- (bool)hasShouldDrawLanes;
- (bool)hasVertexIndex;
- (bool)hasZLevel;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)laneCharacteristic;
- (bool)readFrom:(id)arg1;
- (int)roadLaneCount;
- (int)roadOffset;
- (int)sectionIndex;
- (void)setBrunnelEntry:(bool)arg1;
- (void)setCastShadow:(bool)arg1;
- (void)setCropped:(bool)arg1;
- (void)setHasBrunnelEntry:(bool)arg1;
- (void)setHasCastShadow:(bool)arg1;
- (void)setHasCropped:(bool)arg1;
- (void)setHasRoadLaneCount:(bool)arg1;
- (void)setHasRoadOffset:(bool)arg1;
- (void)setHasSectionIndex:(bool)arg1;
- (void)setHasShouldDrawLanes:(bool)arg1;
- (void)setHasVertexIndex:(bool)arg1;
- (void)setHasZLevel:(bool)arg1;
- (void)setLaneCharacteristic:(id)arg1;
- (void)setRoadLaneCount:(int)arg1;
- (void)setRoadOffset:(int)arg1;
- (void)setSectionIndex:(int)arg1;
- (void)setShouldDrawLanes:(bool)arg1;
- (void)setVertexIndex:(int)arg1;
- (void)setZLevel:(int)arg1;
- (bool)shouldDrawLanes;
- (int)vertexIndex;
- (void)writeTo:(id)arg1;
- (int)zLevel;

@end
