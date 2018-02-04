/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMNSXPCConnectionConfiguration : NSObject <FMNSXPCConnectionConfigurable> {
    NSXPCInterface * _exportedInterface;
    bool  _machService;
    unsigned long long  _options;
    NSXPCInterface * _remoteInterface;
    NSString * _serviceName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSXPCInterface *exportedInterface;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool machService;
@property (nonatomic) unsigned long long options;
@property (nonatomic, retain) NSXPCInterface *remoteInterface;
@property (nonatomic, retain) NSString *serviceName;
@property (readonly) Class superclass;

+ (id)btDiscoveryConfiguration;
+ (id)fmipConfiguration;
+ (id)helperConfiguration;
+ (id)identityConfiguration;
+ (id)userNotificationConfiguration;

- (void).cxx_destruct;
- (id)exportedInterface;
- (bool)machService;
- (unsigned long long)options;
- (id)remoteInterface;
- (id)serviceName;
- (void)setExportedInterface:(id)arg1;
- (void)setMachService:(bool)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setRemoteInterface:(id)arg1;
- (void)setServiceName:(id)arg1;

@end
