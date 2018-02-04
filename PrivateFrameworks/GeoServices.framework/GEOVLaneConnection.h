/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVLaneConnection : PBCodable <NSCopying> {
    unsigned int  _firstLaneIndex;
    unsigned int  _firstRoadIndex;
    unsigned int  _secondLaneIndex;
    unsigned int  _secondRoadIndex;
}

@property (nonatomic) unsigned int firstLaneIndex;
@property (nonatomic) unsigned int firstRoadIndex;
@property (nonatomic) unsigned int secondLaneIndex;
@property (nonatomic) unsigned int secondRoadIndex;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)firstLaneIndex;
- (unsigned int)firstRoadIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)secondLaneIndex;
- (unsigned int)secondRoadIndex;
- (void)setFirstLaneIndex:(unsigned int)arg1;
- (void)setFirstRoadIndex:(unsigned int)arg1;
- (void)setSecondLaneIndex:(unsigned int)arg1;
- (void)setSecondRoadIndex:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
