/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessoryVoiceOver.framework/AccessoryVoiceOver
 */

@interface ACCVoiceOverProvider : NSObject {
    NSMutableDictionary * _accessories;
    <ACCVoiceOverProviderProtocol> * _delegate;
    NSString * _providerUID;
    <ACCVoiceOverXPCServerProtocol> * _remoteObject;
    NSXPCConnection * _serverConnection;
}

@property (nonatomic, retain) NSMutableDictionary *accessories;
@property (nonatomic) <ACCVoiceOverProviderProtocol> *delegate;
@property (nonatomic, retain) NSString *providerUID;
@property (nonatomic, retain) <ACCVoiceOverXPCServerProtocol> *remoteObject;
@property (nonatomic, retain) NSXPCConnection *serverConnection;

- (void).cxx_destruct;
- (id)accessories;
- (void)accessoryVoiceOver:(id)arg1 performAction:(int)arg2 parameters:(id)arg3;
- (void)accessoryVoiceOver:(id)arg1 requestConfiguration:(int)arg2 param:(id)arg3;
- (void)accessoryVoiceOver:(id)arg1 setContext:(int)arg2;
- (void)accessoryVoiceOver:(id)arg1 setEnabled:(bool)arg2;
- (void)accessoryVoiceOverAttached:(id)arg1;
- (void)accessoryVoiceOverDetached:(id)arg1;
- (void)accessoryVoiceOverStartCursorInformationUpdate:(id)arg1;
- (void)accessoryVoiceOverStartInformationUpdate:(id)arg1;
- (void)accessoryVoiceOverStopCursorInformationUpdate:(id)arg1;
- (void)accessoryVoiceOverStopInformationUpdate:(id)arg1;
- (bool)calculateDesiredState:(id)arg1;
- (void)connectToServer;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)providerUID;
- (id)remoteObject;
- (id)serverConnection;
- (void)setAccessories:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProviderUID:(id)arg1;
- (void)setRemoteObject:(id)arg1;
- (void)setServerConnection:(id)arg1;
- (void)updateVoiceOverCursorInfo:(id)arg1;
- (void)updateVoiceOverInfo:(id)arg1;

@end
