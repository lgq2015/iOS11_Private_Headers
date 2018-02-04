/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCompanionManager : HMFObject <HMFLogging, IDSServiceDelegate> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDDevice * _companion;
    <HMDCompanionManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    IDSService * _service;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) HMDDevice *companion;
@property (readonly, copy) NSString *debugDescription;
@property <HMDCompanionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) IDSService *service;
@property (readonly) Class superclass;

+ (bool)isCompatibleCompanionDevice:(id)arg1;
+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)__initializeConnectedDevices;
- (void)_updateConnectedDevices:(id)arg1;
- (id)clientQueue;
- (id)companion;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)init;
- (void)notifyDelegateOfCompanionChange:(id)arg1;
- (id)propertyQueue;
- (id)service;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setCompanion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)shortDescription;

@end
