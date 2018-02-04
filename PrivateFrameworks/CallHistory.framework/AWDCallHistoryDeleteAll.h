/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface AWDCallHistoryDeleteAll : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int recordCount : 1; 
    }  _has;
    unsigned int  _recordCount;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasRecordCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int recordCount;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRecordCount;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)recordCount;
- (void)setHasRecordCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRecordCount:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
