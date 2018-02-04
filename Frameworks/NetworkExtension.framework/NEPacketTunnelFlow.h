/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPacketTunnelFlow : NSObject {
    unsigned long long  _buffersSize;
    bool  _handlerSetup;
    struct NEVirtualInterface_s { } * _interface;
    long long  _interfaceType;
    char ** _packetDataArray;
    id /* block */  _packetHandler;
    unsigned long long * _packetLengths;
    id /* block */  _packetObjectHandler;
    unsigned int * _packetProtocols;
    NSObject<OS_dispatch_queue> * _queue;
    NSFileHandle * _socket;
    NSMutableDictionary * _uuidMappings;
}

@property unsigned long long buffersSize;
@property bool handlerSetup;
@property (readonly) struct NEVirtualInterface_s { }*interface;
@property (readonly) long long interfaceType;
@property char **packetDataArray;
@property (copy) id /* block */ packetHandler;
@property unsigned long long*packetLengths;
@property (copy) id /* block */ packetObjectHandler;
@property unsigned int*packetProtocols;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSFileHandle *socket;
@property (retain) NSMutableDictionary *uuidMappings;

- (void).cxx_destruct;
- (unsigned long long)buffersSize;
- (void)closeVirtualInterface;
- (void)dealloc;
- (bool)handlerSetup;
- (id)initWithVirtualInterfaceType:(long long)arg1;
- (struct NEVirtualInterface_s { }*)interface;
- (long long)interfaceType;
- (char **)packetDataArray;
- (id /* block */)packetHandler;
- (unsigned long long*)packetLengths;
- (id /* block */)packetObjectHandler;
- (unsigned int*)packetProtocols;
- (id)queue;
- (void)readPacketObjectsWithCompletionHandler:(id /* block */)arg1;
- (void)readPacketsWithCompletionHandler:(id /* block */)arg1;
- (void)resetReadHandler;
- (void)setBuffersSize:(unsigned long long)arg1;
- (void)setHandlerSetup:(bool)arg1;
- (void)setPacketDataArray:(char **)arg1;
- (void)setPacketHandler:(id /* block */)arg1;
- (void)setPacketLengths:(unsigned long long*)arg1;
- (void)setPacketObjectHandler:(id /* block */)arg1;
- (void)setPacketProtocols:(unsigned int*)arg1;
- (void)setQueue:(id)arg1;
- (void)setSocket:(id)arg1;
- (void)setUuidMappings:(id)arg1;
- (bool)setVirtualInterfaceSocket:(id)arg1;
- (id)signingIdentifierForUUID:(id)arg1;
- (id)socket;
- (id)uuidMappings;
- (bool)writePacketObjects:(id)arg1;
- (bool)writePackets:(id)arg1 withProtocols:(id)arg2;

@end
