/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMPBMetadata : PBCodable <NSCopying> {
    NSMutableArray * _hapCategories;
    NSMutableArray * _hapCharacteristics;
    NSMutableArray * _hapServices;
    struct { 
        unsigned int version : 1; 
    }  _has;
    int  _version;
}

@property (nonatomic, retain) NSMutableArray *hapCategories;
@property (nonatomic, retain) NSMutableArray *hapCharacteristics;
@property (nonatomic, retain) NSMutableArray *hapServices;
@property (nonatomic) bool hasVersion;
@property (nonatomic) int version;

+ (Class)hapCategoriesType;
+ (Class)hapCharacteristicsType;
+ (Class)hapServicesType;

- (void).cxx_destruct;
- (void)addHapCategories:(id)arg1;
- (void)addHapCharacteristics:(id)arg1;
- (void)addHapServices:(id)arg1;
- (void)clearHapCategories;
- (void)clearHapCharacteristics;
- (void)clearHapServices;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)hapCategories;
- (id)hapCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)hapCategoriesCount;
- (id)hapCharacteristics;
- (id)hapCharacteristicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)hapCharacteristicsCount;
- (id)hapServices;
- (id)hapServicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)hapServicesCount;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHapCategories:(id)arg1;
- (void)setHapCharacteristics:(id)arg1;
- (void)setHapServices:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setVersion:(int)arg1;
- (int)version;
- (void)writeTo:(id)arg1;

@end
