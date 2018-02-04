/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBLECharacteristicCache : HMFObject <NSSecureCoding> {
    NSNumber * _characteristicInstanceId;
    HAPCharacteristicMetadata * _characteristicMetadata;
    unsigned long long  _characteristicProperties;
    NSUUID * _characteristicUUID;
}

@property (nonatomic, readonly) NSNumber *characteristicInstanceId;
@property (nonatomic, retain) HAPCharacteristicMetadata *characteristicMetadata;
@property (nonatomic) unsigned long long characteristicProperties;
@property (nonatomic, readonly) NSUUID *characteristicUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)characteristicInstanceId;
- (id)characteristicMetadata;
- (unsigned long long)characteristicProperties;
- (id)characteristicUUID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCharacteristicUUID:(id)arg1 instanceId:(id)arg2 characteristicProperties:(unsigned long long)arg3 characteristicMetadata:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCharacteristicMetadata:(id)arg1;
- (void)setCharacteristicProperties:(unsigned long long)arg1;
- (void)updateWithCharacteristic:(id)arg1;

@end
