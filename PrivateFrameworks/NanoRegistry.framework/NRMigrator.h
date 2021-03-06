/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRMigrator : NSObject {
    bool  _migrating;
    NRDevice * _migratingDevice;
    NSPointerArray * _observers;
}

@property (nonatomic, readonly) NSArray *devicesExpectedToBeMigratableAfterRestore;
@property (nonatomic, readonly) NSArray *migratableDevices;
@property (nonatomic, readonly) NSArray *migratableDevicesRequiringConsent;
@property (nonatomic, readonly) NRDevice *migratingDevice;
@property (nonatomic, readonly) bool migrationIsAvailable;

+ (void)ingestPostRestoreMigrationDataForConsentedDevices:(id)arg1;
+ (id)migrationDataPreRestoreForConsentedDevices:(id)arg1;
+ (id)sharedMigrator;

- (void).cxx_destruct;
- (id)UDIDUUID;
- (id)_SHA256WithString:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)beginMigrationWithDevice:(id)arg1 passcode:(id)arg2 withBlock:(id /* block */)arg3;
- (void)beginMigrationWithDevice:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)compressMigrationProtobuf:(id)arg1;
- (id)devicesExpectedToBeMigratableAfterRestore;
- (id)devicesFromMigrationConsentRequestData:(id)arg1;
- (void)enterPreMigrationMode;
- (void)enumerateObservers:(id /* block */)arg1;
- (id)init;
- (id)migratableDevices;
- (id)migratableDevicesRequiringConsent;
- (id)migratingDevice;
- (id)migrationConsentRequestData;
- (bool)migrationIsAvailable;
- (id)packMigrationProtobufs:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setMigrationConsented:(bool)arg1 forDevice:(id)arg2 withBlock:(id /* block */)arg3;
- (void)setMigrationConsented:(bool)arg1 forDeviceID:(id)arg2 withBlock:(id /* block */)arg3;
- (id)shortenStringByCompleteUnicodeCharactersToReduceStorageSpace:(id)arg1;
- (void)shrinkMigrationProtobufs:(id)arg1;

@end
