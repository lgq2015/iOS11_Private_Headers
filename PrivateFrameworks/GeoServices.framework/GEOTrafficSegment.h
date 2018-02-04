/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficSegment : PBCodable <NSCopying> {
    struct { 
        unsigned int speed : 1; 
        unsigned int width : 1; 
    }  _has;
    int  _speed;
    int  _vertexCount;
    int  _vertexOffset;
    int  _width;
}

@property (nonatomic) bool hasSpeed;
@property (nonatomic) bool hasWidth;
@property (nonatomic) int speed;
@property (nonatomic) int vertexCount;
@property (nonatomic) int vertexOffset;
@property (nonatomic) int width;

- (int)StringAsSpeed:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSpeed;
- (bool)hasWidth;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSpeed:(bool)arg1;
- (void)setHasWidth:(bool)arg1;
- (void)setSpeed:(int)arg1;
- (void)setVertexCount:(int)arg1;
- (void)setVertexOffset:(int)arg1;
- (void)setWidth:(int)arg1;
- (int)speed;
- (id)speedAsString:(int)arg1;
- (int)vertexCount;
- (int)vertexOffset;
- (int)width;
- (void)writeTo:(id)arg1;

@end
