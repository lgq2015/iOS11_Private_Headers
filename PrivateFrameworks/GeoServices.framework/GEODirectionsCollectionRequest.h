/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray * _requestElements;
}

@property (nonatomic, retain) NSMutableArray *requestElements;

+ (Class)requestElementsType;

- (void).cxx_destruct;
- (void)addRequestElements:(id)arg1;
- (void)clearRequestElements;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestElements;
- (id)requestElementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)requestElementsCount;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setRequestElements:(id)arg1;
- (void)writeTo:(id)arg1;

@end
