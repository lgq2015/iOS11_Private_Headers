/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface AWDCallHistoryCommCenterMigration : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int recordCount : 1; 
        unsigned int version : 1; 
        unsigned int success : 1; 
    }  _has;
    unsigned int  _recordCount;
    bool  _success;
    unsigned long long  _timestamp;
    unsigned int  _version;
}

@property (nonatomic) bool hasRecordCount;
@property (nonatomic) bool hasSuccess;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasVersion;
@property (nonatomic) unsigned int recordCount;
@property (nonatomic) bool success;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int version;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRecordCount;
- (bool)hasSuccess;
- (bool)hasTimestamp;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)recordCount;
- (void)setHasRecordCount:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setRecordCount:(unsigned int)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setVersion:(unsigned int)arg1;
- (bool)success;
- (unsigned long long)timestamp;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
