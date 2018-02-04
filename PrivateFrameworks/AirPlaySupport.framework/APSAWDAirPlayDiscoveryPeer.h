/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
 */

@interface APSAWDAirPlayDiscoveryPeer : PBCodable <NSCopying> {
    bool  _aggregated;
    unsigned long long  _awdlAirPlayTXTReceivedMs;
    unsigned long long  _awdlRAOPTXTReceivedMs;
    int  _awdlRSSI;
    int  _btleRSSI;
    int  _deviceFeature;
    NSString * _discoverySessionUUID;
    struct { 
        unsigned int awdlAirPlayTXTReceivedMs : 1; 
        unsigned int awdlRAOPTXTReceivedMs : 1; 
        unsigned int startTime : 1; 
        unsigned int targetPresenceBeaconReceivedMs : 1; 
        unsigned int timestamp : 1; 
        unsigned int wifiAirPlayTXTReceivedMs : 1; 
        unsigned int wifiRAOPTXTReceivedMs : 1; 
        unsigned int awdlRSSI : 1; 
        unsigned int btleRSSI : 1; 
        unsigned int deviceFeature : 1; 
        unsigned int status : 1; 
        unsigned int wifiRSSI : 1; 
        unsigned int aggregated : 1; 
    }  _has;
    unsigned long long  _startTime;
    int  _status;
    unsigned long long  _targetPresenceBeaconReceivedMs;
    unsigned long long  _timestamp;
    unsigned long long  _wifiAirPlayTXTReceivedMs;
    unsigned long long  _wifiRAOPTXTReceivedMs;
    int  _wifiRSSI;
}

@property (nonatomic) bool aggregated;
@property (nonatomic) unsigned long long awdlAirPlayTXTReceivedMs;
@property (nonatomic) unsigned long long awdlRAOPTXTReceivedMs;
@property (nonatomic) int awdlRSSI;
@property (nonatomic) int btleRSSI;
@property (nonatomic) int deviceFeature;
@property (nonatomic, retain) NSString *discoverySessionUUID;
@property (nonatomic) bool hasAggregated;
@property (nonatomic) bool hasAwdlAirPlayTXTReceivedMs;
@property (nonatomic) bool hasAwdlRAOPTXTReceivedMs;
@property (nonatomic) bool hasAwdlRSSI;
@property (nonatomic) bool hasBtleRSSI;
@property (nonatomic) bool hasDeviceFeature;
@property (nonatomic, readonly) bool hasDiscoverySessionUUID;
@property (nonatomic) bool hasStartTime;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTargetPresenceBeaconReceivedMs;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasWifiAirPlayTXTReceivedMs;
@property (nonatomic) bool hasWifiRAOPTXTReceivedMs;
@property (nonatomic) bool hasWifiRSSI;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long targetPresenceBeaconReceivedMs;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long wifiAirPlayTXTReceivedMs;
@property (nonatomic) unsigned long long wifiRAOPTXTReceivedMs;
@property (nonatomic) int wifiRSSI;

- (bool)aggregated;
- (unsigned long long)awdlAirPlayTXTReceivedMs;
- (unsigned long long)awdlRAOPTXTReceivedMs;
- (int)awdlRSSI;
- (int)btleRSSI;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (int)deviceFeature;
- (id)dictionaryRepresentation;
- (id)discoverySessionUUID;
- (bool)hasAggregated;
- (bool)hasAwdlAirPlayTXTReceivedMs;
- (bool)hasAwdlRAOPTXTReceivedMs;
- (bool)hasAwdlRSSI;
- (bool)hasBtleRSSI;
- (bool)hasDeviceFeature;
- (bool)hasDiscoverySessionUUID;
- (bool)hasStartTime;
- (bool)hasStatus;
- (bool)hasTargetPresenceBeaconReceivedMs;
- (bool)hasTimestamp;
- (bool)hasWifiAirPlayTXTReceivedMs;
- (bool)hasWifiRAOPTXTReceivedMs;
- (bool)hasWifiRSSI;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAggregated:(bool)arg1;
- (void)setAwdlAirPlayTXTReceivedMs:(unsigned long long)arg1;
- (void)setAwdlRAOPTXTReceivedMs:(unsigned long long)arg1;
- (void)setAwdlRSSI:(int)arg1;
- (void)setBtleRSSI:(int)arg1;
- (void)setDeviceFeature:(int)arg1;
- (void)setDiscoverySessionUUID:(id)arg1;
- (void)setHasAggregated:(bool)arg1;
- (void)setHasAwdlAirPlayTXTReceivedMs:(bool)arg1;
- (void)setHasAwdlRAOPTXTReceivedMs:(bool)arg1;
- (void)setHasAwdlRSSI:(bool)arg1;
- (void)setHasBtleRSSI:(bool)arg1;
- (void)setHasDeviceFeature:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTargetPresenceBeaconReceivedMs:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWifiAirPlayTXTReceivedMs:(bool)arg1;
- (void)setHasWifiRAOPTXTReceivedMs:(bool)arg1;
- (void)setHasWifiRSSI:(bool)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (void)setStatus:(int)arg1;
- (void)setTargetPresenceBeaconReceivedMs:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWifiAirPlayTXTReceivedMs:(unsigned long long)arg1;
- (void)setWifiRAOPTXTReceivedMs:(unsigned long long)arg1;
- (void)setWifiRSSI:(int)arg1;
- (unsigned long long)startTime;
- (int)status;
- (unsigned long long)targetPresenceBeaconReceivedMs;
- (unsigned long long)timestamp;
- (unsigned long long)wifiAirPlayTXTReceivedMs;
- (unsigned long long)wifiRAOPTXTReceivedMs;
- (int)wifiRSSI;
- (void)writeTo:(id)arg1;

@end
