/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDeviceInformationService : HDHealthService {
    NSMutableDictionary * _characteristics;
    bool  _deviceInformationHasBeenLoaded;
    bool  _fetchLimitedCharacteristics;
    NSMutableArray * _pendingDeviceInformationLoadedBlocks;
    NSMutableSet * _propertiesLeftToFetch;
    NSMutableDictionary * _propertyValues;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMutableDictionary *characteristics;
@property (nonatomic) bool deviceInformationHasBeenLoaded;
@property (nonatomic) bool fetchLimitedCharacteristics;
@property (readonly) NSString *firmwareRevision;
@property (readonly) NSString *hardwareRevision;
@property (readonly) NSString *manufacturerName;
@property (readonly) NSString *modelNumber;
@property (nonatomic, retain) NSMutableArray *pendingDeviceInformationLoadedBlocks;
@property (nonatomic, retain) NSMutableSet *propertiesLeftToFetch;
@property (nonatomic, retain) NSMutableDictionary *propertyValues;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSString *serialNumber;
@property (readonly) NSString *softwareRevision;

+ (id)implementedProperties;
+ (long long)serviceType;
+ (id)serviceUUID;

- (void).cxx_destruct;
- (id)_propertyValueForCharacteristic:(id)arg1;
- (id)_propertyValueForPropertyName:(id)arg1;
- (void)_queue_peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)_queue_peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)_queue_readProperty:(id)arg1;
- (void)_queue_setDeviceInformationHasBeenLoaded;
- (void)_startDeviceInformationLoadingTimeoutTimer;
- (id)characteristics;
- (bool)deviceInformationHasBeenLoaded;
- (bool)fetchLimitedCharacteristics;
- (id)firmwareRevision;
- (id)hardwareRevision;
- (id)initWithServiceManager:(id)arg1 peripheral:(id)arg2 advertisementData:(id)arg3 profile:(id)arg4;
- (id)manufacturerName;
- (id)modelNumber;
- (id)pendingDeviceInformationLoadedBlocks;
- (void)performWhenDeviceInformationHasBeenLoaded:(id /* block */)arg1;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;
- (id)propertiesLeftToFetch;
- (id)propertyValues;
- (id)queue;
- (void)readProperty:(id)arg1;
- (id)serialNumber;
- (void)setCharacteristics:(id)arg1;
- (void)setDeviceInformationHasBeenLoaded:(bool)arg1;
- (void)setFetchLimitedCharacteristics:(bool)arg1;
- (void)setPendingDeviceInformationLoadedBlocks:(id)arg1;
- (void)setPropertiesLeftToFetch:(id)arg1;
- (void)setPropertyValues:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)softwareRevision;

@end
