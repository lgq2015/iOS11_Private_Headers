/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPMescalSessionInfoRequest : PBRequest <NSCopying> {
    NSData * _requestData;
}

@property (nonatomic, readonly) bool hasRequestData;
@property (nonatomic, retain) NSData *requestData;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRequestData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestData;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setRequestData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
