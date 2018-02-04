/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessorySettingGroup : HMFObject <HMDBackingStoreObjectProtocol, HMFLogging, HMFMessageReceiver, NSSecureCoding> {
    HMDAccessory * _accessory;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDAccessorySettingGroup * _group;
    NSMutableSet * _groups;
    NSUUID * _identifier;
    HMFMessageDispatcher * _messageDispatcher;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSMutableSet * _settings;
}

@property (nonatomic, retain) HMDAccessory *accessory;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property HMDAccessorySettingGroup *group;
@property (readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (nonatomic, retain) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) HMDAccessorySettingGroupModel *model;
@property (readonly, copy) NSString *name;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly, copy) NSArray *settings;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)supportedGroupsClasses;
+ (id)supportedSettingsClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleAddGroup:(id)arg1;
- (void)_handleAddSetting:(id)arg1;
- (void)_handleRemoveGroup:(id)arg1;
- (void)_handleRemoveSetting:(id)arg1;
- (void)_relayRequestMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_shouldAcceptMessage:(id)arg1;
- (id)accessory;
- (void)addGroup:(id)arg1;
- (void)addSetting:(id)arg1;
- (id)clientQueue;
- (void)configureWithAccessory:(id)arg1 messageDispatcher:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)group;
- (id)groupWithIdentifier:(id)arg1;
- (id)groups;
- (void)handleAddedGroupModel:(id)arg1 message:(id)arg2;
- (void)handleAddedSettingModel:(id)arg1 message:(id)arg2;
- (void)handleRemovedGroupModel:(id)arg1 message:(id)arg2;
- (void)handleRemovedSettingModel:(id)arg1 message:(id)arg2;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)mergeWithGroupMetadata:(id)arg1;
- (id)messageDestination;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)model;
- (id)name;
- (id)propertyQueue;
- (void)registerForMessages;
- (id)remoteMessageDestination;
- (void)removeGroup:(id)arg1;
- (void)removeSetting:(id)arg1;
- (void)setAccessory:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setMessageDispatcher:(id)arg1;
- (id)settingWithIdentifier:(id)arg1;
- (id)settings;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;

@end
