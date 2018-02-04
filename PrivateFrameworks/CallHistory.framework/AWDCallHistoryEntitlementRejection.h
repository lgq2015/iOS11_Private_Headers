/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface AWDCallHistoryEntitlementRejection : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int pid : 1; 
    }  _has;
    unsigned int  _pid;
    NSString * _procname;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasPid;
@property (nonatomic, readonly) bool hasProcname;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int pid;
@property (nonatomic, retain) NSString *procname;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPid;
- (bool)hasProcname;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)pid;
- (id)procname;
- (bool)readFrom:(id)arg1;
- (void)setHasPid:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setPid:(unsigned int)arg1;
- (void)setProcname:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
