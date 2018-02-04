/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface _IDSDataChannelLinkContext : NSObject {
    unsigned long long  _RATType;
    long long  _connectionType;
    unsigned char  _flags;
    BOOL  _linkID;
    NSUUID * _linkUUID;
    unsigned int  _maxBitrate;
    unsigned short  _maxMTU;
    unsigned char  _networkType;
    long long  _relayServerProvider;
    NSData * _relaySessionKey;
    NSData * _relaySessionToken;
    long long  _remoteConnectionType;
    unsigned char  _remoteNetworkType;
    unsigned long long  _remoteRATType;
}

- (void).cxx_destruct;
- (id)description;

@end
