/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventCacheHit : PBCodable <NSCopying> {
    unsigned int  _cacheHitCount;
    unsigned int  _cacheMissCount;
    int  _cacheType;
    struct { 
        unsigned int cacheHitCount : 1; 
        unsigned int cacheMissCount : 1; 
        unsigned int cacheType : 1; 
    }  _has;
}

@property (nonatomic) unsigned int cacheHitCount;
@property (nonatomic) unsigned int cacheMissCount;
@property (nonatomic) int cacheType;
@property (nonatomic) bool hasCacheHitCount;
@property (nonatomic) bool hasCacheMissCount;
@property (nonatomic) bool hasCacheType;

- (int)StringAsCacheType:(id)arg1;
- (unsigned int)cacheHitCount;
- (unsigned int)cacheMissCount;
- (int)cacheType;
- (id)cacheTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCacheHitCount;
- (bool)hasCacheMissCount;
- (bool)hasCacheType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCacheHitCount:(unsigned int)arg1;
- (void)setCacheMissCount:(unsigned int)arg1;
- (void)setCacheType:(int)arg1;
- (void)setHasCacheHitCount:(bool)arg1;
- (void)setHasCacheMissCount:(bool)arg1;
- (void)setHasCacheType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
