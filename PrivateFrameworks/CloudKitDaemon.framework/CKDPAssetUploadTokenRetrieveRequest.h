/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest <NSCopying> {
    NSMutableArray * _assets;
    NSData * _authCopyRequest;
    NSData * _authPutRequest;
    NSMutableArray * _contentRequestHeaders;
    CKDPRecordFieldIdentifier * _field;
    CKDPRecordType * _type;
    NSMutableArray * _uploads;
}

@property (nonatomic, retain) NSMutableArray *assets;
@property (nonatomic, retain) NSData *authCopyRequest;
@property (nonatomic, retain) NSData *authPutRequest;
@property (nonatomic, retain) NSMutableArray *contentRequestHeaders;
@property (nonatomic, retain) CKDPRecordFieldIdentifier *field;
@property (nonatomic, readonly) bool hasAuthCopyRequest;
@property (nonatomic, readonly) bool hasAuthPutRequest;
@property (nonatomic, readonly) bool hasField;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic, retain) CKDPRecordType *type;
@property (nonatomic, retain) NSMutableArray *uploads;

+ (Class)assetsType;
+ (Class)contentRequestHeadersType;
+ (id)options;
+ (Class)uploadsType;

- (void).cxx_destruct;
- (void)addAssets:(id)arg1;
- (void)addContentRequestHeaders:(id)arg1;
- (void)addUploads:(id)arg1;
- (id)assets;
- (id)assetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetsCount;
- (id)authCopyRequest;
- (id)authPutRequest;
- (void)clearAssets;
- (void)clearContentRequestHeaders;
- (void)clearUploads;
- (id)contentRequestHeaders;
- (id)contentRequestHeadersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentRequestHeadersCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)field;
- (bool)hasAuthCopyRequest;
- (bool)hasAuthPutRequest;
- (bool)hasField;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAssets:(id)arg1;
- (void)setAuthCopyRequest:(id)arg1;
- (void)setAuthPutRequest:(id)arg1;
- (void)setContentRequestHeaders:(id)arg1;
- (void)setField:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUploads:(id)arg1;
- (id)type;
- (id)uploads;
- (id)uploadsAtIndex:(unsigned long long)arg1;
- (unsigned long long)uploadsCount;
- (void)writeTo:(id)arg1;

@end
