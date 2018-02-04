/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPQuaternion : PBCodable <NSCopying> {
    struct { 
        unsigned int w : 1; 
    }  _has;
    float  _w;
    float  _x;
    float  _y;
    float  _z;
}

@property (nonatomic) bool hasW;
@property (nonatomic) float w;
@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float z;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasW;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasW:(bool)arg1;
- (void)setW:(float)arg1;
- (void)setX:(float)arg1;
- (void)setY:(float)arg1;
- (void)setZ:(float)arg1;
- (float)w;
- (void)writeTo:(id)arg1;
- (float)x;
- (float)y;
- (float)z;

@end
