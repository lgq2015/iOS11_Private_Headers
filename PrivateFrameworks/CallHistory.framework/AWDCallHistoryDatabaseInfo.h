/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface AWDCallHistoryDatabaseInfo : PBCodable <NSCopying> {
    unsigned int  _fetchLimit;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int fetchLimit : 1; 
        unsigned int schema : 1; 
        unsigned int size : 1; 
    }  _has;
    unsigned int  _schema;
    unsigned int  _size;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int fetchLimit;
@property (nonatomic) bool hasFetchLimit;
@property (nonatomic) bool hasSchema;
@property (nonatomic) bool hasSize;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int schema;
@property (nonatomic) unsigned int size;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fetchLimit;
- (bool)hasFetchLimit;
- (bool)hasSchema;
- (bool)hasSize;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)schema;
- (void)setFetchLimit:(unsigned int)arg1;
- (void)setHasFetchLimit:(bool)arg1;
- (void)setHasSchema:(bool)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSchema:(unsigned int)arg1;
- (void)setSize:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)size;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
