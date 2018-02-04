/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
 */

@interface APSAWDAirPlayDiscoveryDetailedModeStats : PBCodable <NSCopying> {
    int  _apRSSI;
    unsigned int  _devicePickedMs;
    NSString * _discoverySessionUUID;
    unsigned long long  _durationMs;
    unsigned long long  _firstAWDLDeviceFoundMs;
    unsigned long long  _firstSrcPresenceBeaconSentMs;
    struct { 
        unsigned int durationMs : 1; 
        unsigned int firstAWDLDeviceFoundMs : 1; 
        unsigned int firstSrcPresenceBeaconSentMs : 1; 
        unsigned int startTime : 1; 
        unsigned int timestamp : 1; 
        unsigned int apRSSI : 1; 
        unsigned int devicePickedMs : 1; 
        unsigned int status : 1; 
        unsigned int totalAWDLPeersDiscovered : 1; 
        unsigned int totalAWDLmDNSPeers : 1; 
        unsigned int totalPeersDiscovered : 1; 
    }  _has;
    unsigned long long  _startTime;
    int  _status;
    unsigned long long  _timestamp;
    unsigned int  _totalAWDLPeersDiscovered;
    unsigned int  _totalAWDLmDNSPeers;
    unsigned int  _totalPeersDiscovered;
}

@property (nonatomic) int apRSSI;
@property (nonatomic) unsigned int devicePickedMs;
@property (nonatomic, retain) NSString *discoverySessionUUID;
@property (nonatomic) unsigned long long durationMs;
@property (nonatomic) unsigned long long firstAWDLDeviceFoundMs;
@property (nonatomic) unsigned long long firstSrcPresenceBeaconSentMs;
@property (nonatomic) bool hasApRSSI;
@property (nonatomic) bool hasDevicePickedMs;
@property (nonatomic, readonly) bool hasDiscoverySessionUUID;
@property (nonatomic) bool hasDurationMs;
@property (nonatomic) bool hasFirstAWDLDeviceFoundMs;
@property (nonatomic) bool hasFirstSrcPresenceBeaconSentMs;
@property (nonatomic) bool hasStartTime;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTotalAWDLPeersDiscovered;
@property (nonatomic) bool hasTotalAWDLmDNSPeers;
@property (nonatomic) bool hasTotalPeersDiscovered;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int totalAWDLPeersDiscovered;
@property (nonatomic) unsigned int totalAWDLmDNSPeers;
@property (nonatomic) unsigned int totalPeersDiscovered;

- (int)apRSSI;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)devicePickedMs;
- (id)dictionaryRepresentation;
- (id)discoverySessionUUID;
- (unsigned long long)durationMs;
- (unsigned long long)firstAWDLDeviceFoundMs;
- (unsigned long long)firstSrcPresenceBeaconSentMs;
- (bool)hasApRSSI;
- (bool)hasDevicePickedMs;
- (bool)hasDiscoverySessionUUID;
- (bool)hasDurationMs;
- (bool)hasFirstAWDLDeviceFoundMs;
- (bool)hasFirstSrcPresenceBeaconSentMs;
- (bool)hasStartTime;
- (bool)hasStatus;
- (bool)hasTimestamp;
- (bool)hasTotalAWDLPeersDiscovered;
- (bool)hasTotalAWDLmDNSPeers;
- (bool)hasTotalPeersDiscovered;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setApRSSI:(int)arg1;
- (void)setDevicePickedMs:(unsigned int)arg1;
- (void)setDiscoverySessionUUID:(id)arg1;
- (void)setDurationMs:(unsigned long long)arg1;
- (void)setFirstAWDLDeviceFoundMs:(unsigned long long)arg1;
- (void)setFirstSrcPresenceBeaconSentMs:(unsigned long long)arg1;
- (void)setHasApRSSI:(bool)arg1;
- (void)setHasDevicePickedMs:(bool)arg1;
- (void)setHasDurationMs:(bool)arg1;
- (void)setHasFirstAWDLDeviceFoundMs:(bool)arg1;
- (void)setHasFirstSrcPresenceBeaconSentMs:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalAWDLPeersDiscovered:(bool)arg1;
- (void)setHasTotalAWDLmDNSPeers:(bool)arg1;
- (void)setHasTotalPeersDiscovered:(bool)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalAWDLPeersDiscovered:(unsigned int)arg1;
- (void)setTotalAWDLmDNSPeers:(unsigned int)arg1;
- (void)setTotalPeersDiscovered:(unsigned int)arg1;
- (unsigned long long)startTime;
- (int)status;
- (unsigned long long)timestamp;
- (unsigned int)totalAWDLPeersDiscovered;
- (unsigned int)totalAWDLmDNSPeers;
- (unsigned int)totalPeersDiscovered;
- (void)writeTo:(id)arg1;

@end
