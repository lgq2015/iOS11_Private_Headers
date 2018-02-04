/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRDevice : NSObject <NSSecureCoding> {
    NSMutableDictionary * _changeBlocks;
    NSObject<OS_dispatch_queue> * _nrQueue;
    NSMutableDictionary * _observers;
    NSMutableArray * _promiscuousChangeBlocks;
    NSPointerArray * _promiscuousObservers;
    NSMutableDictionary * _properties;
}

@property (nonatomic, retain) NSMutableDictionary *changeBlocks;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *nrQueue;
@property (nonatomic, retain) NSMutableDictionary *observers;
@property (nonatomic, retain) NSMutableArray *promiscuousChangeBlocks;
@property (nonatomic, retain) NSPointerArray *promiscuousObservers;
@property (nonatomic, retain) NSMutableDictionary *properties;

// Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_firePropertyObserversForProperty:(id)arg1 fromValue:(id)arg2;
- (void)_queueFirePropertyObserversForProperty:(id)arg1 fromValue:(id)arg2;
- (bool)_queueSetValue:(id)arg1 forProperty:(id)arg2;
- (bool)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)addPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (bool)archived;
- (bool)canMigrate;
- (id)changeBlocks;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 queue:(id)arg2 withSecureProperties:(bool)arg3;
- (id)initWithQueue:(id)arg1;
- (void)mergeWithDevice:(id)arg1;
- (bool)migrationConfirmed;
- (id)migrationError;
- (id)nrQueue;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)observers;
- (id)promiscuousChangeBlocks;
- (id)promiscuousObservers;
- (id)properties;
- (id)propertyNames;
- (void)queueAddPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (id)queueDescription;
- (void)queueMergeWithDevice:(id)arg1;
- (void)queueRegisterForPropertyChanges:(id)arg1 withBlock:(id /* block */)arg2;
- (void)queueRemovePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (void)queueUnregisterForPropertyChanges:(id)arg1 withBlock:(id /* block */)arg2;
- (id)queueValueForProperty:(id)arg1;
- (void)registerForPropertyChanges:(id)arg1 withBlock:(id /* block */)arg2;
- (void)removePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (void)setChangeBlocks:(id)arg1;
- (void)setNrQueue:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setPromiscuousChangeBlocks:(id)arg1;
- (void)setPromiscuousObservers:(id)arg1;
- (void)setProperties:(id)arg1;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (bool)supportsCapability:(id)arg1;
- (void)unregisterForPropertyChanges:(id)arg1 withBlock:(id /* block */)arg2;
- (id)valueForProperty:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

+ (bool)_activePairedDeviceSupportIsGreaterEqualVersion:(unsigned int)arg1;
+ (bool)activePairedDeviceSupportsAddBulletinReplyToken;
+ (bool)activePairedDeviceSupportsAttachmentFiles;
+ (bool)activePairedDeviceSupportsDNDAssertionSync;
+ (bool)activePairedDeviceSupportsFileBulletinAdd;
+ (bool)activePairedDeviceSupportsFileSettingSync;
+ (bool)activePairedDeviceSupportsMultiplteAttachments;
+ (bool)activePairedDeviceSupportsNSNullPListExtenion;

- (unsigned long long)bltVersion;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (bool)hd_isActive;
- (bool)hd_isPaired;
- (id)hd_lastActiveDate;
- (id)hd_lastInactiveDate;
- (id)hd_name;
- (id)hd_pairingID;
- (id)hd_productType;
- (id)hd_shortDescription;
- (id)hd_systemBuildVersion;

@end
