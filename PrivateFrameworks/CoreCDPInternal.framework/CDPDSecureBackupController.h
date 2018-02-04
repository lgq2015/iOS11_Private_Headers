/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDSecureBackupController : NSObject {
    NSDictionary * _cachedAccountInfo;
    CDPDSecureBackupConfiguration * _configuration;
    CDPContext * _context;
    <CDPDSecureBackupDelegate> * _delegate;
    bool  _fakeNearlyDepletedRecords;
    <CDPDSecureBackupProxy> * _secureBackupProxy;
    <CDPStateUIProviderInternal> * _uiProvider;
}

@property (nonatomic, retain) NSDictionary *cachedAccountInfo;
@property (nonatomic, retain) CDPDSecureBackupConfiguration *configuration;
@property (nonatomic, retain) CDPContext *context;
@property (nonatomic, readonly) <CDPDSecureBackupDelegate> *delegate;
@property (nonatomic) bool fakeNearlyDepletedRecords;
@property (nonatomic, retain) <CDPDSecureBackupProxy> *secureBackupProxy;
@property (nonatomic, readonly) <CDPStateUIProviderInternal> *uiProvider;

+ (id)_sanitizedInfoDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)_accountInfo:(id*)arg1;
- (void)_authenticatedEnableSecureBackupWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)_clientMetadataWithSecretType:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (id)_currentAnisetteData;
- (id)_dateWithSecureBackupDateString:(id)arg1;
- (void)_deleteAllBackupRecordsWithCompletion:(id /* block */)arg1;
- (void)_deleteSingleICSCBackupWithCompletion:(id /* block */)arg1;
- (bool)_disableRecoveryKey:(id*)arg1;
- (bool)_disableSecureBackup:(id*)arg1;
- (bool)_disableThenEnableWithInfo:(id)arg1 error:(id*)arg2;
- (void)_enableSecureBackupWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_getBackupRecordDevicesIncludingUnrecoverableRecords:(bool)arg1 completion:(id /* block */)arg2;
- (id)_recoverBackupDictionaryWithContext:(id)arg1 error:(id*)arg2;
- (id)_recoveryInfoDictionaryFromContext:(id)arg1;
- (void)accountInfoWithCompletion:(id /* block */)arg1;
- (bool)authenticatedEnableSecureBackupWithRecoveryKey:(id)arg1 error:(id*)arg2;
- (void)backupRecordsArePresentWithCompletion:(id /* block */)arg1;
- (id)cachedAccountInfo;
- (void)cdpBackupRecordsArePresentWithCompletion:(id /* block */)arg1;
- (void)checkAndRemoveExistingThenEnableSecureBackupRecordWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)checkForExistingRecord:(id /* block */)arg1;
- (void)checkForExistingRecordMatchingPredicate:(id)arg1 completion:(id /* block */)arg2;
- (void)checkForExistingRecordWithPeerId:(id)arg1 completion:(id /* block */)arg2;
- (void)clearAccountInfoCache;
- (id)configuration;
- (id)context;
- (id)delegate;
- (void)deleteAllBackupRecordsWithCompletion:(id /* block */)arg1;
- (void)deleteSingleICSCBackupWithCompletion:(id /* block */)arg1;
- (void)disableRecoveryKeyWithCompletion:(id /* block */)arg1;
- (void)disableSecureBackupWithCompletion:(id /* block */)arg1;
- (void)enableSecureBackupWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)enableSecureBackupWithRecoveryKey:(id)arg1 completion:(id /* block */)arg2;
- (bool)fakeNearlyDepletedRecords;
- (void)getBackupRecordDevicesWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithContext:(id)arg1 proxy:(id)arg2;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2 delegate:(id)arg3;
- (void)isEligibleForCDPWithCompletion:(id /* block */)arg1;
- (void)recoverSecureBackupWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)secureBackupProxy;
- (void)setCachedAccountInfo:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFakeNearlyDepletedRecords:(bool)arg1;
- (void)setSecureBackupProxy:(id)arg1;
- (id)stashedPRK;
- (bool)supportsRecoveryKey;
- (void)synchronizeKeyValueStoreWithCompletion:(id /* block */)arg1;
- (id)uiProvider;
- (void)upgradeICSCRecordsThenEnableSecureBackupWithContext:(id)arg1 completion:(id /* block */)arg2;

@end
