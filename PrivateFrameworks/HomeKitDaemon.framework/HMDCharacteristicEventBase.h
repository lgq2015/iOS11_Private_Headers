/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicEventBase : HMDEvent {
    NSUUID * _accessoryUUID;
    HMDCharacteristic * _characteristic;
    NSNumber * _characteristicInstanceID;
    id  _previousValue;
    NSNumber * _serviceID;
}

@property (nonatomic, readonly) NSUUID *accessoryUUID;
@property (nonatomic, retain) HMDCharacteristic *characteristic;
@property (nonatomic, readonly) NSNumber *characteristicInstanceID;
@property (nonatomic, retain) id previousValue;
@property (nonatomic, readonly) NSNumber *serviceID;

+ (id)compareValueOfCharacteristic:(id)arg1 againstValue:(id)arg2 operatorType:(id)arg3;
+ (id)logCategory;
+ (id)lookForCharacteristicByAccessoryUUID:(id)arg1 serviceID:(id)arg2 characteristicID:(id)arg3 inHome:(id)arg4 checkForSupport:(bool)arg5 outError:(id*)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_activate:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (bool)_evaluateNewValue:(id)arg1;
- (void)_handleAccessoryCharacteristicsChangedNotification:(id)arg1;
- (void)_processAccessoryCharacteristicsChangedNotification:(id)arg1;
- (void)_registerForMessages;
- (id)accessoryUUID;
- (id)characteristic;
- (id)characteristicInstanceID;
- (id)createPayload;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)fixCharacteristicInHome:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1 home:(id)arg2;
- (bool)isActive;
- (id)previousValue;
- (void)replaceCharacteristic:(id)arg1;
- (id)serviceID;
- (void)setCharacteristic:(id)arg1;
- (void)setPreviousValue:(id)arg1;

@end