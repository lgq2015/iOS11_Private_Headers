/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessoryOOBBTPairing.framework/AccessoryOOBBTPairing
 */

@interface ACCOOBBTPairingProvider : NSObject {
    NSMutableDictionary * _accessories;
    <ACCOOBBTPairingProviderProtocol> * _delegate;
    NSString * _providerUID;
    <ACCOOBBTPairingXPCServerProtocol> * _remoteObject;
    NSXPCConnection * _serverConnection;
}

@property (nonatomic, retain) NSMutableDictionary *accessories;
@property (nonatomic) <ACCOOBBTPairingProviderProtocol> *delegate;
@property (nonatomic, retain) NSString *providerUID;
@property (nonatomic, retain) <ACCOOBBTPairingXPCServerProtocol> *remoteObject;
@property (nonatomic, retain) NSXPCConnection *serverConnection;

- (void).cxx_destruct;
- (id)accessories;
- (id)accessoryInfoDictionaryForLogging:(id)arg1;
- (void)accessoryOOBBTPairingAttached:(id)arg1 accInfoDict:(id)arg2;
- (void)accessoryOOBBTPairingBTAccessoryInfo:(id)arg1 oobBtPairingUID:(id)arg2 accessoryMacAddr:(id)arg3 deviceClass:(unsigned int)arg4;
- (void)accessoryOOBBTPairingCompletionStatus:(id)arg1 oobBtPairingUID:(id)arg2 result:(unsigned char)arg3;
- (void)accessoryOOBBTPairingDetached:(id)arg1;
- (void)connectToServer;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)legacyConnectionIDForAccessoryUID:(id)arg1 connectionID:(unsigned int)arg2;
- (void)linkKeyInfo:(id)arg1 oobBtPairingUID:(id)arg2 linkKey:(id)arg3 deviceMacAddr:(id)arg4;
- (id)providerUID;
- (id)remoteObject;
- (void)requestLegacyConnectionIDForAccessoryUID:(id)arg1;
- (id)serverConnection;
- (void)setAccessories:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProviderUID:(id)arg1;
- (void)setRemoteObject:(id)arg1;
- (void)setServerConnection:(id)arg1;
- (void)startOOBBTPairing:(id)arg1;
- (void)stopOOBBTPairing:(id)arg1;

@end
