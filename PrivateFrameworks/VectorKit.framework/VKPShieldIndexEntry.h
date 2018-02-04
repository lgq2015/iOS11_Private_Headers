/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPShieldIndexEntry : PBCodable <NSCopying> {
    NSString * _artworkIdentifier;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _defaultForFeatureTypes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _shieldTypes;
}

@property (nonatomic, retain) NSString *artworkIdentifier;
@property (nonatomic, readonly) int*defaultForFeatureTypes;
@property (nonatomic, readonly) unsigned long long defaultForFeatureTypesCount;
@property (nonatomic, readonly) bool hasArtworkIdentifier;
@property (nonatomic, readonly) int*shieldTypes;
@property (nonatomic, readonly) unsigned long long shieldTypesCount;

- (void)addDefaultForFeatureType:(int)arg1;
- (void)addShieldTypes:(int)arg1;
- (id)artworkIdentifier;
- (void)clearDefaultForFeatureTypes;
- (void)clearShieldTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)defaultForFeatureTypeAtIndex:(unsigned long long)arg1;
- (int*)defaultForFeatureTypes;
- (unsigned long long)defaultForFeatureTypesCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArtworkIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArtworkIdentifier:(id)arg1;
- (void)setDefaultForFeatureTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setShieldTypes:(int*)arg1 count:(unsigned long long)arg2;
- (int*)shieldTypes;
- (int)shieldTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)shieldTypesCount;
- (void)writeTo:(id)arg1;

@end
