/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallCapabilitiesXPCClient : NSObject <TUCallCapabilitiesXPCClient, TUCallCapabilitiesXPCServerActions> {
    NSObject<OS_dispatch_queue> * _queue;
    <TUCallCapabilitiesXPCServer> * _server;
    TUCallCapabilitiesState * _state;
    NSObject<OS_dispatch_semaphore> * _stateSemaphore;
    int  _token;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) <TUCallCapabilitiesXPCServer> *server;
@property (nonatomic, retain) TUCallCapabilitiesState *state;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *stateSemaphore;
@property (readonly) Class superclass;
@property (nonatomic) int token;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)_retrieveStateForInitialUpdate:(bool)arg1;
- (void)_updateState:(id)arg1;
- (oneway void)cancelPinRequestFromPrimaryDevice;
- (oneway void)capabilityStateUpdated:(id)arg1;
- (void)dealloc;
- (oneway void)endEmergencyCallbackMode;
- (id)init;
- (id)initWithServer:(id)arg1;
- (oneway void)invalidateAndRefreshThumperCallingProvisioningURL;
- (oneway void)invalidateAndRefreshWiFiCallingProvisioningURL;
- (void)invalidateXPCConnection;
- (id)queue;
- (oneway void)requestPinFromPrimaryDevice;
- (id)server;
- (id)serverWithErrorHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (oneway void)setRelayCallingEnabled:(bool)arg1;
- (oneway void)setRelayCallingEnabled:(bool)arg1 forDeviceWithID:(id)arg2;
- (void)setServer:(id)arg1;
- (void)setState:(id)arg1;
- (void)setStateSemaphore:(id)arg1;
- (oneway void)setThumperCallingAllowed:(bool)arg1 onSecondaryDeviceWithID:(id)arg2;
- (oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(bool)arg1;
- (oneway void)setThumperCallingEnabled:(bool)arg1;
- (void)setToken:(int)arg1;
- (oneway void)setVoLTECallingEnabled:(bool)arg1;
- (oneway void)setWiFiCallingEnabled:(bool)arg1;
- (oneway void)setWiFiCallingRoamingEnabled:(bool)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)state;
- (id)stateSemaphore;
- (int)token;
- (id)xpcConnection;

@end
