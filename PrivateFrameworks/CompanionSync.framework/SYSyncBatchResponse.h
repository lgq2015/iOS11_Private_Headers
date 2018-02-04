/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYSyncBatchResponse : PBCodable <NSCopying> {
    SYErrorInfo * _error;
    SYMessageHeader * _header;
    unsigned long long  _index;
    NSString * _sessionID;
}

@property (nonatomic, retain) SYErrorInfo *error;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic, retain) SYMessageHeader *header;
@property (nonatomic) unsigned long long index;
@property (nonatomic, retain) NSString *sessionID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (unsigned long long)hash;
- (id)header;
- (unsigned long long)index;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionID;
- (void)setError:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setSessionID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
