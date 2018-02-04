/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHAPAccessory : HMDAccessory <HAPRelayAccessoryDelegate, HMDTimeInformationMonitorDelegate, HMFTimerDelegate> {
    HMFTimer * _accessoryDiscoveryBackoffTimer;
    NSNumber * _accessoryFlags;
    HMFTimer * _accessoryKeyRefreshTimer;
    unsigned long long  _activationAttempts;
    NSNumber * _backedOffStateNumber;
    HMDHAPAccessory * _bridge;
    NSData * _broadcastKey;
    NSSet * _cameraProfiles;
    long long  _certificationStatus;
    unsigned long long  _currentRelayAccessoryState;
    HMDCharacteristic * _currentTimeCharacteristic;
    HMDCharacteristic * _dayOfTheWeekCharacteristic;
    NSMutableArray * _discoveredServices;
    NSMutableSet * _identifiersForBridgedAccessories;
    bool  _keyGenerationInProgress;
    unsigned char  _keyGenerationType;
    NSNumber * _keyUpdatedStateNumber;
    NSDate * _keyUpdatedTime;
    unsigned long long  _pairingAttempts;
    NSString * _pairingUsername;
    NSData * _publicKey;
    bool  _relayEnabled;
    NSString * _relayIdentifier;
    NSMapTable * _serverIDToHAPAccessoryTable;
    NSData * _setupHash;
    bool  _supportsRelay;
    HMFTimer * _systemTimeInformationTimer;
    bool  _systemTimeNeedsUpdate;
    bool  _timeInformationServiceExists;
    HMFTimer * _timeInformationTimer;
    HMDCharacteristic * _timeUpdateCharacteristic;
    NSMutableArray * _transportInformationInstances;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, retain) HMFTimer *accessoryDiscoveryBackoffTimer;
@property (nonatomic, copy) NSNumber *accessoryFlags;
@property (nonatomic, retain) HMFTimer *accessoryKeyRefreshTimer;
@property (nonatomic) unsigned long long activationAttempts;
@property (nonatomic, copy) NSNumber *backedOffStateNumber;
@property (nonatomic) HMDHAPAccessory *bridge;
@property (nonatomic, copy) NSData *broadcastKey;
@property (nonatomic, retain) NSSet *cameraProfiles;
@property (nonatomic) long long certificationStatus;
@property (getter=isClientRegisteredForNotifications, readonly) bool clientRegisteredForNotifications;
@property (nonatomic, readonly) unsigned long long currentRelayAccessoryState;
@property (nonatomic, readonly) HMDCharacteristic *currentTimeCharacteristic;
@property (nonatomic, readonly) HMDCharacteristic *dayOfTheWeekCharacteristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *discoveredServices;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *identifiersForBridgedAccessories;
@property bool keyGenerationInProgress;
@property unsigned char keyGenerationType;
@property (nonatomic, copy) NSNumber *keyUpdatedStateNumber;
@property (nonatomic, copy) NSDate *keyUpdatedTime;
@property (getter=isPaired, nonatomic, readonly) bool paired;
@property (nonatomic) unsigned long long pairingAttempts;
@property (nonatomic, readonly, copy) HAPPairingIdentity *pairingIdentity;
@property (nonatomic, retain) NSString *pairingUsername;
@property (nonatomic, retain) NSData *publicKey;
@property (getter=isRelayEnabled, nonatomic) bool relayEnabled;
@property (nonatomic, retain) NSString *relayIdentifier;
@property (nonatomic, readonly) NSString *serializedIdentifier;
@property (nonatomic, retain) NSMapTable *serverIDToHAPAccessoryTable;
@property (nonatomic, readonly, copy) NSArray *services;
@property (nonatomic, copy) NSData *setupHash;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsRelay;
@property (nonatomic, retain) HMFTimer *systemTimeInformationTimer;
@property (nonatomic) bool systemTimeNeedsUpdate;
@property (nonatomic, readonly) bool timeInformationServiceExists;
@property (nonatomic, retain) HMFTimer *timeInformationTimer;
@property (nonatomic, readonly) HMDCharacteristic *timeUpdateCharacteristic;
@property (nonatomic, copy) NSString *uniqueIdentifier;

+ (unsigned long long)getAWDTransportTypeWithLinkType:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (Class)transactionClass;

