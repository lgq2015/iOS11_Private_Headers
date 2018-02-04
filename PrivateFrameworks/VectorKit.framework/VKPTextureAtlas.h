/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPTextureAtlas : PBCodable <NSCopying> {
    unsigned int  _quadHeight;
    unsigned int  _quadWidth;
    NSData * _texture;
}

@property (nonatomic) unsigned int quadHeight;
@property (nonatomic) unsigned int quadWidth;
@property (nonatomic, retain) NSData *texture;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)quadHeight;
- (unsigned int)quadWidth;
- (bool)readFrom:(id)arg1;
- (void)setQuadHeight:(unsigned int)arg1;
- (void)setQuadWidth:(unsigned int)arg1;
- (void)setTexture:(id)arg1;
- (id)texture;
- (void)writeTo:(id)arg1;

@end