/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBRemoteDataProviderConnectionResolver : NSObject <BBDataProviderConnectionCheckinServer, BBDataProviderStore, BBRemoteDataProviderStoreDelegate, NSXPCListenerDelegate> {
    BKSApplicationStateMonitor * _appStateMonitor;
    NSMutableDictionary * _dataProviderConnectionsBySectionID;
    NSMutableDictionary * _dataProviderConnectionsByService;
    NSMutableDictionary * _dataProviderConnectionsByUniversalSectionID;
    <BBDataProviderStoreDelegate> * _delegate;
    NSXPCListener * _listener;
    int  _listeningToken;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _registerQueue;
    NSMutableDictionary * _xpcConnectionsByService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)resolverWithDelegate:(id)arg1;
+ (id)xpcInterface;

- (void).cxx_destruct;
- (void)_registerForPublicationNotification;
- (void)_registerServiceName:(id)arg1 appBundleID:(id)arg2 completion:(id /* block */)arg3;
- (id)dataProviderForSectionID:(id)arg1;
- (id)dataProviderForUniversalSectionID:(id)arg1;
- (void)dataProviderStore:(id)arg1 didAddDataProvider:(id)arg2 performMigration:(bool)arg3 completion:(id /* block */)arg4;
- (void)dataProviderStore:(id)arg1 didAddParentSectionFactory:(id)arg2;
- (void)dataProviderStore:(id)arg1 didRemoveDataProvider:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)loadAllDataProviders;
- (void)performBlockOnDataProviders:(id /* block */)arg1;
- (void)registerServiceName:(id)arg1 appBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)remoteDataProviderNeedsToWakeClient:(id)arg1;
- (void)removeDataProvider:(id)arg1;
- (void)wakeService:(id)arg1 bundleID:(id)arg2;

@end
