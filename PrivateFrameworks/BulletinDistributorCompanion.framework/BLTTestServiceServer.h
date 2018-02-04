/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTTestServiceServer : NSObject <BLTTTestServiceServerExportedInterface, NSXPCListenerDelegate> {
    NSMutableArray * _clientConnections;
    NSXPCListener * _listener;
}

@property (nonatomic, retain) NSMutableArray *clientConnections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (readonly) Class superclass;

+ (id)sharedTestServer;

- (void).cxx_destruct;
- (void)_removeClientConnection:(id)arg1;
- (void)addBulletin:(id)arg1 forFeed:(unsigned long long)arg2 playLightsAndSirens:(bool)arg3 attachment:(id)arg4 attachmentType:(long long)arg5 alwaysSend:(bool)arg6 completion:(id /* block */)arg7;
- (void)clearSectionInfoSentCacheWithCompletion:(id /* block */)arg1;
- (id)clientConnections;
- (void)disableStandaloneTestModeWithCompletion:(id /* block */)arg1;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)getStandaloneTestModeEnabledWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)originalSettingsWithCompletion:(id /* block */)arg1;
- (void)overriddenSettingsWithCompletion:(id /* block */)arg1;
- (void)removeSectionID:(id)arg1 completion:(id /* block */)arg2;
- (void)resume;
- (void)sendAllSectionInfoWithSpool:(bool)arg1 completion:(id /* block */)arg2;
- (void)sendSectionInfoWithSectionID:(id)arg1 completion:(id /* block */)arg2;
- (void)setClientConnections:(id)arg1;
- (void)setListener:(id)arg1;
- (void)settingOverridesWithCompletion:(id /* block */)arg1;
- (void)spoolSectionInfoWithCompletion:(id /* block */)arg1;
- (void)willAlertForSectionID:(id)arg1 subtype:(long long)arg2 completion:(id /* block */)arg3;

@end
