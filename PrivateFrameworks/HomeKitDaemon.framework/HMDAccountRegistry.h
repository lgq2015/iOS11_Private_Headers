/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccountRegistry : HMFObject <HMFLogging, HMFTimerDelegate, IDSServiceDelegate> {
    HMFExponentialBackoffTimer * _accountChangeBackoffTimer;
    NSMutableSet * _accounts;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDAccount * _currentAccount;
    HMDDevice * _currentDevice;
    <HMDAccountRegistryDelegate> * _delegate;
    HMFTimer * _devicesChangeBackoffTimer;
    HMDLocalAccountContext * _localAccountContext;
    bool  _monitoring;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    bool  _resolved;
    IDSService * _service;
}

@property (nonatomic, readonly) HMFExponentialBackoffTimer *accountChangeBackoffTimer;
@property (nonatomic, retain) NSArray *accounts;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) HMDAccount *currentAccount;
@property (nonatomic) HMDDevice *currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property <HMDAccountRegistryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMFTimer *devicesChangeBackoffTimer;
@property (readonly) unsigned long long hash;
@property (retain) HMDLocalAccountContext *localAccountContext;
@property (getter=isMonitoring, nonatomic) bool monitoring;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (getter=isResolved, nonatomic) bool resolved;
@property (nonatomic, readonly) IDSService *service;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedRegistry;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_cleanupDevices;
- (void)_updateLocalAccount;
- (void)_updateLocalDevices;
- (id)accountChangeBackoffTimer;
- (id)accountForDestination:(id)arg1 shouldCreate:(bool)arg2;
- (id)accounts;
- (void)addAccount:(id)arg1;
- (id)clientQueue;
- (id)currentAccount;
- (id)currentDevice;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)deviceForDestination:(id)arg1 shouldCreate:(bool)arg2;
- (id)devicesChangeBackoffTimer;
- (id)init;
- (id)initWithIDSService:(id)arg1;
- (bool)isMonitoring;
- (bool)isResolved;
- (id)localAccountContext;
- (void)notifyDelegateAccountAdded:(id)arg1;
- (void)notifyDelegateAccountRemove:(id)arg1;
- (void)notifyDelegateCurrentDeviceChanged:(id)arg1;
- (id)propertyQueue;
- (void)removeAccount:(id)arg1;
- (id)service;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setAccounts:(id)arg1;
- (void)setCurrentAccount:(id)arg1;
- (void)setCurrentDevice:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocalAccountContext:(id)arg1;
- (void)setMonitoring:(bool)arg1;
- (void)setResolved:(bool)arg1;
- (id)shortDescription;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)timerDidFire:(id)arg1;
- (void)updateCurrentAccount;
- (void)updateCurrentDevice;
- (void)updateLocalAccountContext;

@end
