/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATNetServiceSocket : ATSocket <NSNetServiceDelegate, NSStreamDelegate> {
    bool  _connected;
    NSObject<OS_tcp_connection> * _connection;
    bool  _enableTLS;
    NSString * _hostname;
    NSString * _interfaceName;
    unsigned short  _port;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _readBuffer;
    NSObject<OS_dispatch_semaphore> * _sema;
    NSString * _serviceDomain;
    NSString * _serviceName;
    NSString * _serviceType;
    NSObject<OS_dispatch_source> * _source;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableTLS;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *interfaceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_connect;
- (void)closeDescriptor;
- (bool)enableTLS;
- (id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3;
- (id)interfaceName;
- (bool)open;
- (void)setEnableTLS:(bool)arg1;
- (void)setInterfaceName:(id)arg1;

@end
