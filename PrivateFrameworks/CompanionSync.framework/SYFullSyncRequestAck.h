/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYFullSyncRequestAck : PBCodable <NSCopying> {
    bool  _accepted;
    SYErrorInfo * _error;
    SYMessageHeader * _header;
    NSString * _inProgressSyncID;
    NSString * _requestSyncID;
}

@property (nonatomic) bool accepted;
@property (nonatomic, retain) SYErrorInfo *error;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic, readonly) bool hasInProgressSyncID;
@property (nonatomic, retain) SYMessageHeader *header;
@property (nonatomic, retain) NSString *inProgressSyncID;
@property (nonatomic, retain) NSString *requestSyncID;

- (void).cxx_destruct;
- (bool)accepted;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (bool)hasInProgressSyncID;
- (unsigned long long)hash;
- (id)header;
- (id)inProgressSyncID;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestSyncID;
- (void)setAccepted:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setInProgressSyncID:(id)arg1;
- (void)setRequestSyncID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
