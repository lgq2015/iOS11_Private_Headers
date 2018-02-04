/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYBuddyDaemonProximitySourceClient : NSObject <BYBuddyDaemonProximitySourceProtocol, BYDaemonProximitySourceProtocol> {
    NSXPCConnection * _connection;
    <BYBuddyDaemonProximitySourceProtocol> * _delegate;
}

@property (retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property <BYBuddyDaemonProximitySourceProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)proximitySourceClientInterface;

- (void).cxx_destruct;
- (void)activateWithSharingChannel:(id)arg1;
- (void)backupCompletedWithError:(id)arg1;
- (void)backupProgress:(double)arg1 estimatedTimeRemaining:(long long)arg2;
- (void)connectToDaemon;
- (id)connection;
- (id)delegate;
- (void)finishedWithError:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)receivedData:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)syncCompletedWithErrors:(id)arg1;
- (void)syncProgress:(double)arg1;

@end