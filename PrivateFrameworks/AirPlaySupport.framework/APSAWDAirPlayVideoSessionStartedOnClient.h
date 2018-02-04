/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
 */

@interface APSAWDAirPlayVideoSessionStartedOnClient : PBCodable <NSCopying> {
    unsigned int  _audioOnly;
    unsigned int  _authMs;
    int  _awdlCCA;
    int  _awdlRSSI;
    unsigned int  _bitrate;
    unsigned int  _bonjourMs;
    unsigned int  _connectMs;
    bool  _didFallbackToInfraToAvoidP2POverDFS;
    unsigned int  _duration;
    unsigned long long  _fileBytes;
    struct { 
        unsigned int fileBytes : 1; 
        unsigned int timestamp : 1; 
        unsigned int audioOnly : 1; 
        unsigned int authMs : 1; 
        unsigned int awdlCCA : 1; 
        unsigned int awdlRSSI : 1; 
        unsigned int bitrate : 1; 
        unsigned int bonjourMs : 1; 
        unsigned int connectMs : 1; 
        unsigned int duration : 1; 
        unsigned int infoMs : 1; 
        unsigned int infraCCA : 1; 
        unsigned int infraRSSI : 1; 
        unsigned int infraSNR : 1; 
        unsigned int postAuthMs : 1; 
        unsigned int secureConnectionMs : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
        unsigned int type : 1; 
        unsigned int didFallbackToInfraToAvoidP2POverDFS : 1; 
    }  _has;
    unsigned int  _infoMs;
    int  _infraCCA;
    int  _infraRSSI;
    int  _infraSNR;
    unsigned int  _postAuthMs;
    unsigned int  _secureConnectionMs;
    NSString * _serverModel;
    NSString * _serverVersion;
    NSString * _sessionUUID;
    int  _status;
    unsigned long long  _timestamp;
    unsigned int  _transportType;
    unsigned int  _type;
}

@property (nonatomic) unsigned int audioOnly;
@property (nonatomic) unsigned int authMs;
@property (nonatomic) int awdlCCA;
@property (nonatomic) int awdlRSSI;
@property (nonatomic) unsigned int bitrate;
@property (nonatomic) unsigned int bonjourMs;
@property (nonatomic) unsigned int connectMs;
@property (nonatomic) bool didFallbackToInfraToAvoidP2POverDFS;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned long long fileBytes;
@property (nonatomic) bool hasAudioOnly;
@property (nonatomic) bool hasAuthMs;
@property (nonatomic) bool hasAwdlCCA;
@property (nonatomic) bool hasAwdlRSSI;
@property (nonatomic) bool hasBitrate;
@property (nonatomic) bool hasBonjourMs;
@property (nonatomic) bool hasConnectMs;
@property (nonatomic) bool hasDidFallbackToInfraToAvoidP2POverDFS;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasFileBytes;
@property (nonatomic) bool hasInfoMs;
@property (nonatomic) bool hasInfraCCA;
@property (nonatomic) bool hasInfraRSSI;
@property (nonatomic) bool hasInfraSNR;
@property (nonatomic) bool hasPostAuthMs;
@property (nonatomic) bool hasSecureConnectionMs;
@property (nonatomic, readonly) bool hasServerModel;
@property (nonatomic, readonly) bool hasServerVersion;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTransportType;
@property (nonatomic) bool hasType;
@property (nonatomic) unsigned int infoMs;
@property (nonatomic) int infraCCA;
@property (nonatomic) int infraRSSI;
@property (nonatomic) int infraSNR;
@property (nonatomic) unsigned int postAuthMs;
@property (nonatomic) unsigned int secureConnectionMs;
@property (nonatomic, retain) NSString *serverModel;
@property (nonatomic, retain) NSString *serverVersion;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int transportType;
@property (nonatomic) unsigned int type;

- (unsigned int)audioOnly;
- (unsigned int)authMs;
- (int)awdlCCA;
- (int)awdlRSSI;
- (unsigned int)bitrate;
- (unsigned int)bonjourMs;
- (unsigned int)connectMs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didFallbackToInfraToAvoidP2POverDFS;
- (unsigned int)duration;
- (unsigned long long)fileBytes;
- (bool)hasAudioOnly;
- (bool)hasAuthMs;
- (bool)hasAwdlCCA;
- (bool)hasAwdlRSSI;
- (bool)hasBitrate;
- (bool)hasBonjourMs;
- (bool)hasConnectMs;
- (bool)hasDidFallbackToInfraToAvoidP2POverDFS;
- (bool)hasDuration;
- (bool)hasFileBytes;
- (bool)hasInfoMs;
- (bool)hasInfraCCA;
- (bool)hasInfraRSSI;
- (bool)hasInfraSNR;
- (bool)hasPostAuthMs;
- (bool)hasSecureConnectionMs;
- (bool)hasServerModel;
- (bool)hasServerVersion;
- (bool)hasSessionUUID;
- (bool)hasStatus;
- (bool)hasTimestamp;
- (bool)hasTransportType;
- (bool)hasType;
- (unsigned long long)hash;
- (unsigned int)infoMs;
- (int)infraCCA;
- (int)infraRSSI;
- (int)infraSNR;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)postAuthMs;
- (bool)readFrom:(id)arg1;
- (unsigned int)secureConnectionMs;
- (id)serverModel;
- (id)serverVersion;
- (id)sessionUUID;
- (void)setAudioOnly:(unsigned int)arg1;
- (void)setAuthMs:(unsigned int)arg1;
- (void)setAwdlCCA:(int)arg1;
- (void)setAwdlRSSI:(int)arg1;
- (void)setBitrate:(unsigned int)arg1;
- (void)setBonjourMs:(unsigned int)arg1;
- (void)setConnectMs:(unsigned int)arg1;
- (void)setDidFallbackToInfraToAvoidP2POverDFS:(bool)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setFileBytes:(unsigned long long)arg1;
- (void)setHasAudioOnly:(bool)arg1;
- (void)setHasAuthMs:(bool)arg1;
- (void)setHasAwdlCCA:(bool)arg1;
- (void)setHasAwdlRSSI:(bool)arg1;
- (void)setHasBitrate:(bool)arg1;
- (void)setHasBonjourMs:(bool)arg1;
- (void)setHasConnectMs:(bool)arg1;
- (void)setHasDidFallbackToInfraToAvoidP2POverDFS:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasFileBytes:(bool)arg1;
- (void)setHasInfoMs:(bool)arg1;
- (void)setHasInfraCCA:(bool)arg1;
- (void)setHasInfraRSSI:(bool)arg1;
- (void)setHasInfraSNR:(bool)arg1;
- (void)setHasPostAuthMs:(bool)arg1;
- (void)setHasSecureConnectionMs:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setInfoMs:(unsigned int)arg1;
- (void)setInfraCCA:(int)arg1;
- (void)setInfraRSSI:(int)arg1;
- (void)setInfraSNR:(int)arg1;
- (void)setPostAuthMs:(unsigned int)arg1;
- (void)setSecureConnectionMs:(unsigned int)arg1;
- (void)setServerModel:(id)arg1;
- (void)setServerVersion:(id)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (void)setType:(unsigned int)arg1;
- (int)status;
- (unsigned long long)timestamp;
- (unsigned int)transportType;
- (unsigned int)type;
- (void)writeTo:(id)arg1;

@end
