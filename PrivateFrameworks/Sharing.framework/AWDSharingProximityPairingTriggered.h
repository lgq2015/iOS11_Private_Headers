/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface AWDSharingProximityPairingTriggered : PBCodable <NSCopying> {
    int  _deviceRole;
    int  _deviceSide;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int deviceRole : 1; 
        unsigned int deviceSide : 1; 
        unsigned int primaryLocation : 1; 
        unsigned int rssi : 1; 
        unsigned int secondaryLocation : 1; 
        unsigned int smoothedRSSI : 1; 
        unsigned int outOfBoxMode : 1; 
    }  _has;
    NSString * _model;
    bool  _outOfBoxMode;
    int  _primaryLocation;
    int  _rssi;
    int  _secondaryLocation;
    NSString * _sessionUUID;
    int  _smoothedRSSI;
    unsigned long long  _timestamp;
}

@property (nonatomic) int deviceRole;
@property (nonatomic) int deviceSide;
@property (nonatomic) bool hasDeviceRole;
@property (nonatomic) bool hasDeviceSide;
@property (nonatomic, readonly) bool hasModel;
@property (nonatomic) bool hasOutOfBoxMode;
@property (nonatomic) bool hasPrimaryLocation;
@property (nonatomic) bool hasRssi;
@property (nonatomic) bool hasSecondaryLocation;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasSmoothedRSSI;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *model;
@property (nonatomic) bool outOfBoxMode;
@property (nonatomic) int primaryLocation;
@property (nonatomic) int rssi;
@property (nonatomic) int secondaryLocation;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) int smoothedRSSI;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)deviceRole;
- (int)deviceSide;
- (id)dictionaryRepresentation;
- (bool)hasDeviceRole;
- (bool)hasDeviceSide;
- (bool)hasModel;
- (bool)hasOutOfBoxMode;
- (bool)hasPrimaryLocation;
- (bool)hasRssi;
- (bool)hasSecondaryLocation;
- (bool)hasSessionUUID;
- (bool)hasSmoothedRSSI;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)model;
- (bool)outOfBoxMode;
- (int)primaryLocation;
- (bool)readFrom:(id)arg1;
- (int)rssi;
- (int)secondaryLocation;
- (id)sessionUUID;
- (void)setDeviceRole:(int)arg1;
- (void)setDeviceSide:(int)arg1;
- (void)setHasDeviceRole:(bool)arg1;
- (void)setHasDeviceSide:(bool)arg1;
- (void)setHasOutOfBoxMode:(bool)arg1;
- (void)setHasPrimaryLocation:(bool)arg1;
- (void)setHasRssi:(bool)arg1;
- (void)setHasSecondaryLocation:(bool)arg1;
- (void)setHasSmoothedRSSI:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setModel:(id)arg1;
- (void)setOutOfBoxMode:(bool)arg1;
- (void)setPrimaryLocation:(int)arg1;
- (void)setRssi:(int)arg1;
- (void)setSecondaryLocation:(int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSmoothedRSSI:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)smoothedRSSI;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
