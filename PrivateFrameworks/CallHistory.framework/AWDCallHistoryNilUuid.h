/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface AWDCallHistoryNilUuid : PBCodable <NSCopying> {
    unsigned int  _callStatus;
    unsigned int  _callType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int callStatus : 1; 
        unsigned int callType : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int callStatus;
@property (nonatomic) unsigned int callType;
@property (nonatomic) bool hasCallStatus;
@property (nonatomic) bool hasCallType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)callStatus;
- (unsigned int)callType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCallStatus;
- (bool)hasCallType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCallStatus:(unsigned int)arg1;
- (void)setCallType:(unsigned int)arg1;
- (void)setHasCallStatus:(bool)arg1;
- (void)setHasCallType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
