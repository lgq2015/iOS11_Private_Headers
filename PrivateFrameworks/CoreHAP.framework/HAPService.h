/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPService : HMFObject <HMFMerging> {
    HAPAccessory * _accessory;
    NSArray * _characteristics;
    NSNumber * _instanceID;
    NSArray * _linkedServices;
    unsigned long long  _serviceProperties;
    NSString * _type;
}

@property (nonatomic) HAPAccessory *accessory;
@property (setter=setCBService:, nonatomic, retain) CBService *cbService;
@property (nonatomic, retain) NSArray *characteristics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *instanceID;
@property (nonatomic, retain) NSArray *linkedServices;
@property (nonatomic) unsigned long long serviceProperties;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (bool)_updateAndValidateCharacteristics;
- (bool)_updateCharacteristic:(id)arg1;
- (bool)_validateMandatoryCharacteristics;
- (bool)_validateServiceCharacteristics;
- (id)accessory;
- (id)cbService;
- (id)characteristics;
- (id)characteristicsOfType:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(id)arg1 instanceID:(id)arg2;
- (id)initWithType:(id)arg1 instanceID:(id)arg2 parsedCharacteristics:(id)arg3 serviceProperties:(unsigned long long)arg4 linkedServices:(id)arg5;
- (id)instanceID;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToService:(id)arg1;
- (id)linkedServices;
- (bool)mergeObject:(id)arg1;
- (id)propertiesDescription;
- (unsigned long long)serviceProperties;
- (void)setAccessory:(id)arg1;
- (void)setCBService:(id)arg1;
- (void)setCharacteristics:(id)arg1;
- (void)setInstanceID:(id)arg1;
- (void)setLinkedServices:(id)arg1;
- (void)setServiceProperties:(unsigned long long)arg1;
- (void)setType:(id)arg1;
- (bool)shouldMergeObject:(id)arg1;
- (id)type;

@end
