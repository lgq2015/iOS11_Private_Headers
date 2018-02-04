/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
 */

@interface APSAWDAirPlayScreenSessionStartedOnServer : PBCodable <NSCopying> {
    unsigned int  _audioCompressionType;
    unsigned int  _clientBonjourMs;
    unsigned int  _clientConfigMs;
    unsigned int  _clientConnectMs;
    NSString * _clientModel;
    unsigned int  _clientPrepareMs;
    NSString * _clientVersion;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int audioCompressionType : 1; 
        unsigned int clientBonjourMs : 1; 
        unsigned int clientConfigMs : 1; 
        unsigned int clientConnectMs : 1; 
        unsigned int clientPrepareMs : 1; 
        unsigned int serverAcceptTime : 1; 
        unsigned int serverConfigTime : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
    }  _has;
    unsigned int  _serverAcceptTime;
    unsigned int  _serverConfigTime;
    NSString * _sessionUUID;
    int  _status;
    unsigned long long  _timestamp;
    unsigned int  _transportType;
}

@property (nonatomic) unsigned int audioCompressionType;
@property (nonatomic) unsigned int clientBonjourMs;
@property (nonatomic) unsigned int clientConfigMs;
@property (nonatomic) unsigned int clientConnectMs;
@property (nonatomic, retain) NSString *clientModel;
@property (nonatomic) unsigned int clientPrepareMs;
@property (nonatomic, retain) NSString *clientVersion;
@property (nonatomic) bool hasAudioCompressionType;
@property (nonatomic) bool hasClientBonjourMs;
@property (nonatomic) bool hasClientConfigMs;
@property (nonatomic) bool hasClientConnectMs;
@property (nonatomic, readonly) bool hasClientModel;
@property (nonatomic) bool hasClientPrepareMs;
@property (nonatomic, readonly) bool hasClientVersion;
@property (nonatomic) bool hasServerAcceptTime;
@property (nonatomic) bool hasServerConfigTime;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTransportType;
@property (nonatomic) unsigned int serverAcceptTime;
@property (nonatomic) unsigned int serverConfigTime;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int transportType;

- (unsigned int)audioCompressionType;
- (unsigned int)clientBonjourMs;
- (unsigned int)clientConfigMs;
- (unsigned int)clientConnectMs;
- (id)clientModel;
- (unsigned int)clientPrepareMs;
- (id)clientVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAudioCompressionType;
- (bool)hasClientBonjourMs;
- (bool)hasClientConfigMs;
- (bool)hasClientConnectMs;
- (bool)hasClientModel;
- (bool)hasClientPrepareMs;
- (bool)hasClientVersion;
- (bool)hasServerAcceptTime;
- (bool)hasServerConfigTime;
- (bool)hasSessionUUID;
- (bool)hasStatus;
- (bool)hasTimestamp;
- (bool)hasTransportType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)serverAcceptTime;
- (unsigned int)serverConfigTime;
- (id)sessionUUID;
- (void)setAudioCompressionType:(unsigned int)arg1;
- (void)setClientBonjourMs:(unsigned int)arg1;
- (void)setClientConfigMs:(unsigned int)arg1;
- (void)setClientConnectMs:(unsigned int)arg1;
- (void)setClientModel:(id)arg1;
- (void)setClientPrepareMs:(unsigned int)arg1;
- (void)setClientVersion:(id)arg1;
- (void)setHasAudioCompressionType:(bool)arg1;
- (void)setHasClientBonjourMs:(bool)arg1;
- (void)setHasClientConfigMs:(bool)arg1;
- (void)setHasClientConnectMs:(bool)arg1;
- (void)setHasClientPrepareMs:(bool)arg1;
- (void)setHasServerAcceptTime:(bool)arg1;
- (void)setHasServerConfigTime:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setServerAcceptTime:(unsigned int)arg1;
- (void)setServerConfigTime:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (int)status;
- (unsigned long long)timestamp;
- (unsigned int)transportType;
- (void)writeTo:(id)arg1;

@end
