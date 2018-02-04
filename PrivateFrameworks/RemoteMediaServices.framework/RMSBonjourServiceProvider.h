/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSBonjourServiceProvider : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate, RMSServiceProvider> {
    NSMutableDictionary * _cache;
    <RMSServiceProviderDelegate> * _delegate;
    NSNetServiceBrowser * _netServiceBrowser;
    NSMutableDictionary * _services;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RMSServiceProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNetServiceBrowser *netServiceBrowser;
@property (nonatomic, readonly) NSString *searchDomain;
@property (nonatomic, readonly) NSString *searchScope;
@property (nonatomic, readonly) NSString *searchType;
@property (nonatomic, readonly) long long serviceDiscoverySource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_identifierForNetService:(id)arg1;
- (id)_searchString;
- (void)_updateCacheWithService:(id)arg1 identifier:(id)arg2;
- (void)_updateService:(id)arg1 withNetService:(id)arg2 txtData:(id)arg3;
- (id)_valueForTXTRecordKey:(id)arg1 inTXTDictionary:(id)arg2;
- (void)beginDiscovery;
- (void)dealloc;
- (id)delegate;
- (void)endDiscovery;
- (id)init;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (id)netServiceBrowser;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceDidResolveAddress:(id)arg1;
- (id)searchDomain;
- (id)searchScope;
- (id)searchType;
- (long long)serviceDiscoverySource;
- (long long)serviceFlagsFromTXTDictionary:(id)arg1;
- (long long)serviceTypeFromTXTDictionary:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
