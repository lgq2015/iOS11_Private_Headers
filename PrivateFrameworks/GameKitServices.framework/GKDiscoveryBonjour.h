/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKDiscoveryBonjour : NSObject {
    struct _DNSServiceRef_t { } * _advertiseRef;
    id /* block */  _browseCallback;
    struct _DNSServiceRef_t { } * _browseRef;
    id /* block */  _collisionCallback;
    id /* block */  _connectionCallback;
    NSMutableArray * _launchdSources;
    int  _listeningPort;
    NSMutableDictionary * _resolveContainers;
    NSObject<OS_dispatch_queue> * _resolveContainersSyncQueue;
    NSString * _serviceDomain;
    id /* block */  _serviceNameCollisionCallback;
    NSString * _serviceType;
}

@property (nonatomic) struct _DNSServiceRef_t { }*advertiseRef;
@property (nonatomic, copy) id /* block */ browseCallback;
@property (nonatomic) struct _DNSServiceRef_t { }*browseRef;
@property (nonatomic, copy) id /* block */ connectionCallback;
@property (nonatomic, retain) NSMutableArray *launchdSources;
@property (nonatomic, retain) NSMutableDictionary *resolveContainers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *resolveContainersSyncQueue;
@property (nonatomic, copy) NSString *serviceDomain;
@property (nonatomic, copy) id /* block */ serviceNameCollisionCallback;
@property (nonatomic, copy) NSString *serviceType;

- (struct _DNSServiceRef_t { }*)advertiseRef;
- (id /* block */)browseCallback;
- (struct _DNSServiceRef_t { }*)browseRef;
- (void)closeListeningSockets;
- (id /* block */)connectionCallback;
- (void)createDispatchEventWithSocket:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDomain:(id)arg1 type:(id)arg2;
- (int)ipV4Socket;
- (int)ipV6Socket;
- (bool)isAppleTV;
- (id)launchdSources;
- (id)resolveContainers;
- (id)resolveContainersSyncQueue;
- (int)resolveName:(id)arg1 onIndex:(unsigned int)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)sendBonjourRegistrationEvent:(id)arg1 discoveryInfo:(id)arg2;
- (id)serviceDomain;
- (id /* block */)serviceNameCollisionCallback;
- (id)serviceType;
- (void)setAdvertiseRef:(struct _DNSServiceRef_t { }*)arg1;
- (void)setBrowseCallback:(id /* block */)arg1;
- (void)setBrowseRef:(struct _DNSServiceRef_t { }*)arg1;
- (void)setConnectionCallback:(id /* block */)arg1;
- (void)setLaunchdSources:(id)arg1;
- (void)setResolveContainers:(id)arg1;
- (void)setResolveContainersSyncQueue:(id)arg1;
- (void)setServiceDomain:(id)arg1;
- (void)setServiceNameCollisionCallback:(id /* block */)arg1;
- (void)setServiceType:(id)arg1;
- (void)setupBothListeningSockets;
- (void)setupListeningSockets;
- (void)startAdvertisingServiceName:(id)arg1 discoveryInfo:(id)arg2;
- (int)startBrowsing:(id /* block */)arg1;
- (void)stopAdvertising;
- (void)stopBrowsing;
- (void)stopResolve:(id)arg1;

@end