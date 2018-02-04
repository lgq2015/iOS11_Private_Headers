/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface AWDSharingContinuityKeyboardTriggered : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int rssi : 1; 
        unsigned int smoothedRSSI : 1; 
    }  _has;
    int  _rssi;
    NSString * _sessionUUID;
    int  _smoothedRSSI;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasRssi;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasSmoothedRSSI;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int rssi;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) int smoothedRSSI;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRssi;
- (bool)hasSessionUUID;
- (bool)hasSmoothedRSSI;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)rssi;
- (id)sessionUUID;
- (void)setHasRssi:(bool)arg1;
- (void)setHasSmoothedRSSI:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRssi:(int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSmoothedRSSI:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)smoothedRSSI;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end