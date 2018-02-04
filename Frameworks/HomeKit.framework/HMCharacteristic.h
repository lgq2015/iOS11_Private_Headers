/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCharacteristic : NSObject <HFPrettyDescription, HFStateDumpSerializable, HMObjectMerge, NSSecureCoding> {
    NSString * _characteristicType;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDelegateCaller * _delegateCaller;
    bool  _hasAuthorizationData;
    NSNumber * _instanceID;
    HMCharacteristicMetadata * _metadata;
    bool  _notificationEnabled;
    bool  _notificationEnabledByThisClient;
    NSDate * _notificationEnabledTime;
    NSArray * _properties;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    bool  _requiresDeviceUnlock;
    HMService * _service;
    NSUUID * _uniqueIdentifier;
    id  _value;
    NSDate * _valueUpdatedTime;
}

@property (nonatomic, copy) NSString *characteristicType;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property bool hasAuthorizationData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *instanceID;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, readonly) HMCharacteristicMetadata *metadata;
@property (getter=isNotificationEnabled, nonatomic) bool notificationEnabled;
@property (nonatomic) bool notificationEnabledByThisClient;
@property (nonatomic, copy) NSDate *notificationEnabledTime;
@property (nonatomic, copy) NSArray *properties;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic) bool requiresDeviceUnlock;
@property (nonatomic) HMService *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, copy) id value;
@property (nonatomic, copy) NSDate *valueUpdatedTime;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)__localizedDescriptionForCharacteristicType:(id)arg1;
+ (id)_characteristicTypeAsString:(id)arg1;
+ (id)localizedDescriptionForCharacteristicType:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_characteristicTypeDescription;
- (void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3;
- (void)_enableNotification:(bool)arg1 completionHandler:(id /* block */)arg2;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_readValueWithCompletionHandler:(id /* block */)arg1;
- (void)_updateAuthorizationData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateValue:(id)arg1 updateTime:(id)arg2;
- (void)_writeValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)characteristicType;
- (id)clientQueue;
- (id)delegateCaller;
- (void)enableNotification:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAuthorizationData;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)instanceID;
- (bool)isEqual:(id)arg1;
- (bool)isNotificationEnabled;
- (id)localizedDescription;
- (id)mapHAPProperties:(long long)arg1;
- (id)metadata;
- (bool)notificationEnabledByThisClient;
- (id)notificationEnabledTime;
- (id)properties;
- (id)propertyQueue;
- (void)readValueWithCompletionHandler:(id /* block */)arg1;
- (bool)requiresDeviceUnlock;
- (id)service;
- (void)setCharacteristicType:(id)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setHasAuthorizationData:(bool)arg1;
- (void)setNotificationEnabled:(bool)arg1;
- (void)setNotificationEnabledByThisClient:(bool)arg1;
- (void)setNotificationEnabledTime:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (void)setRequiresDeviceUnlock:(bool)arg1;
- (void)setService:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueUpdateTime:(id)arg1;
- (void)setValueUpdatedTime:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateAuthorizationData:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)value;
- (id)valueUpdatedTime;
- (void)writeValue:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)_hf_alarmCharacteristicTypeToAbnormalValueMap;
+ (id)hf_abnormalValueForAlarmCharacteristicType:(id)arg1;
+ (id)hf_alarmCharacteristicTypes;
+ (id)hf_associatedCharacteristicTypeForCharacteristicType:(id)arg1;
+ (id /* block */)hf_characteristicSortComparator;
+ (id)hf_currentStateCharacteristicTypeForTargetStateCharacteristicType:(id)arg1;
+ (id)hf_descriptionForCharacteristicType:(id)arg1;
+ (id)hf_powerStateCharacteristicTypes;
+ (long long)hf_sortPriorityForCharacteristicType:(id)arg1;
+ (id)hf_targetStateCharacteristicTypeForCurrentStateCharacteristicType:(id)arg1;

- (id)hf_associatedCharacteristicType;
- (id)hf_characteristicTypeDescription;
- (id)hf_defaultValue;
- (id)hf_designatedEventTriggerForProgrammableSwitchWithTriggerValue:(id)arg1;
- (id)hf_eventTriggers;
- (id)hf_eventTriggersForTriggerValue:(id)arg1;
- (id)hf_home;
- (bool)hf_isReadable;
- (bool)hf_isWritable;
- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_programmableSwitchTriggerValueToEventTriggersMap;
- (id)hf_programmableSwitchValidValueSet;
- (id)hf_serializedStateDumpRepresentation;
- (long long)hf_sortPriority;

@end
