/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessory : HMFObject <HMFMerging> {
    <HAPAccessoryDelegate> * _delegate;
    NSString * _firmwareVersion;
    NSString * _identifier;
    NSNumber * _instanceID;
    long long  _linkType;
    NSString * _manufacturer;
    NSString * _model;
    NSString * _name;
    bool  _primary;
    bool  _reachable;
    NSString * _serialNumber;
    HAPAccessoryServer * _server;
    NSString * _serverIdentifier;
    NSArray * _services;
    bool  _supportsRelay;
    NSString * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly, copy) NSNumber *category;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HAPAccessoryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *firmwareVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSNumber *instanceID;
@property (nonatomic, readonly) long long linkType;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (getter=isPaired, nonatomic, readonly) bool paired;
@property (getter=isPrimary, nonatomic) bool primary;
@property (getter=isReachable, nonatomic) bool reachable;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic) HAPAccessoryServer *server;
@property (nonatomic, copy) NSString *serverIdentifier;
@property (nonatomic, retain) NSArray *services;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsRelay;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)instanceIDForUniqueIdentifier:(id)arg1;
+ (bool)isAccessoryPairedWithIdentifier:(id)arg1;
+ (bool)isAccessoryPrimaryWithUniqueIdentifier:(id)arg1;
+ (id)serverIdentifierWithUniqueIdentifier:(id)arg1;

- (void).cxx_destruct;
- (bool)_isReachable;
- (void)_setReachable:(bool)arg1;
- (bool)_updateAndValidateServices;
- (bool)_updateForAccessoryInformationService;
- (bool)_updateService:(id)arg1;
- (id)category;
- (id)characteristicOfType:(id)arg1 serviceType:(id)arg2;
- (id)characteristicsOfType:(id)arg1;
- (id)delegate;
- (id)description;
- (id)firmwareVersion;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3;
- (id)instanceID;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (bool)isPaired;
- (bool)isPrimary;
- (bool)isReachable;
- (long long)linkType;
- (id)manufacturer;
- (bool)mergeObject:(id)arg1;
- (id)model;
- (id)name;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)readValueForCharacteristic:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)serialNumber;
- (id)server;
- (id)serverIdentifier;
- (id)services;
- (id)servicesOfType:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirmwareVersion:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInstanceID:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPrimary:(bool)arg1;
- (void)setReachable:(bool)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setServerIdentifier:(id)arg1;
- (void)setServices:(id)arg1;
- (void)setSupportsRelay:(bool)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (bool)shouldMergeObject:(id)arg1;
- (bool)supportsRelay;
- (id)uniqueIdentifier;
- (bool)validateCharacteristicValues:(id*)arg1;
- (id)workQueue;
- (void)writeCharacteristicValue:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;

@end
