/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPPassCollectionRequest : PBRequest <NSCopying> {
    CLPMeta * _meta;
    NSMutableArray * _passLocations;
    NSData * _signature;
}

@property (nonatomic, readonly) bool hasSignature;
@property (nonatomic, retain) CLPMeta *meta;
@property (nonatomic, retain) NSMutableArray *passLocations;
@property (nonatomic, retain) NSData *signature;

+ (Class)passLocationType;

- (void).cxx_destruct;
- (void)addPassLocation:(id)arg1;
- (void)clearPassLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSignature;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)meta;
- (id)passLocationAtIndex:(unsigned long long)arg1;
- (id)passLocations;
- (unsigned long long)passLocationsCount;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setMeta:(id)arg1;
- (void)setPassLocations:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;
- (void)writeTo:(id)arg1;

@end
