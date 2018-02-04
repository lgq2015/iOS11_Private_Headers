/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSiCloudDeviceListMonitor : NSObject {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    long long  _majorVersForCloudKitSyncMacOS;
    long long  _majorVersForCloudKitSynciOS;
    long long  _minorSubversionForCloudKitSyncMacOS;
    long long  _minorVersForCloudKitSyncMacOS;
    long long  _minorVersForCloudKitSynciOS;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic) long long majorVersForCloudKitSyncMacOS;
@property (nonatomic) long long majorVersForCloudKitSynciOS;
@property (nonatomic) long long minorSubversionForCloudKitSyncMacOS;
@property (nonatomic) long long minorVersForCloudKitSyncMacOS;
@property (nonatomic) long long minorVersForCloudKitSynciOS;

+ (id)iCloudDeviceListMonitor;

- (void).cxx_destruct;
- (id)account;
- (id)accountStore;
- (bool)canMigrateToCloudKit;
- (void)dealloc;
- (void)fetchCloudKitDevicesWithCompletionBlock:(id /* block */)arg1;
- (void)fetchICloudDevicesWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (void)isAccountCompatibleForCloudKitSyncingWithCompletionBlock:(id /* block */)arg1;
- (bool)isSWVersionCloudKitSyncCompatible:(id)arg1;
- (long long)majorVersForCloudKitSyncMacOS;
- (long long)majorVersForCloudKitSynciOS;
- (long long)minorSubversionForCloudKitSyncMacOS;
- (long long)minorVersForCloudKitSyncMacOS;
- (long long)minorVersForCloudKitSynciOS;
- (void)queryMigrationState;
- (void)resetDataNoAccount;
- (void)setAccount:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (void)setMajorVersForCloudKitSyncMacOS:(long long)arg1;
- (void)setMajorVersForCloudKitSynciOS:(long long)arg1;
- (void)setMinorSubversionForCloudKitSyncMacOS:(long long)arg1;
- (void)setMinorVersForCloudKitSyncMacOS:(long long)arg1;
- (void)setMinorVersForCloudKitSynciOS:(long long)arg1;

@end
