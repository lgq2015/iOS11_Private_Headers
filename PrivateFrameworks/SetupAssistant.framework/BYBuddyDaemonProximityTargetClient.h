/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYBuddyDaemonProximityTargetClient : NSObject <BYBuddyDaemonProximityTargetProtocol, BYDaemonProximityTargetProtocol> {
    NSXPCConnection * _connection;
    <BYBuddyDaemonProximityTargetProtocol> * _delegate;
}

@property (retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property <BYBuddyDaemonProximityTargetProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)proximityTargetClientInterface;

- (void).cxx_destruct;
- (void)beginAdvertisingProximitySetup;
- (void)connectToDaemon;
- (id)connection;
- (id)delegate;
- (void)dismissProximityPinCode;
- (void)displayProximityPinCode:(id)arg1 visual:(bool)arg2;
- (void)endAdvertisingProximitySetup;
- (void)endPairing;
- (void)hasConnection:(id /* block */)arg1;
- (id)init;
- (void)proximititySetupCompleted:(id)arg1;
- (void)proximityConnectionInitiated;
- (void)proximityConnectionPreparing:(id)arg1;
- (void)proximityConnectionTerminated;
- (void)receivedLanguage:(id)arg1 locale:(id)arg2 model:(id)arg3 deviceClass:(id)arg4;
- (void)resumeProximitySetup:(id /* block */)arg1;
- (void)sendData:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)storeHandshake:(id)arg1;
- (void)storeInformation:(id)arg1;

@end
