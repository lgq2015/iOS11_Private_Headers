/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPPoiCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray * _harvests;
    CLPMeta * _meta;
}

@property (nonatomic, retain) NSMutableArray *harvests;
@property (nonatomic, retain) CLPMeta *meta;

+ (Class)harvestsType;

- (void).cxx_destruct;
- (void)addHarvests:(id)arg1;
- (void)clearHarvests;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)harvests;
- (id)harvestsAtIndex:(unsigned long long)arg1;
- (unsigned long long)harvestsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)meta;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setHarvests:(id)arg1;
- (void)setMeta:(id)arg1;
- (void)writeTo:(id)arg1;

@end
