/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessoryAudio.framework/AccessoryAudio
 */

@interface ACCAudioClient : NSObject <ACCAudioXPCClientProtocol> {
    <ACCAudioClientProtocol> * _delegate;
    <ACCAudioXPCServerProtocol> * _remoteObject;
    NSXPCConnection * _serverConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ACCAudioClientProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <ACCAudioXPCServerProtocol> *remoteObject;
@property (nonatomic, retain) NSXPCConnection *serverConnection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connectToServer;
- (void)dealloc;
- (id)delegate;
- (id)deviceAudioStates;
- (id)initWithDelegate:(id)arg1;
- (void)registerForAccessoryDigitalAudioNotifications;
- (id)remoteObject;
- (id)serverConnection;
- (void)setDelegate:(id)arg1;
- (bool)setDigitalAudioSampleRate:(unsigned int)arg1;
- (void)setRemoteObject:(id)arg1;
- (void)setServerConnection:(id)arg1;
- (unsigned int)supportedDigitalAudioSampleRate:(unsigned int)arg1;
- (id)supportedDigitalAudioSampleRates;
- (void)unregisterForAccessoryDigitalAudioNotifications;

@end
