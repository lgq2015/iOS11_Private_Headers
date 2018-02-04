/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface AWDSharingAirDropSessionInfo : PBCodable <NSCopying> {
    NSString * _browserID;
    NSString * _bundleID;
    unsigned int  _firstDiscovery;
    struct { 
        unsigned int startTimestamp : 1; 
        unsigned int timestamp : 1; 
        unsigned int firstDiscovery : 1; 
        unsigned int maxPeersDiscovered : 1; 
        unsigned int sessionDuration : 1; 
        unsigned int totalPeersDiscovered : 1; 
        unsigned int transfersCompleted : 1; 
        unsigned int transfersInitiated : 1; 
        unsigned int legacyMode : 1; 
    }  _has;
    bool  _legacyMode;
    unsigned int  _maxPeersDiscovered;
    unsigned int  _sessionDuration;
    NSString * _sessionID;
    unsigned long long  _startTimestamp;
    unsigned long long  _timestamp;
    unsigned int  _totalPeersDiscovered;
    unsigned int  _transfersCompleted;
    unsigned int  _transfersInitiated;
}

@property (nonatomic, retain) NSString *browserID;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) unsigned int firstDiscovery;
@property (nonatomic, readonly) bool hasBrowserID;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic) bool hasFirstDiscovery;
@property (nonatomic) bool hasLegacyMode;
@property (nonatomic) bool hasMaxPeersDiscovered;
@property (nonatomic) bool hasSessionDuration;
@property (nonatomic, readonly) bool hasSessionID;
@property (nonatomic) bool hasStartTimestamp;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTotalPeersDiscovered;
@property (nonatomic) bool hasTransfersCompleted;
@property (nonatomic) bool hasTransfersInitiated;
@property (nonatomic) bool legacyMode;
@property (nonatomic) unsigned int maxPeersDiscovered;
@property (nonatomic) unsigned int sessionDuration;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) unsigned long long startTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int totalPeersDiscovered;
@property (nonatomic) unsigned int transfersCompleted;
@property (nonatomic) unsigned int transfersInitiated;

- (void).cxx_destruct;
- (id)browserID;
- (id)bundleID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)firstDiscovery;
- (bool)hasBrowserID;
- (bool)hasBundleID;
- (bool)hasFirstDiscovery;
- (bool)hasLegacyMode;
- (bool)hasMaxPeersDiscovered;
- (bool)hasSessionDuration;
- (bool)hasSessionID;
- (bool)hasStartTimestamp;
- (bool)hasTimestamp;
- (bool)hasTotalPeersDiscovered;
- (bool)hasTransfersCompleted;
- (bool)hasTransfersInitiated;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)legacyMode;
- (unsigned int)maxPeersDiscovered;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)sessionDuration;
- (id)sessionID;
- (void)setBrowserID:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setFirstDiscovery:(unsigned int)arg1;
- (void)setHasFirstDiscovery:(bool)arg1;
- (void)setHasLegacyMode:(bool)arg1;
- (void)setHasMaxPeersDiscovered:(bool)arg1;
- (void)setHasSessionDuration:(bool)arg1;
- (void)setHasStartTimestamp:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalPeersDiscovered:(bool)arg1;
- (void)setHasTransfersCompleted:(bool)arg1;
- (void)setHasTransfersInitiated:(bool)arg1;
- (void)setLegacyMode:(bool)arg1;
- (void)setMaxPeersDiscovered:(unsigned int)arg1;
- (void)setSessionDuration:(unsigned int)arg1;
- (void)setSessionID:(id)arg1;
- (void)setStartTimestamp:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalPeersDiscovered:(unsigned int)arg1;
- (void)setTransfersCompleted:(unsigned int)arg1;
- (void)setTransfersInitiated:(unsigned int)arg1;
- (unsigned long long)startTimestamp;
- (unsigned long long)timestamp;
- (unsigned int)totalPeersDiscovered;
- (unsigned int)transfersCompleted;
- (unsigned int)transfersInitiated;
- (void)writeTo:(id)arg1;

@end
