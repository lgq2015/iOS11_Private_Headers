/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface AWDCallHistoryTransactionLogSize : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int records : 1; 
        unsigned int sizeBytes : 1; 
    }  _has;
    unsigned int  _records;
    unsigned int  _sizeBytes;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasRecords;
@property (nonatomic) bool hasSizeBytes;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int records;
@property (nonatomic) unsigned int sizeBytes;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRecords;
- (bool)hasSizeBytes;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)records;
- (void)setHasRecords:(bool)arg1;
- (void)setHasSizeBytes:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRecords:(unsigned int)arg1;
- (void)setSizeBytes:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)sizeBytes;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
