/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHealthServicesManager : NSObject <HKHealthServicesClientInterface> {
    id /* block */  _bluetoothStatusHandler;
    NSMutableDictionary * _discoveries;
    NSMutableSet * _discoveriesEnded;
    HKHealthServicesManager * _healthServicesManager;
    HKHealthStore * _healthStore;
    NSMutableDictionary * _sessions;
    NSMutableSet * _sessionsEnded;
}

@property (nonatomic, copy) id /* block */ bluetoothStatusHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *discoveries;
@property (nonatomic, retain) NSMutableSet *discoveriesEnded;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthServicesManager *healthServicesManager;
@property (nonatomic) HKHealthStore *healthStore;
@property (nonatomic, retain) NSMutableDictionary *sessions;
@property (nonatomic, retain) NSMutableSet *sessionsEnded;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addEndedDiscovery:(id)arg1;
- (void)_addEndedSession:(id)arg1;
- (void)_fetchSupportedServiceIDsWithCompletion:(id /* block */)arg1;
- (void)_startHealthServiceExtendedDiscovery:(id)arg1 withHandler:(id /* block */)arg2;
- (id)activeHealthServiceDiscoveries;
- (id)activeHealthServiceSessions;
- (void)addHealthServicePairing:(id)arg1 withCompletion:(id /* block */)arg2;
- (id /* block */)bluetoothStatusHandler;
- (void)clientQueue_handleInterruption;
- (void)clientRemote_deliverBluetoothStatus:(long long)arg1 withError:(id)arg2;
- (void)clientRemote_deliverDiscoveryHealthService:(id)arg1 toClient:(unsigned long long)arg2 finished:(bool)arg3 withError:(id)arg4;
- (void)clientRemote_deliverSessionCharacteristics:(id)arg1 forService:(id)arg2 toClient:(unsigned long long)arg3 withError:(id)arg4;
- (void)clientRemote_deliverSessionHealthServiceStatus:(long long)arg1 toClient:(unsigned long long)arg2 finished:(bool)arg3 withError:(id)arg4;
- (id)discoveries;
- (id)discoveriesEnded;
- (void)endBluetoothStatusUpdates;
- (void)endHealthServiceDiscovery:(id)arg1;
- (void)endHealthServiceSession:(id)arg1;
- (void)getEnabledStatusForPeripheral:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getHealthServiceProperty:(id)arg1 forSession:(id)arg2 withHandler:(id /* block */)arg3;
- (void)getHealthServicePropertyNamesWithHandler:(id /* block */)arg1;
- (void)healthPeripheralsWithFilter:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)healthServicePairingsWithHandler:(id /* block */)arg1;
- (id)healthServicesManager;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (void)performHealthServiceOperation:(id)arg1 onSession:(id)arg2 withParameters:(id)arg3 completion:(id /* block */)arg4;
- (void)registerPeripheralIdentifier:(id)arg1 name:(id)arg2 services:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)removeHealthServicePairing:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)sessions;
- (id)sessionsEnded;
- (void)setBluetoothStatusHandler:(id /* block */)arg1;
- (void)setDiscoveries:(id)arg1;
- (void)setDiscoveriesEnded:(id)arg1;
- (void)setEnabledStatus:(bool)arg1 forPeripheral:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setHealthStore:(id)arg1;
- (void)setSessions:(id)arg1;
- (void)setSessionsEnded:(id)arg1;
- (id)startAllHealthServicesDiscoveryWithHandler:(id /* block */)arg1;
- (void)startBluetoothStatusUpdates:(id /* block */)arg1;
- (void)startHealthServiceDiscovery:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startHealthServiceSession:(id)arg1 withHandler:(id /* block */)arg2;
- (void)unregisterPeripheralIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;

@end
