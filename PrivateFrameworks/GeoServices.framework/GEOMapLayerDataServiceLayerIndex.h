/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapLayerDataServiceLayerIndex : PBCodable <NSCopying> {
    NSData * _index;
}

@property (nonatomic, readonly) bool hasIndex;
@property (nonatomic, retain) NSData *index;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIndex;
- (unsigned long long)hash;
- (id)index;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIndex:(id)arg1;
- (void)writeTo:(id)arg1;

@end
