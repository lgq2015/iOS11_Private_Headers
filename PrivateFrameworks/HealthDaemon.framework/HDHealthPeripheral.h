/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHealthPeripheral : NSObject <CBPeripheralDelegate> {
    CBPeripheral * _cbPeripheral;
    HKDevice * _deviceInformation;
    bool  _discoveredServices;
    NSMutableDictionary * _healthServices;
    NSString * _name;
    bool  _privateMode;
    _HKExpiringCompletionTimer * _privateModeTimer;
    HDProfile * _profile;
    NSMutableDictionary * _propertiesAwaiting;
    NSMutableDictionary * _serviceForProperty;
    HDHealthServiceManager * _serviceManager;
    NSObject<OS_dispatch_queue> * _servicesQueue;
}

@property (nonatomic, readonly) CBPeripheral *cbPeripheral;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKDevice *deviceInformation;
@property (nonatomic) bool discoveredServices;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *healthServices;
@property (nonatomic, readonly) NSUUID *identifier;
@property (readonly) NSString *name;
@property (nonatomic) bool privateMode;
@property (nonatomic, retain) _HKExpiringCompletionTimer *privateModeTimer;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) NSMutableDictionary *propertiesAwaiting;
@property (nonatomic, retain) NSMutableDictionary *serviceForProperty;
@property (nonatomic) HDHealthServiceManager *serviceManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *servicesQueue;
@property (readonly) long long state;
@property (readonly) NSString *stateDescription;
@property (readonly) Class superclass;

+ (id)implementedProperties;

- (void).cxx_destruct;
- (bool)_queue_addPropertyHandler:(id /* block */)arg1 forProperty:(id)arg2;
- (void)_queue_handleTimerExpiration;
- (void)_queue_respond:(id)arg1 forProperty:(id)arg2 withError:(id)arg3;
- (void)_queue_setDeviceInformation:(id)arg1;
- (void)_queue_setupTimer;
- (void)_queue_startReadProperty:(id)arg1;
- (void)addHealthService:(id)arg1;
- (id)cbPeripheral;
- (id)deviceInformation;
- (void)disconnectServices;
- (void)discoverServices;
- (bool)discoveredServices;
- (void)extendPrivateModeLease;
- (void)getProperty:(id)arg1 withHandler:(id /* block */)arg2;
- (bool)hasServiceWithUUID:(id)arg1;
- (id)healthServiceForType:(long long)arg1;
- (id)healthServices;
- (id)identifier;
- (id)initWithCBPeripheral:(id)arg1 name:(id)arg2 serviceManager:(id)arg3 profile:(id)arg4;
- (id)name;
- (void)performOperation:(id)arg1 withParameters:(id)arg2 completion:(id /* block */)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didModifyServices:(id)arg2;
- (void)peripheral:(id)arg1 didReadRSSI:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (bool)privateMode;
- (id)privateModeTimer;
- (id)profile;
- (id)propertiesAwaiting;
- (void)service:(id)arg1 didReadProperty:(id)arg2 value:(id)arg3 error:(id)arg4;
- (id)serviceForProperty;
- (id)serviceManager;
- (id)servicesQueue;
- (void)setDiscoveredServices:(bool)arg1;
- (void)setHealthServices:(id)arg1;
- (void)setPrivateMode:(bool)arg1;
- (void)setPrivateModeTimer:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setPropertiesAwaiting:(id)arg1;
- (void)setServiceForProperty:(id)arg1;
- (void)setServiceManager:(id)arg1;
- (void)setServicesQueue:(id)arg1;
- (long long)state;
- (id)stateDescription;
- (void)writeCharacteristic:(id)arg1 expectResponse:(bool)arg2 completion:(id /* block */)arg3;

@end
