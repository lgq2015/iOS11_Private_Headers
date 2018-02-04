/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPGenericShieldStylePack : PBCodable <NSCopying> {
    NSMutableArray * _genericShields;
    NSMutableArray * _textureAtlas;
}

@property (nonatomic, retain) NSMutableArray *genericShields;
@property (nonatomic, retain) NSMutableArray *textureAtlas;

- (void)addGenericShield:(id)arg1;
- (void)addTextureAtlas:(id)arg1;
- (void)clearGenericShields;
- (void)clearTextureAtlas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)genericShieldAtIndex:(unsigned long long)arg1;
- (id)genericShields;
- (unsigned long long)genericShieldsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGenericShields:(id)arg1;
- (void)setTextureAtlas:(id)arg1;
- (id)textureAtlas;
- (id)textureAtlasAtIndex:(unsigned long long)arg1;
- (unsigned long long)textureAtlasCount;
- (void)writeTo:(id)arg1;

@end