- (void).cxx_destruct;
- (void)_addHAPAccessory:(id)arg1;
- (bool)_containsSecureCharacteristic;
- (unsigned long long)_currentRelayAccessoryState;
- (id)_currentTimeCharacteristic;
- (id)_dayOfTheWeekCharacteristic;
- (void)_deRegisterForTimeMonitor;
- (void)_disableNotificationsForBundleID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_enableBroadcastNotifications:(bool)arg1 hapAccessory:(id)arg2 forCharacteristics:(id)arg3;
- (void)_enableNotification:(bool)arg1 forCharacteristics:(id)arg2 hapAccessory:(id)arg3 completion:(id /* block */)arg4;
- (void)_enableNotification:(bool)arg1 forCharacteristics:(id)arg2 message:(id)arg3 clientIdentifier:(id)arg4;
- (void)_enableNotification:(bool)arg1 matchingHAPAccessory:(id)arg2 unconditionallyDeregister:(bool)arg3 ignoreDeviceUnlockRequirement:(bool)arg4 clientIdentifier:(id)arg5 forCharacteristics:(id)arg6;
- (bool)_enableNotificationOnResident:(bool)arg1 characteristic:(id)arg2 clientIdentifier:(id)arg3 ignoreDeviceUnlockRequirement:(bool)arg4;
- (void)_handleAddServiceTransaction:(id)arg1 message:(id)arg2;
- (void)_handleCharacteristicError:(id)arg1 characteristic:(id)arg2 message:(id)arg3 read:(bool)arg4;
- (void)_handleCharacteristicRead:(id)arg1;
- (void)_handleCharacteristicWrite:(id)arg1;
- (void)_handleCharacteristicsChangedNotification:(id)arg1;
- (void)_handleDiscoveryBackoffTimerFired;
- (void)_handleGetAccessoryAdvertisingParams:(id)arg1;
- (void)_handleIdentify:(id)arg1;
- (void)_handleKeyRefreshTimerFired;
- (void)_handleListPairings:(id)arg1;
- (void)_handleMultipleCharacteristicsUpdated:(id)arg1 message:(id)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_handleRenameService:(id)arg1;
- (void)_handleServiceRemovedTransaction:(id)arg1 message:(id)arg2;
- (void)_handleUpdateAssociatedServiceType:(id)arg1;
- (void)_handleUpdateAuthorizationData:(id)arg1;
- (void)_logDuetEventIfNeeded:(id)arg1 clientName:(id)arg2;
- (void)_notifyCharacteristicNotificationChangedForCharacteristic:(id)arg1 enableNotification:(bool)arg2 message:(id)arg3;
- (void)_notifyCharacteristicNotificationChanges:(id)arg1 enableNotification:(bool)arg2 message:(id)arg3 clientIdentifier:(id)arg4;
- (void)_notifyNotificationChangesForCharacteristics:(id)arg1 errors:(id)arg2 enableNotification:(bool)arg3 message:(id)arg4;
- (void)_parseResponseFromRemotePeer:(id)arg1 message:(id)arg2 forCharacteristic:(id)arg3;
- (void)_performOperation:(long long)arg1 linkType:(long long)arg2 operationBlock:(id /* block */)arg3 errorBlock:(id /* block */)arg4;
- (id)_prepareMessagePayloadForCharacteristicRemoteWrite:(id)arg1;
- (void)_readAndWriteTimeInformationCharacteristic:(id)arg1;
- (void)_readCharacteristicValues:(id)arg1 hapAccessory:(id)arg2 source:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_readCharacteristicValues:(id)arg1 localOperationRequired:(bool)arg2 source:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5 errorBlock:(id /* block */)arg6;
- (void)_readValueForCharacteristic:(id)arg1 hapAccessory:(id)arg2 requestMessage:(id)arg3;
- (void)_readandWriteToCurrentTime:(id)arg1 errorBlock:(id /* block */)arg2;
- (void)_reenableNotificationsOnWatch;
- (void)_registerForMessages;
- (void)_registerForTimeMonitor;
- (void)_relayIdentifyAccessorytoResidentForMessage:(id)arg1;
- (void)_relayReadFromCharacteristic:(id)arg1 toResidentForMessage:(id)arg2 viaDevice:(id)arg3;
- (void)_relayWriteToCharacteristic:(id)arg1 toResidentForMessage:(id)arg2 viaDevice:(id)arg3;
- (void)_removeBackedoffAccessoryForStateNumber:(id)arg1;
- (void)_removeHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 completion:(id /* block */)arg3 completionQueue:(id)arg4;
- (void)_retrieveStateForTrackedAccessory:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_setCurrentRelayAccessoryState:(unsigned long long)arg1;
- (void)_setCurrentTimeCharacteristic:(id)arg1;
- (void)_setDayOfTheWeekCharacteristic:(id)arg1;
- (void)_setRelayEnabled:(bool)arg1;
- (void)_setRelayIdentifier:(id)arg1;
- (void)_setSupportsRelay:(bool)arg1;
- (void)_setSystemTimeNeedsUpdate:(bool)arg1;
- (void)_setTimeInformationServiceExists:(bool)arg1;
- (void)_setTimeUpdateCharacteristic:(id)arg1;
- (bool)_shouldTrackAccessoryWithPriority:(bool*)arg1;
- (void)_startSystemTimeWriteTimeInformationTimer;
- (void)_startWriteTimeInformationTimer;
- (void)_stopSystemTimeWriteTimeInformationTimer;
- (void)_stopWriteTimeInformationTimer;
- (bool)_timeInformationServiceExists;
- (id)_timeUpdateCharacteristic;
- (void)_updateAccessoryTracking;
- (void)_updateBridge:(id)arg1;
- (void)_updateBroadcastKey:(id)arg1 keyUpdatedStateNumber:(id)arg2 keyUpdatedTime:(double)arg3;
- (void)_updateReachability;
- (void)_updateRelayEnabled:(bool)arg1 notifyRelayManager:(bool)arg2;
- (void)_updateStateForTrackedAccessory:(id)arg1 stateNumber:(id)arg2;
- (void)_writeCharacteristicValues:(id)arg1 hapAccessory:(id)arg2 source:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_writeCharacteristicValues:(id)arg1 localOperationRequired:(bool)arg2 source:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5 errorBlock:(id /* block */)arg6;
- (void)_writeTimeInformationCharacteristicsForAccessory;
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 hapAccessory:(id)arg3 authorizationData:(id)arg4 message:(id)arg5;
- (void)accessory:(id)arg1 didActivateRelayWithError:(id)arg2;
- (void)accessory:(id)arg1 didPairRelayWithError:(id)arg2;
- (void)accessory:(id)arg1 didUpdateAccessoryAccessToken:(id)arg2;
- (void)accessory:(id)arg1 didUpdateAccessoryIdentifier:(id)arg2;
- (void)accessory:(id)arg1 didUpdateRelayEnabled:(bool)arg2;
- (void)accessory:(id)arg1 didUpdateRelayState:(unsigned long long)arg2;
- (void)accessoryDidBecomeReachable:(id)arg1;
- (void)accessoryDidBecomeUnreachable:(id)arg1;
- (id)accessoryDiscoveryBackoffTimer;
- (id)accessoryFlags;
- (id)accessoryKeyRefreshTimer;
- (unsigned long long)activationAttempts;
- (void)addBridgedAccessory:(id)arg1;
- (void)addRelayUser:(id)arg1 accessToken:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)addTransportInformationInstance:(id)arg1;
- (void)addTransportInformationInstances:(id)arg1;
- (void)backOffAccessoryForStateNumber:(id)arg1;
- (id)backedOffStateNumber;
- (id)backingStoreObjects:(long long)arg1;
- (id)bridge;
- (id)broadcastKey;
- (id)cameraProfiles;
- (long long)certificationStatus;
- (id)characteristicsPassingTest:(id /* block */)arg1;
- (void)configure:(id)arg1 msgDispatcher:(id)arg2 accessoryConfigureGroup:(id)arg3;
- (void)configureBulletinNotification:(id /* block */)arg1;
- (id)configureService:(id)arg1;
- (void)configureWithAccessory:(id)arg1 homeNotificationsEnabled:(bool)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (bool)containsCameraService;
- (unsigned long long)currentRelayAccessoryState;
- (id)currentTimeCharacteristic;
- (id)dayOfTheWeekCharacteristic;
- (void)deRegisterForTimeMonitor;
- (void)dealloc;
- (id)description;
- (void)disableNotificationsForBundleID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)discoveredServices;
- (id)dumpSimpleState;
- (id)dumpState;
- (void)enableNotification:(bool)arg1 forCharacteristicIDs:(id)arg2 message:(id)arg3 clientIdentifier:(id)arg4;
- (void)enableNotification:(bool)arg1 forCharacteristics:(id)arg2 message:(id)arg3 clientIdentifier:(id)arg4;
- (void)enableNotification:(bool)arg1 unconditionallyDeregister:(bool)arg2 ignoreDeviceUnlockRequirement:(bool)arg3 clientIdentifier:(id)arg4 forCharacteristics:(id)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)findCharacteristic:(id)arg1;
- (id)findCharacteristic:(id)arg1 forService:(id)arg2;
- (id)findCharacteristicType:(id)arg1 forServiceType:(id)arg2;
- (id)findService:(id)arg1;
- (id)getPrimaryHAPAccessories;
- (id)getTransportInformationArray;
- (void)handleMultipleCharacteristicsUpdated:(id)arg1 message:(id)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handlePairedStateChange:(bool)arg1;
- (void)handleRemoteGatewayNotificationRegistration:(id)arg1 enable:(bool)arg2 enableTime:(id)arg3;
- (id)hapCharacteristicWriteRequests:(id)arg1 hapAccessory:(id)arg2 hmdResponses:(id*)arg3 mapping:(id*)arg4;
- (bool)hasBTLELink;
- (unsigned long long)hash;
- (id)hmdCharacteristicForInstanceId:(id)arg1;
- (id)hmdCharacteristicFromHapCharacteristic:(id)arg1;
- (id)identifiersForBridgedAccessories;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (bool)isClientRegisteredForNotifications;
- (bool)isEqual:(id)arg1;
- (bool)isNonClientNotificationEnabled;
- (bool)isNotificationEnabled;
- (bool)isNotificationEnabledForClientIdentifier:(id)arg1;
- (bool)isPaired;
- (bool)isPrimary;
- (bool)isReadingRequiredAccessoryInformationCharacteristic:(id)arg1 providedName:(id)arg2 forceReadFWVersion:(bool)arg3;
- (bool)isRelayEnabled;
- (bool)isSecuritySessionOpen;
- (bool)keyGenerationInProgress;
- (unsigned char)keyGenerationType;
- (id)keyUpdatedStateNumber;
- (id)keyUpdatedTime;
- (long long)linkSpeed;
- (void)logDuetEventIfNeeded:(id)arg1 clientName:(id)arg2;
- (bool)matchesHAPAccessory:(id)arg1;
- (bool)matchesHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long*)arg2;
- (bool)matchesHMDAccessoryTransportInformationWithServerIdentifier:(id)arg1 instanceID:(id)arg2;
- (id)matchingHAPAccessoryServerIdentifierWithLinkType:(long long)arg1;
- (id)matchingHAPAccessoryWithLinkType:(long long)arg1;
- (id)matchingHAPAccessoryWithServerIdentifier:(id)arg1;
- (id)matchingHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2;
- (id)matchingTransportInformation:(id)arg1;
- (id)matchingTransportInformationWithServerIdentifier:(id)arg1;
- (id)matchingTransportInformationWithServerIdentifier:(id)arg1 linkType:(long long)arg2;
- (void)mergeTransportInformationInstances:(id)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)namesOfServicesShowingTilesInHomeApp;
- (void)notifyValue:(id)arg1 previousValue:(id)arg2 error:(id)arg3 forCharacteristic:(id)arg4 requestMessage:(id)arg5;
- (unsigned long long)pairingAttempts;
- (id)pairingIdentity;
- (id)pairingUsername;
- (void)performOperation:(long long)arg1 linkType:(long long)arg2 operationBlock:(id /* block */)arg3 errorBlock:(id /* block */)arg4;
- (void)populateHMDCharacteristicResponses:(id)arg1 hapResponses:(id)arg2 mapping:(id)arg3 overallError:(id)arg4 requests:(id)arg5;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (id)preferredHAPAccessoryForOperation:(long long)arg1 linkType:(long long*)arg2;
- (id)publicKey;
- (void)reachabilityDidChange:(id)arg1;
- (long long)reachableTransports;
- (void)readCharacteristicValues:(id)arg1 source:(unsigned long long)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)readInitialRequiredCharacteristicsForBTLEAccessory:(id /* block */)arg1;
- (void)registerForTimeMonitor;
- (id)relayAccessory;
- (id)relayIdentifier;
- (void)removeBridgedAccessory:(id)arg1;
- (void)removeHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 completion:(id /* block */)arg3 completionQueue:(id)arg4;
- (void)removeRelayUser:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeTransportInformationInstance:(id)arg1;
- (void)requestResource:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resetNotificationEnabledTime;
- (id)retrieveUpdatedTransportInfoArray:(id)arg1;
- (void)savePublicKeyToKeychain;
- (id)serializedIdentifier;
- (id)serverIDToHAPAccessoryTable;
- (id)serviceWithUUID:(id)arg1;
- (id)services;
- (void)setAccessoryDiscoveryBackoffTimer:(id)arg1;
- (void)setAccessoryFlags:(id)arg1;
- (void)setAccessoryKeyRefreshTimer:(id)arg1;
- (void)setActivationAttempts:(unsigned long long)arg1;
- (void)setBackedOffStateNumber:(id)arg1;
- (void)setBridge:(id)arg1;
- (void)setBroadcastKey:(id)arg1;
- (void)setBroadcastKey:(id)arg1 keyUpdatedStateNumber:(id)arg2 keyUpdatedTime:(id)arg3;
- (void)setCameraProfiles:(id)arg1;
- (void)setCertificationStatus:(long long)arg1;
- (void)setCurrentTimeCharacteristic:(id)arg1;
- (void)setDayOfTheWeekCharacteristic:(id)arg1;
- (void)setDiscoveredServices:(id)arg1;
- (void)setIdentifiersForBridgedAccessories:(id)arg1;
- (void)setKeyGenerationInProgress:(bool)arg1;
- (void)setKeyGenerationType:(unsigned char)arg1;
- (void)setKeyUpdatedStateNumber:(id)arg1;
- (void)setKeyUpdatedTime:(id)arg1;
- (void)setPairingAttempts:(unsigned long long)arg1;
- (void)setPairingUsername:(id)arg1;
- (void)setPairingUsername:(id)arg1 publicKey:(id)arg2;
- (void)setPublicKey:(id)arg1;
- (void)setReachability:(bool)arg1 serverIdentifier:(id)arg2 linkType:(long long)arg3;
- (void)setRelayEnabled:(bool)arg1;
- (void)setRelayIdentifier:(id)arg1;
- (void)setRemotelyReachable:(bool)arg1;
- (void)setServerIDToHAPAccessoryTable:(id)arg1;
- (void)setSetupHash:(id)arg1;
- (void)setSupportsRelay:(bool)arg1;
- (void)setSystemTimeInformationTimer:(id)arg1;
- (void)setSystemTimeNeedsUpdate:(bool)arg1;
- (void)setTimeInformationServiceExists:(bool)arg1;
- (void)setTimeInformationTimer:(id)arg1;
- (void)setTimeUpdateCharacteristic:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)setupHash;
- (bool)shouldEnableDaemonRelaunch;
- (void)startRelayActivationWithActivationClient:(id)arg1;
- (void)startRelayPairingWithPairingClient:(id)arg1;
- (bool)supportsRelay;
- (id)systemTimeInformationTimer;
- (bool)systemTimeNeedsUpdate;
- (void)takeOwnershipOfAppData:(id)arg1;
- (void)timeInformationMonitorDidChangeTime;
- (bool)timeInformationServiceExists;
- (id)timeInformationTimer;
- (id)timeUpdateCharacteristic;
- (void)timerDidFire:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (id)transportInformationInstances;
- (id)tunneledHAPAccessories;
- (void)unconfigure;
- (void)unconfigureAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 updateReachability:(bool)arg3;
- (id)uniqueIdentifier;
- (void)updateAccessoryFlags:(id)arg1;
- (id)updateAccessoryFlagsAndNotifyClients:(id)arg1;
- (bool)updateAccessoryInformation:(id)arg1;
- (void)updateNotificationEnabled:(bool)arg1 forCharacteristics:(id)arg2 onBehalfOf:(id)arg3;
- (void)updateReachability;
- (bool)updateTimeInformationCharacteristicsForAccessory:(id)arg1;
- (bool)updateTransportInformation:(id)arg1;
- (void)verifyPairingWithCompletionHandler:(id /* block */)arg1;
- (void)writeCharacteristicValues:(id)arg1 source:(unsigned long long)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)writeTimeInformationCharacteristicsForAccessory:(id)arg1;

@end
