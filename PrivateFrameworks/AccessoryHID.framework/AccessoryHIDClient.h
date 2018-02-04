/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessoryHID.framework/AccessoryHID
 */

@interface AccessoryHIDClient : NSObject <AccessoryHIDXPCClientProtocol> {
    <AccessoryHIDClientProtocol> * _delegate;
    NSMutableDictionary * _registeredHIDDescriptors;
    <AccessoryHIDXPCServerProtocol> * _remoteObject;
    NSXPCConnection * _serverConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AccessoryHIDClientProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *registeredHIDDescriptors;
@property (nonatomic, retain) <AccessoryHIDXPCServerProtocol> *remoteObject;
@property (nonatomic, retain) NSXPCConnection *serverConnection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connectToServer;
- (void)dealloc;
- (id)delegate;
- (void)getReportResponse:(id)arg1 componentID:(unsigned short)arg2 reportType:(unsigned char)arg3 reportID:(unsigned char)arg4 report:(id)arg5 withReply:(id /* block */)arg6;
- (void)hidDescriptor:(id)arg1 active:(bool)arg2;
- (void)inReport:(id)arg1 componentID:(unsigned short)arg2 report:(id)arg3 withReply:(id /* block */)arg4;
- (id)initWithDelegate:(id)arg1;
- (void)registerHIDDescriptor:(id)arg1 componentID:(unsigned short)arg2 dictionary:(id)arg3 withReply:(id /* block */)arg4;
- (id)registeredHIDDescriptors;
- (id)remoteObject;
- (void)sendGetReportForType:(id)arg1 andID:(id)arg2 fromUUID:(id)arg3;
- (void)sendOutReport:(id)arg1 fromUUID:(id)arg2;
- (id)serverConnection;
- (void)setDelegate:(id)arg1;
- (void)setRegisteredHIDDescriptors:(id)arg1;
- (void)setRemoteObject:(id)arg1;
- (void)setServerConnection:(id)arg1;
- (void)unregisterAllDescriptors:(id)arg1 withReply:(id /* block */)arg2;
- (void)unregisterHIDDescriptor:(id)arg1 componentID:(unsigned short)arg2 withReply:(id /* block */)arg3;

@end
