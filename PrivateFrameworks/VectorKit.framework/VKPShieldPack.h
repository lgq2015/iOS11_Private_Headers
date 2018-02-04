/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPShieldPack : PBCodable <NSCopying> {
    NSMutableArray * _atlas;
    NSMutableArray * _shields;
}

@property (nonatomic, retain) NSMutableArray *atlas;
@property (nonatomic, retain) NSMutableArray *shields;

- (void)addAtlas:(id)arg1;
- (void)addShields:(id)arg1;
- (id)atlas;
- (id)atlasAtIndex:(unsigned long long)arg1;
- (unsigned long long)atlasCount;
- (void)clearAtlas;
- (void)clearShields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAtlas:(id)arg1;
- (void)setShields:(id)arg1;
- (id)shields;
- (id)shieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)shieldsCount;
- (void)writeTo:(id)arg1;

@end
