/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATNetServiceListener : ATMessageLinkListener {
    bool  _enableTLS;
    NSString * _interfaceName;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _serviceDomain;
    NSString * _serviceName;
    NSString * _serviceType;
    NSObject<OS_tcp_listener> * _tcpListener;
}

@property (nonatomic) bool enableTLS;
@property (nonatomic, copy) NSString *interfaceName;

- (void).cxx_destruct;
- (bool)enableTLS;
- (id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3;
- (id)interfaceName;
- (void)setEnableTLS:(bool)arg1;
- (void)setInterfaceName:(id)arg1;
- (bool)start;
- (void)stop;

@end
