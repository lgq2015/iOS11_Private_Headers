/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIPSecSA : NSObject <NSCopying> {
    int  _authenticationAlgorithm;
    NSData * _authenticationKey;
    NWInterface * _boundInterface;
    int  _direction;
    int  _encryptionAlgorithm;
    NSData * _encryptionKey;
    unsigned int  _internalSAID;
    unsigned long long  _lifetimeSeconds;
    NWAddressEndpoint * _localAddress;
    int  _mode;
    bool  _natDetectedOnPeer;
    bool  _natKeepaliveEnabled;
    unsigned long long  _natKeepaliveIntervalSeconds;
    bool  _natKeepaliveOffloadEnabled;
    unsigned long long  _natKeepaliveOffloadIntervalSeconds;
    bool  _natTraversalEnabled;
    unsigned short  _natTraversalPort;
    int  _protocol;
    NWAddressEndpoint * _remoteAddress;
    unsigned int  _replayWindowSize;
    unsigned int  _spi;
    NWInterface * _tunnelInterface;
}

@property int authenticationAlgorithm;
@property (retain) NSData *authenticationKey;
@property (retain) NWInterface *boundInterface;
@property (readonly) int direction;
@property int encryptionAlgorithm;
@property (retain) NSData *encryptionKey;
@property unsigned int internalSAID;
@property unsigned long long lifetimeSeconds;
@property (retain) NWAddressEndpoint *localAddress;
@property int mode;
@property bool natDetectedOnPeer;
@property bool natKeepaliveEnabled;
@property unsigned long long natKeepaliveIntervalSeconds;
@property bool natKeepaliveOffloadEnabled;
@property unsigned long long natKeepaliveOffloadIntervalSeconds;
@property bool natTraversalEnabled;
@property unsigned short natTraversalPort;
@property int protocol;
@property (retain) NWAddressEndpoint *remoteAddress;
@property unsigned int replayWindowSize;
@property unsigned int spi;
@property (retain) NWInterface *tunnelInterface;

- (void).cxx_destruct;
- (int)authenticationAlgorithm;
- (id)authenticationKey;
- (id)boundInterface;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createDictionary;
- (void)dealloc;
- (int)direction;
- (int)encryptionAlgorithm;
- (id)encryptionKey;
- (unsigned long long)hash;
- (id)initInboundSA;
- (id)initOutboundSAWithSPI:(unsigned int)arg1;
- (unsigned int)internalSAID;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lifetimeSeconds;
- (id)localAddress;
- (int)mode;
- (bool)natDetectedOnPeer;
- (bool)natKeepaliveEnabled;
- (unsigned long long)natKeepaliveIntervalSeconds;
- (bool)natKeepaliveOffloadEnabled;
- (unsigned long long)natKeepaliveOffloadIntervalSeconds;
- (bool)natTraversalEnabled;
- (unsigned short)natTraversalPort;
- (int)protocol;
- (id)remoteAddress;
- (unsigned int)replayWindowSize;
- (void)setAuthenticationAlgorithm:(int)arg1;
- (void)setAuthenticationKey:(id)arg1;
- (void)setBoundInterface:(id)arg1;
- (void)setEncryptionAlgorithm:(int)arg1;
- (void)setEncryptionKey:(id)arg1;
- (void)setInternalSAID:(unsigned int)arg1;
- (void)setLifetimeSeconds:(unsigned long long)arg1;
- (void)setLocalAddress:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setNatDetectedOnPeer:(bool)arg1;
- (void)setNatKeepaliveEnabled:(bool)arg1;
- (void)setNatKeepaliveIntervalSeconds:(unsigned long long)arg1;
- (void)setNatKeepaliveOffloadEnabled:(bool)arg1;
- (void)setNatKeepaliveOffloadIntervalSeconds:(unsigned long long)arg1;
- (void)setNatTraversalEnabled:(bool)arg1;
- (void)setNatTraversalPort:(unsigned short)arg1;
- (void)setProtocol:(int)arg1;
- (void)setRemoteAddress:(id)arg1;
- (void)setReplayWindowSize:(unsigned int)arg1;
- (void)setSpi:(unsigned int)arg1;
- (void)setTunnelInterface:(id)arg1;
- (unsigned int)spi;
- (id)tunnelInterface;

@end
