/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMAccessorySettingGroup : NSObject <HMFLogging, HMFMerging, HMFMessageReceiver, NSSecureCoding> {
    HMAccessorySettings * _accessorySettings;
    NSObject<OS_dispatch_queue> * _clientQueue;
    _HMContext * _context;
    <_HMAccesorySettingGroupDelegate> * _delegate;
    NSMutableSet * _groups;
    NSUUID * _identifier;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSMutableSet * _settings;
}

@property (nonatomic, retain) HMAccessorySettings *accessorySettings;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property <_HMAccesorySettingGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly, copy) NSString *name;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly, copy) NSArray *settings;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)supportedGroupsClasses;
+ (id)supportedSettingsClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleAddedGroup:(id)arg1;
- (void)_handleAddedSetting:(id)arg1;
- (void)_handleRemovedGroup:(id)arg1;
- (void)_handleRemovedSetting:(id)arg1;
- (void)_registerNotificationHandlers;
- (id)accessorySettings;
- (void)addGroup:(id)arg1;
- (void)addGroup:(id)arg1 toGroup:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)addSetting:(id)arg1;
- (void)addSetting:(id)arg1 toGroup:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)clientQueue;
- (void)configureWithAccessorySettings:(id)arg1 context:(id)arg2;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)groupWithIdentifier:(id)arg1;
- (id)groups;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (bool)mergeGroups:(id)arg1;
- (bool)mergeObject:(id)arg1;
- (bool)mergeSettings:(id)arg1;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)name;
- (void)notifyDelegateOfAddedGroup:(id)arg1;
- (void)notifyDelegateOfAddedSetting:(id)arg1;
- (void)notifyDelegateOfRemovedGroup:(id)arg1;
- (void)notifyDelegateOfRemovedSetting:(id)arg1;
- (id)propertyQueue;
- (void)removeGroup:(id)arg1;
- (void)removeGroup:(id)arg1 fromGroup:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeSetting:(id)arg1;
- (void)removeSetting:(id)arg1 fromGroup:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAccessorySettings:(id)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)settingWithIdentifier:(id)arg1;
- (id)settings;

@end
