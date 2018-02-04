/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface AWDCallHistorySyncOverLimit : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int transactionLogCount : 1; 
    }  _has;
    unsigned long long  _timestamp;
    unsigned int  _transactionLogCount;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTransactionLogCount;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int transactionLogCount;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (bool)hasTransactionLogCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransactionLogCount:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransactionLogCount:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)transactionLogCount;
- (void)writeTo:(id)arg1;

@end
