/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNRouteCoordinate : PBCodable <NSCopying> {
    struct { 
        unsigned int index : 1; 
        unsigned int offset : 1; 
    }  _has;
    unsigned int  _index;
    float  _offset;
}

@property (nonatomic) bool hasIndex;
@property (nonatomic) bool hasOffset;
@property (nonatomic) unsigned int index;
@property (nonatomic) float offset;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIndex;
- (bool)hasOffset;
- (unsigned long long)hash;
- (unsigned int)index;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (float)offset;
- (bool)readFrom:(id)arg1;
- (void)setHasIndex:(bool)arg1;
- (void)setHasOffset:(bool)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setOffset:(float)arg1;
- (void)writeTo:(id)arg1;

@end
