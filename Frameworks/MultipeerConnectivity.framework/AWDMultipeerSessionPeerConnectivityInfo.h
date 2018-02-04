/* made by EzioChiu
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface AWDMultipeerSessionPeerConnectivityInfo : PBCodable <NSCopying> {
    bool  _authentication;
    int  _channelPriority;
    bool  _encryption;
    struct { 
        unsigned int timeAll : 1; 
        unsigned int timeDTLS : 1; 
        unsigned int timeICE : 1; 
        unsigned int timeOSPF : 1; 
        unsigned int timestamp : 1; 
        unsigned int channelPriority : 1; 
        unsigned int interfaceType : 1; 
        unsigned int authentication : 1; 
        unsigned int encryption : 1; 
        unsigned int remoteAuthentication : 1; 
    }  _has;
    unsigned int  _interfaceType;
    bool  _remoteAuthentication;
    NSString * _sessionID;
    unsigned long long  _timeAll;
    unsigned long long  _timeDTLS;
    unsigned long long  _timeICE;
    unsigned long long  _timeOSPF;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool authentication;
@property (nonatomic) int channelPriority;
@property (nonatomic) bool encryption;
@property (nonatomic) bool hasAuthentication;
@property (nonatomic) bool hasChannelPriority;
@property (nonatomic) bool hasEncryption;
@property (nonatomic) bool hasInterfaceType;
@property (nonatomic) bool hasRemoteAuthentication;
@property (nonatomic, readonly) bool hasSessionID;
@property (nonatomic) bool hasTimeAll;
@property (nonatomic) bool hasTimeDTLS;
@property (nonatomic) bool hasTimeICE;
@property (nonatomic) bool hasTimeOSPF;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int interfaceType;
@property (nonatomic) bool remoteAuthentication;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) unsigned long long timeAll;
@property (nonatomic) unsigned long long timeDTLS;
@property (nonatomic) unsigned long long timeICE;
@property (nonatomic) unsigned long long timeOSPF;
@property (nonatomic) unsigned long long timestamp;

- (bool)authentication;
- (int)channelPriority;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)encryption;
- (bool)hasAuthentication;
- (bool)hasChannelPriority;
- (bool)hasEncryption;
- (bool)hasInterfaceType;
- (bool)hasRemoteAuthentication;
- (bool)hasSessionID;
- (bool)hasTimeAll;
- (bool)hasTimeDTLS;
- (bool)hasTimeICE;
- (bool)hasTimeOSPF;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (unsigned int)interfaceType;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)remoteAuthentication;
- (id)sessionID;
- (void)setAuthentication:(bool)arg1;
- (void)setChannelPriority:(int)arg1;
- (void)setEncryption:(bool)arg1;
- (void)setHasAuthentication:(bool)arg1;
- (void)setHasChannelPriority:(bool)arg1;
- (void)setHasEncryption:(bool)arg1;
- (void)setHasInterfaceType:(bool)arg1;
- (void)setHasRemoteAuthentication:(bool)arg1;
- (void)setHasTimeAll:(bool)arg1;
- (void)setHasTimeDTLS:(bool)arg1;
- (void)setHasTimeICE:(bool)arg1;
- (void)setHasTimeOSPF:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInterfaceType:(unsigned int)arg1;
- (void)setRemoteAuthentication:(bool)arg1;
- (void)setSessionID:(id)arg1;
- (void)setTimeAll:(unsigned long long)arg1;
- (void)setTimeDTLS:(unsigned long long)arg1;
- (void)setTimeICE:(unsigned long long)arg1;
- (void)setTimeOSPF:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timeAll;
- (unsigned long long)timeDTLS;
- (unsigned long long)timeICE;
- (unsigned long long)timeOSPF;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
