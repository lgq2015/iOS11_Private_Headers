/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYBatchChunkAck : PBCodable <NSCopying> {
    unsigned int  _chunkIndex;
    SYErrorInfo * _error;
    SYMessageHeader * _header;
    NSString * _syncID;
}

@property (nonatomic) unsigned int chunkIndex;
@property (nonatomic, retain) SYErrorInfo *error;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic, retain) SYMessageHeader *header;
@property (nonatomic, retain) NSString *syncID;

- (void).cxx_destruct;
- (unsigned int)chunkIndex;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (unsigned long long)hash;
- (id)header;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChunkIndex:(unsigned int)arg1;
- (void)setError:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setSyncID:(id)arg1;
- (id)syncID;
- (void)writeTo:(id)arg1;

@end
