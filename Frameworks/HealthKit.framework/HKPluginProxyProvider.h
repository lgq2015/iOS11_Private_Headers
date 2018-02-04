/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKPluginProxyProvider : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    _HKXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    <_HKXPCExportable> * _exportedObject;
    HKHealthStore * _healthStore;
    NSString * _pluginIdentifier;
}

@property (nonatomic, readonly) <_HKXPCExportable> *exportedObject;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) NSString *pluginIdentifier;

- (void).cxx_destruct;
- (void)_resetConnection;
- (void)dealloc;
- (id)exportedObject;
- (void)fetchPluginProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1 pluginIdentifier:(id)arg2 exportedObject:(id)arg3;
- (id)pluginIdentifier;

@end
