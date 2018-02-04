/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPRecordRetrieveRequest : PBRequest <NSCopying> {
    NSString * _clientVersionETag;
    FCCKPRecordIdentifier * _recordIdentifier;
    FCCKPRequestedFields * _requestedFields;
    NSString * _versionETag;
}

@property (nonatomic, retain) NSString *clientVersionETag;
@property (nonatomic, readonly) bool hasClientVersionETag;
@property (nonatomic, readonly) bool hasRecordIdentifier;
@property (nonatomic, readonly) bool hasRequestedFields;
@property (nonatomic, readonly) bool hasVersionETag;
@property (nonatomic, retain) FCCKPRecordIdentifier *recordIdentifier;
@property (nonatomic, retain) FCCKPRequestedFields *requestedFields;
@property (nonatomic, retain) NSString *versionETag;

+ (id)options;

- (id)clientVersionETag;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientVersionETag;
- (bool)hasRecordIdentifier;
- (bool)hasRequestedFields;
- (bool)hasVersionETag;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordIdentifier;
- (unsigned int)requestTypeCode;
- (id)requestedFields;
- (Class)responseClass;
- (void)setClientVersionETag:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)setRequestedFields:(id)arg1;
- (void)setVersionETag:(id)arg1;
- (id)versionETag;
- (void)writeTo:(id)arg1;

@end
