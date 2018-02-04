/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMSoftwareUpdateController : NSObject <HFPrettyDescription, HFStateDumpSerializable, HMFMessageReceiver, HMObjectMerge> {
    HMAccessory * _accessory;
    HMSoftwareUpdate * _availableUpdate;
    _HMContext * _context;
    <HMSoftwareUpdateControllerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _uniqueIdentifier;
}

@property HMAccessory *accessory;
@property (retain) HMSoftwareUpdate *availableUpdate;
@property (nonatomic, retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property <HMSoftwareUpdateControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;
+ (id)namespace;

- (void).cxx_destruct;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)accessory;
- (id)availableUpdate;
- (void)configureWithContext:(id)arg1;
- (id)context;
- (id)delegate;
- (void)fetchAvailableUpdateWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAccessory:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)propertyQueue;
- (void)setAccessory:(id)arg1;
- (void)setAvailableUpdate:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startUpdate:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;

@end
