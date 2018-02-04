/* made by EzioChiu.
 */

@protocol RWIRelayDelegate

@required

- (void)relay:(RWIRelay *)arg1 activateApplicationWithBundleIdentifier:(NSString *)arg2;
- (bool)relay:(RWIRelay *)arg1 allowIncomingApplicationConnection:(_RWIRelayConnectionToApplication *)arg2 bundleIdentifier:(NSString *)arg3;
- (bool)relay:(RWIRelay *)arg1 allowIncomingApplicationViaProxy:(struct { unsigned int x1[8]; })arg2;
- (void)relay:(RWIRelay *)arg1 applicationConnected:(_RWIApplicationInfo *)arg2;
- (void)relay:(RWIRelay *)arg1 applicationDisconnected:(_RWIApplicationInfo *)arg2;
- (_RWIApplicationInfo *)relay:(RWIRelay *)arg1 applicationInfoForIncomingConnection:(_RWIRelayConnectionToApplication *)arg2 bundleIdentifier:(NSString *)arg3;
- (void)relay:(RWIRelay *)arg1 applicationUpdated:(_RWIApplicationInfo *)arg2;
- (void)relay:(RWIRelay *)arg1 unhandledApplicationXPCMessage:(NSObject<OS_xpc_object> *)arg2;
- (void)relayClientConnectionDidChange:(RWIRelay *)arg1;
- (void)relayInitialize:(RWIRelay *)arg1;
- (NSDictionary *)relaySetupResponseForClientConnection:(RWIRelay *)arg1;

@end
