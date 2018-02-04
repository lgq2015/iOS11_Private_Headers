/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBulletinBoard : HMFObject <NSSecureCoding> {
    HMDBulletinProvider * _bulletinProvider;
    NSArray * _categories;
    NSMutableDictionary * _characteristicTuples;
    BBDataProviderConnection * _dataProviderConnection;
    bool  _enabled;
    HMDHomeManager * _homeManager;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) HMDBulletinProvider *bulletinProvider;
@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, retain) NSMutableDictionary *characteristicTuples;
@property (nonatomic, retain) BBDataProviderConnection *dataProviderConnection;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)_supportedNonSecureServices;
+ (id)_supportedSecureServices;
+ (void)archive;
+ (id)bulletinSupportedCharacteristicsForService:(id)arg1;
+ (id)characteristicTupleKeyFromServiceContextID:(id)arg1 currentType:(id)arg2;
+ (void)initializeMapping;
+ (bool)isBulletinSupportedForCharacteristicType:(id)arg1 serviceType:(id)arg2;
+ (bool)isBulletinSupportedForNonSecureCharacteristicType:(id)arg1 serviceType:(id)arg2;
+ (bool)isCriticalNonSecureServiceType:(id)arg1;
+ (bool)presentationValueOfCharacteristic:(id)arg1 equalTo:(id)arg2;
+ (id)sharedBulletinBoard;
+ (bool)supportsSecureCoding;
+ (id)unarchive;

- (void).cxx_destruct;
- (id)_bulletinWithRecordID:(id)arg1;
- (bool)_hasDuplicateBulletinForCharacteristic:(id)arg1;
- (id)_insertBulletinWithTitle:(id)arg1 snapshotData:(id)arg2 message:(id)arg3 recordID:(id)arg4 bulletinType:(unsigned long long)arg5 actionURL:(id)arg6 bulletinContext:(struct NSDictionary { Class x1; }*)arg7 actionContext:(struct NSDictionary { Class x1; }*)arg8;
- (id)_insertImageBulletinsForChangedCharacteristics:(id)arg1 snapshotData:(id)arg2;
- (id)_lookupBulletinForCharacteristic:(id)arg1;
- (void)_removeBulletinsUsingPredicate:(id)arg1;
- (bool)_shouldPostBulletinOnCurrentValueChangeForCharacteristic:(id)arg1;
- (void)_updateBulletin:(id)arg1;
- (void)_updateCharacteristicTupleFor:(id)arg1 withCurrentType:(id)arg2 changedByThisDevice:(bool)arg3;
- (id)bulletinProvider;
- (id)categories;
- (id)characteristicTuples;
- (void)configureHomeManager:(id)arg1;
- (id)dataProviderConnection;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)homeManager;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)insertBulletinForIncomingInvitation:(id)arg1;
- (id)insertBulletinForSecureTrigger:(id)arg1;
- (void)insertBulletinsForChangedCharacteristics:(id)arg1 changedByThisDevice:(bool)arg2 completion:(id /* block */)arg3;
- (void)insertImageBulletinsForChangedCharacteristics:(id)arg1 snapshotData:(id)arg2 completion:(id /* block */)arg3;
- (bool)isEnabled;
- (bool)isTargetCharacteristic:(id)arg1 matchCurrentCharacteristic:(id)arg2;
- (void)refreshHomeBadgeNumber;
- (void)refreshHomeConfiguration;
- (void)reloadDefaultSectionInfo;
- (void)removeAllBulletins;
- (void)removeBulletinWithRecordID:(id)arg1;
- (void)removeBulletinsForAccessory:(id)arg1;
- (void)removeBulletinsForHome:(id)arg1;
- (void)removeBulletinsForService:(id)arg1;
- (void)removeBulletinsForTrigger:(id)arg1;
- (void)setBulletinProvider:(id)arg1;
- (void)setCharacteristicTuples:(id)arg1;
- (void)setDataProviderConnection:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)updateBulletinForFirmwareUpdateInHome:(id)arg1;
- (id)workQueue;

@end