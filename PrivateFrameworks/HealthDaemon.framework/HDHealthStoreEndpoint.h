/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHealthStoreEndpoint : NSObject <HDHealthStoreEndpointInterface, _HKXPCExportable> {
    HDXPCClient * _client;
    HDDaemon * _daemon;
    NSObject<OS_dispatch_queue> * _queue;
    HDHealthStoreServer * _server;
}

@property (nonatomic, readonly) HDXPCClient *client;
@property (nonatomic, readonly) HDDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) HDHealthStoreServer *server;
@property (readonly) Class superclass;

+ (bool)_isClientEntitled:(id)arg1 error:(id*)arg2;
+ (bool)_isDeviceSupportedWithBehavior:(id)arg1 error:(id*)arg2;
+ (id)endpointWithClient:(id)arg1 healthDaemon:(id)arg2;

- (void).cxx_destruct;
- (id)client;
- (void)connectionInvalidated;
- (id)daemon;
- (id)exportedInterface;
- (id)initWithClient:(id)arg1 daemon:(id)arg2;
- (void)invalidate;
- (id)queue;
- (id)remoteInterface;
- (void)remote_fetchPluginServiceEndpointWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_serverForConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)server;

@end
