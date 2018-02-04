/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFIPMonitor : NSObject {
    NSString * _interfaceName;
    bool  _isMonitoring;
    struct __SCDynamicStore { } * _networkServiceStore;
    struct __SCPreferences { } * _prefsRef;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _serviceID;
    struct __SCDynamicStore { } * _storeRef;
}

@property (nonatomic, copy) NSString *interfaceName;
@property struct __SCDynamicStore { }*networkServiceStore;
@property struct __SCPreferences { }*prefsRef;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) NSString *serviceID;
@property struct __SCDynamicStore { }*storeRef;

- (void).cxx_destruct;
- (id)DHCPLeaseExpirationDate;
- (id)__dhcpInfo;
- (id)__dnsSetupConfig;
- (id)__dnsStateConfig;
- (id)__ipv4InterfaceStateConfig;
- (id)__ipv4SetupConfig;
- (id)__ipv4StateConfig;
- (id)__ipv6SetupConfig;
- (id)__ipv6StateConfig;
- (id)__proxiesSetupConfig;
- (id)__wifiServiceID;
- (void)_postChangesNotification:(id)arg1;
- (id)dnsDomainName;
- (id)dnsSearchDomains;
- (id)dnsServerAddresses;
- (void)finalize;
- (bool)globalProxyIsEnabled;
- (bool)hasValidIPAddress;
- (bool)hasValidIPv4Address;
- (bool)hasValidIPv6Address;
- (id)httpProxyAutoConfigURL;
- (bool)httpProxyAutoConfigured;
- (bool)httpProxyIsAuthenticated;
- (id)httpProxyPort;
- (id)httpProxyServer;
- (id)httpProxyUsername;
- (id)init;
- (id)initWithInterfaceName:(id)arg1;
- (id)interfaceName;
- (id)ipv4Addresses;
- (long long)ipv4ConfigMethod;
- (id)ipv4DHCPClientID;
- (id)ipv4Router;
- (id)ipv4SubnetMasks;
- (id)ipv6Addresses;
- (long long)ipv6ConfigMethod;
- (id)ipv6PrefixLengths;
- (id)ipv6Router;
- (bool)isUsingCustomDNSSettings;
- (bool)isUsingCustomProxySetting;
- (bool)monitorNetworkServiceID:(id)arg1;
- (struct __SCDynamicStore { }*)networkServiceStore;
- (bool)personalHotspotHasClients;
- (struct __SCPreferences { }*)prefsRef;
- (id)queue;
- (bool)renewLease;
- (id)serviceID;
- (void)setInterfaceName:(id)arg1;
- (void)setNetworkServiceStore:(struct __SCDynamicStore { }*)arg1;
- (void)setPrefsRef:(struct __SCPreferences { }*)arg1;
- (void)setQueue:(id)arg1;
- (void)setServiceID:(id)arg1;
- (void)setStoreRef:(struct __SCDynamicStore { }*)arg1;
- (struct __SCDynamicStore { }*)storeRef;

@end
