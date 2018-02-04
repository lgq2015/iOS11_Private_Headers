/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

@interface BLServiceProxy : NSObject <BLServiceProtocol> {
    NSXPCConnection * _connection;
    <BLServiceProtocol> * _remoteObject;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) <BLServiceProtocol> *remoteObject;

- (void).cxx_destruct;
- (void)cancelAllActiveDownloadsWithReply:(id /* block */)arg1;
- (void)cancelDownloadWithID:(id)arg1 withReply:(id /* block */)arg2;
- (id)connection;
- (void)downloadWithPermlink:(id)arg1 title:(id)arg2 reply:(id /* block */)arg3;
- (void)fetchDownloadFromDownloadID:(id)arg1 withReply:(id /* block */)arg2;
- (void)fetchDownloadListWithReply:(id /* block */)arg1;
- (void)getCrashSimulationOverrideValuesWithReply:(id /* block */)arg1;
- (void)getValueSimulateDeviceOutOfSpaceWithReply:(id /* block */)arg1;
- (id)initWithError:(out id*)arg1;
- (void)pauseDownloadWithID:(id)arg1 withReply:(id /* block */)arg2;
- (void)purchaseWithBuyParameters:(id)arg1 storeID:(id)arg2 reply:(id /* block */)arg3;
- (id)remoteObject;
- (void)requestDownloadWithMetadata:(id)arg1 isRestore:(bool)arg2 reply:(id /* block */)arg3;
- (void)requestDownloadWithParameters:(id)arg1 reply:(id /* block */)arg2;
- (void)requestDownloadsWithMetadata:(id)arg1 areRestore:(bool)arg2 reply:(id /* block */)arg3;
- (void)resetAllCrashSimulationOverridesWithReply:(id /* block */)arg1;
- (void)resumeDownloadWithID:(id)arg1 withReply:(id /* block */)arg2;
- (void)setConnection:(id)arg1;
- (void)setRemoteObject:(id)arg1;
- (void)setValueSimulateCrashAtInstallDuringDecrypt:(bool)arg1 withReply:(id /* block */)arg2;
- (void)setValueSimulateCrashAtInstallDuringFinish:(bool)arg1 withReply:(id /* block */)arg2;
- (void)setValueSimulateCrashAtInstallDuringUnzip:(bool)arg1 withReply:(id /* block */)arg2;
- (void)setValueSimulateCrashAtInstallStart:(bool)arg1 withReply:(id /* block */)arg2;
- (void)setValueSimulateDeviceOutOfSpace:(bool)arg1 withReply:(id /* block */)arg2;
- (void)shutdown;

@end
