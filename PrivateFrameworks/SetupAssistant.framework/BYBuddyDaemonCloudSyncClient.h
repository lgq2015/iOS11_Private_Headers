/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYBuddyDaemonCloudSyncClient : NSObject <BYClientDaemonCloudSyncProtocol, BYDaemonCloudSyncProtocol> {
    NSXPCConnection * _connection;
    <BYClientDaemonCloudSyncProtocol> * _delegate;
}

@property (retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property <BYClientDaemonCloudSyncProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterface;

- (void).cxx_destruct;
- (void)connectToDaemon;
- (id)connection;
- (id)delegate;
- (id)init;
- (void)needsToSync:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startSync;
- (void)syncCompletedWithErrors:(id)arg1;
- (void)syncProgress:(double)arg1;

@end
