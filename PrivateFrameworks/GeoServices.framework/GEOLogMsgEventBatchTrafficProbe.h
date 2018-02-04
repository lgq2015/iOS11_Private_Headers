/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventBatchTrafficProbe : PBCodable <NSCopying> {
    NSData * _locationCollection;
}

@property (nonatomic, readonly) bool hasLocationCollection;
@property (nonatomic, retain) NSData *locationCollection;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocationCollection;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locationCollection;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLocationCollection:(id)arg1;
- (void)writeTo:(id)arg1;

@end
