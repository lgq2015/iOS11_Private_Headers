/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface AWDCallHistoryDeviceUnlocked : PBCodable <NSCopying> {
    unsigned int  _callCount;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int callCount : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int callCount;
@property (nonatomic) bool hasCallCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)callCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCallCount;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCallCount:(unsigned int)arg1;
- (void)setHasCallCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
