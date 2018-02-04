/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPAppCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray * _appLocations;
    CLPMeta * _meta;
    NSData * _signature;
}

@property (nonatomic, retain) NSMutableArray *appLocations;
@property (nonatomic, readonly) bool hasSignature;
@property (nonatomic, retain) CLPMeta *meta;
@property (nonatomic, retain) NSData *signature;

+ (Class)appLocationType;

- (void).cxx_destruct;
- (void)addAppLocation:(id)arg1;
- (id)appLocationAtIndex:(unsigned long long)arg1;
- (id)appLocations;
- (unsigned long long)appLocationsCount;
- (void)clearAppLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSignature;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)meta;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAppLocations:(id)arg1;
- (void)setMeta:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;
- (void)writeTo:(id)arg1;

@end
