/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSDataChannelLinkContext : NSObject {
    _IDSDataChannelLinkContext * _internal;
}

@property (readonly) unsigned long long RATType;
@property (readonly) long long connectionType;
@property (readonly) unsigned char flags;
@property (readonly) BOOL linkID;
@property (readonly) NSUUID *linkUUID;
@property (readonly) unsigned int maxBitrate;
@property (readonly) unsigned short maxMTU;
@property (readonly) unsigned char networkType;
@property (readonly) long long relayServerProvider;
@property (readonly) NSData *relaySessionKey;
@property (readonly) NSData *relaySessionToken;
@property (readonly) long long remoteConnectionType;
@property (readonly) unsigned char remoteNetworkType;
@property (readonly) unsigned long long remoteRATType;

- (void).cxx_destruct;
- (unsigned long long)RATType;
- (long long)connectionType;
- (id)description;
- (unsigned char)flags;
- (id)initWithDummyInformation;
- (id)initWithLinkID:(BOOL)arg1 linkUUID:(id)arg2 flags:(unsigned char)arg3 networkType:(unsigned char)arg4 connectionType:(long long)arg5 RATType:(unsigned long long)arg6 MTU:(unsigned short)arg7 remoteNetworkType:(unsigned char)arg8 remoteConnectionType:(long long)arg9 remoteRATType:(unsigned long long)arg10 maxBitrate:(unsigned int)arg11 relayServerProvider:(long long)arg12 relaySessionToken:(id)arg13 relaySessionKey:(id)arg14;
- (BOOL)linkID;
- (id)linkUUID;
- (unsigned int)maxBitrate;
- (unsigned short)maxMTU;
- (unsigned char)networkType;
- (long long)relayServerProvider;
- (id)relaySessionKey;
- (id)relaySessionToken;
- (long long)remoteConnectionType;
- (unsigned char)remoteNetworkType;
- (unsigned long long)remoteRATType;
- (void)setMTU:(unsigned short)arg1;
- (void)setMaxBitrate:(unsigned int)arg1;
- (void)setRATType:(unsigned long long)arg1;

@end
