/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
 */

@interface APSAWDAirPlayDiscoveryPresenceModeStats : PBCodable <NSCopying> {
    NSString * _discoverySessionUUID;
    int  _firstDeviceFoundMs;
    struct { 
        unsigned int startTime : 1; 
        unsigned int timestamp : 1; 
        unsigned int firstDeviceFoundMs : 1; 
        unsigned int status : 1; 
    }  _has;
    unsigned long long  _startTime;
    int  _status;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *discoverySessionUUID;
@property (nonatomic) int firstDeviceFoundMs;
@property (nonatomic, readonly) bool hasDiscoverySessionUUID;
@property (nonatomic) bool hasFirstDeviceFoundMs;
@property (nonatomic) bool hasStartTime;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)discoverySessionUUID;
- (int)firstDeviceFoundMs;
- (bool)hasDiscoverySessionUUID;
- (bool)hasFirstDeviceFoundMs;
- (bool)hasStartTime;
- (bool)hasStatus;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDiscoverySessionUUID:(id)arg1;
- (void)setFirstDeviceFoundMs:(int)arg1;
- (void)setHasFirstDeviceFoundMs:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)startTime;
- (int)status;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
