/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegationProviderService : NSObject <ICDelegationProviderServiceSessionDelegate, ICSDelegationProviderServiceXPC, NSNetServiceBrowserDelegate, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMapTable * _activeServiceSessions;
    NSObject<OS_dispatch_source> * _assertionTimeoutSource;
    NSMutableSet * _assertions;
    NSMapTable * _connectionToAssertions;
    NSMutableSet * _connections;
    NSMutableSet * _discoveredServices;
    ICUserIdentityStore * _identityStore;
    NSOperationQueue * _identityStoreOperationQueue;
    bool  _isNetServiceBrowserSearching;
    bool  _isSystemService;
    NSXPCListener * _listener;
    NSNetServiceBrowser * _netServiceBrowser;
    NSObject<OS_dispatch_queue> * _netServiceBrowserQueue;
    ICRequestContext * _requestContext;
    NSMutableDictionary * _supportedDelegationAccountUUIDToUserIdentity;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) ICRequestContext *requestContext;
@property (readonly) Class superclass;

+ (id)sharedService;
+ (id)systemServiceWithRequestContext:(id)arg1;

- (void).cxx_destruct;
- (void)_addConnection:(id)arg1;
- (id)_init;
- (void)_netServiceDelegationAccountUUIDsDidChangeNotification:(id)arg1;
- (void)_registerNotificationsForDelegationNetService:(id)arg1;
- (void)_removeConnection:(id)arg1;
- (void)_unregisterNotificationsForDelegationNetService:(id)arg1;
- (void)_updateAssertionTimeouts;
- (void)_updateBrowsingStatus;
- (void)_updateDelegationForDiscoveredServices;
- (void)_updateSupportedDelegationAccountUUIDs;
- (void)_userIdentityStoreDidChangeNotification:(id)arg1;
- (id)_xpcConnection;
- (void)addAssertion:(id)arg1;
- (void)dealloc;
- (void)delegationProviderServiceAddAssertion:(id)arg1;
- (void)delegationProviderServiceRemoveAssertion:(id)arg1;
- (void)delegationProviderServiceSession:(id)arg1 didFinishWithError:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(bool)arg3;
- (void)removeAssertion:(id)arg1;
- (id)requestContext;
- (void)startSystemXPCService;

@end
