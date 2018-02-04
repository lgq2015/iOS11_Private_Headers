/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMService : NSObject <HFFavoritable, HFHomeStatusVisible, HFNotificationPreferences, HFPrettyDescription, HFReorderableHomeKitObject, HFStateDumpSerializable, HMMutableApplicationData, HMObjectMerge, NSSecureCoding> {
    HMAccessory * _accessory;
    HMApplicationData * _applicationData;
    NSString * _associatedServiceType;
    HMBulletinBoardNotification * _bulletinBoardNotificationInternal;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMThreadSafeMutableArrayCollection * _currentCharacteristics;
    HMDelegateCaller * _delegateCaller;
    NSURL * _homeObjectURLInternal;
    NSNumber * _instanceID;
    NSArray * _linkedServiceInstanceIDs;
    HMFMessageDispatcher * _msgDispatcher;
    NSString * _name;
    bool  _primaryService;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSString * _serviceType;
    NSUUID * _uniqueIdentifier;
    bool  _userInteractive;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) HMAccessory *accessory;
@property (nonatomic, readonly) HMApplicationData *applicationData;
@property (nonatomic, copy) NSString *associatedServiceType;
@property (nonatomic, readonly) HMBulletinBoardNotification *bulletinBoardNotificationInternal;
@property (nonatomic, readonly, copy) NSArray *characteristics;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, copy) HMThreadSafeMutableArrayCollection *currentCharacteristics;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *hf_dateAdded;
@property (nonatomic, readonly, copy) NSString *hf_displayName;
@property (nonatomic, readonly) bool hf_hasSetFavorite;
@property (nonatomic, readonly) bool hf_hasSetVisibleInHomeStatus;
@property (nonatomic, readonly) bool hf_isFavorite;
@property (nonatomic, readonly) bool hf_isShowNotificationsStatus;
@property (nonatomic, readonly) bool hf_isVisibleInHomeStatus;
@property (nonatomic, readonly) NSPredicate *hf_notificationsCondition;
@property (nonatomic, readonly) HFServiceNameComponents *hf_serviceNameComponents;
@property (nonatomic, readonly) bool hf_shouldShowInFavorites;
@property (nonatomic, readonly) bool hf_supportsNotifications;
@property (nonatomic, readonly) NSURL *homeObjectURLInternal;
@property (nonatomic, readonly) NSNumber *instanceID;
@property (nonatomic, readonly, copy) NSArray *linkedServiceInstanceIDs;
@property (nonatomic, readonly, copy) NSArray *linkedServices;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, copy) NSString *name;
@property (getter=isPrimaryService, nonatomic, readonly) bool primaryService;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, copy) NSString *serviceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (getter=isUserInteractive, nonatomic, readonly) bool userInteractive;
@property (nonatomic, copy) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)__localizedDescriptionForServiceType:(id)arg1;
+ (id)_serviceTypeAsString:(id)arg1;
+ (id)localizedDescriptionForServiceType:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addCharacteristic:(id)arg1;
- (void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3 msgDispatcher:(id)arg4;
- (id)_findCharacteristic:(id)arg1;
- (void)_handleMarkServiceInteractive:(id)arg1;
- (void)_handleUpdateAssociatedServiceType:(id)arg1;
- (void)_handleUpdateName:(id)arg1;
- (bool)_hasCharacteristic:(id)arg1;
- (bool)_hasCharacteristicOfType:(id)arg1;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_removeCharacteristic:(id)arg1;
- (id)_serviceTypeDescription;
- (void)_updateAssociatedServiceType:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)accessory;
- (id)applicationData;
- (id)associatedServiceType;
- (id)bulletinBoardNotification;
- (id)bulletinBoardNotificationInternal;
- (id)characteristics;
- (id)clientQueue;
- (id)currentCharacteristics;
- (id)delegateCaller;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeObjectURL;
- (id)homeObjectURLInternal;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)instanceID;
- (bool)isEqual:(id)arg1;
- (bool)isPrimaryService;
- (bool)isUserInteractive;
- (id)linkedServiceInstanceIDs;
- (id)linkedServices;
- (id)localizedDescription;
- (id)msgDispatcher;
- (id)name;
- (id)propertyQueue;
- (id)serviceType;
- (void)setAccessory:(id)arg1;
- (void)setApplicationData:(id)arg1;
- (void)setAssociatedServiceType:(id)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setCurrentCharacteristics:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateApplicationData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateAssociatedServiceType:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;
- (id)workQueue;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_allRequiredCharacteristicTypesForStandardServices;
+ (id)hf_programmableSwitchServiceTypes;
+ (id)hf_requiredCharacteristicTypesForDisplayMetadataWithServiceType:(id)arg1;
+ (id)hf_roomsForServices:(id)arg1;
+ (id)hf_sensorCharacteristicTypeForServiceType:(id)arg1;
+ (id)hf_standardServices;

- (bool)_hf_isDirectlyOrIndirectlyLinkedToService:(id)arg1;
- (bool)hf_canGroupWithService:(id)arg1;
- (id)hf_characteristicOfType:(id)arg1;
- (id)hf_childServices;
- (id)hf_dateAdded;
- (id)hf_displayName;
- (id)hf_effectiveServiceType;
- (unsigned long long)hf_fallbackProgrammableSwitchIndex;
- (bool)hf_hasSetFavorite;
- (bool)hf_hasSetVisibleInHomeStatus;
- (id)hf_iconDescriptor;
- (bool)hf_isFavorite;
- (bool)hf_isLegacyService;
- (bool)hf_isProgrammableSwitch;
- (bool)hf_isShowNotificationsStatus;
- (bool)hf_isVisible;
- (bool)hf_isVisibleInHomeStatus;
- (id)hf_labelIndexCharacteristic;
- (id)hf_labelNamespaceCharacteristic;
- (id)hf_linkedServiceOfType:(id)arg1;
- (id)hf_notificationsCondition;
- (id)hf_parentRoom;
- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_requiredCharacteristicTypesForDisplayMetadata;
- (id)hf_serializedStateDumpRepresentation;
- (id)hf_serviceNameComponents;
- (bool)hf_shouldShowInFavorites;
- (bool)hf_supportsGroups;
- (bool)hf_supportsNotifications;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateIconDescriptor:(id)arg1;
- (id)hf_updateIsFavorite:(bool)arg1;
- (id)hf_updateIsVisibleInHomeStatus:(bool)arg1;
- (id)hf_updateNotificationsCondition:(id)arg1;
- (id)hf_updateShowNotificationsStatus:(bool)arg1;

@end
