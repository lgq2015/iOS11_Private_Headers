/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDataProviderConnection : NSObject <NSXPCListenerDelegate> {
    NSString * _bundleID;
    NSObject<OS_dispatch_queue> * _clientCalloutQueue;
    bool  _connected;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    BBDataProviderConnectionResolver * _connectionResolver;
    NSMutableDictionary * _dataProvidersBySectionID;
    NSMutableDictionary * _parentFactoriesBySectionID;
    NSObject<OS_dispatch_queue> * _queue;
    <BBDataProviderConnectionServerProxy> * _serverProxy;
    NSString * _serviceName;
}

@property (nonatomic, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *serviceName;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_addDataProvider:(id)arg1 withAdditionHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)_invalidate;
- (void)_queue_setServerProxy:(id)arg1;
- (id)addDataProvider:(id)arg1;
- (void)addDataProvider:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 universalSectionID:(id)arg4;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 unversalSectionID:(id)arg4;
- (id)bundleID;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;
- (void)invalidate;
- (void)ping:(id /* block */)arg1;
- (void)removeDataProviderWithSectionID:(id)arg1;
- (id)serviceName;
- (void)setBundleID:(id)arg1;
- (void)setServerProxy:(id)arg1;
- (void)setServiceName:(id)arg1;

@end
