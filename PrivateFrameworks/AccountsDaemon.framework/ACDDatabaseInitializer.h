/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDDatabaseInitializer : NSObject {
    NSArray * _accessKeys;
    NSArray * _accountTypes;
    NSArray * _accounts;
    ACDDatabase * _database;
    NSArray * _dataclasses;
}

- (void).cxx_destruct;
- (id)_accessKeyWithName:(id)arg1;
- (id)_accessKeys;
- (id)_accountTypeWithIdentifier:(id)arg1;
- (id)_accountTypes;
- (id)_accounts;
- (void)_addAccessKeyWithName:(id)arg1;
- (void)_addAccessKeysAttributeToCloudKitAccountType;
- (void)_addAccessKeysAttributeToFacebookAccountType;
- (void)_addAccessKeysAttributeToLinkedInAccountType;
- (void)_addAccessKeysAttributeToLiverpoolAccountType;
- (void)_addAccessKeysAttributeToTencentWeiboAccountType;
- (id)_addAccountTypeWithIdentifier:(id)arg1 displayName:(id)arg2 visibility:(int)arg3 supportedDataclasses:(id)arg4 credentialType:(id)arg5 supportsAuthentication:(bool)arg6 supportsMultipleAccounts:(bool)arg7;
- (id)_addAccountTypeWithIdentifier:(id)arg1 displayName:(id)arg2 visibility:(int)arg3 supportedDataclasses:(id)arg4 syncableDataclasses:(id)arg5 credentialType:(id)arg6 supportsAuthentication:(bool)arg7 supportsMultipleAccounts:(bool)arg8;
- (id)_addAccountTypeWithIdentifier:(id)arg1 displayName:(id)arg2 visibility:(int)arg3 supportedDataclasses:(id)arg4 syncableDataclasses:(id)arg5 credentialType:(id)arg6 supportsAuthentication:(bool)arg7 supportsMultipleAccounts:(bool)arg8 credentialProtectionPolicy:(id)arg9;
- (void)_addAndConfigureAllOSXAccountTypes;
- (void)_addAppleAccountType;
- (void)_addAppleIDAccountType;
- (void)_addAppleIDAuthenticationAccountType;
- (void)_addBookmarkDAVAccountType;
- (void)_addCalDAVAccountType;
- (void)_addCardDAVAccountType;
- (void)_addCloudKitAccountType;
- (void)_addCloudKitDataclasses;
- (void)_addContactsCalendarsDataclassesToFB;
- (void)_addCredentialType:(id)arg1 toAccountType:(id)arg2 supportsAuthentication:(bool)arg3;
- (void)_addDataclassWithName:(id)arg1;
- (void)_addDocumentsAndVPNDataclass;
- (void)_addExchangeAccountType;
- (void)_addFMFAccountType;
- (void)_addFaceTimeAccountType;
- (void)_addFacebookAccessKeys;
- (void)_addFacebookAccountType;
- (void)_addFacebookAudienceAccessKey;
- (void)_addFacebookAudienceAccessKeyToFacebookAccountType;
- (void)_addFacebookLegacyAccountTypes;
- (void)_addFindMyiPhoneAccountType;
- (void)_addFlickrAccountType;
- (void)_addGameCenterAccountType;
- (void)_addGmailAccountType;
- (void)_addHolidayCalendarAccountType;
- (void)_addHotmailAccountType;
- (void)_addIDMSAccountType;
- (void)_addIMAPAccountType;
- (void)_addIMAPMailAccountType;
- (void)_addIMAPNotesAccountType;
- (void)_addIdentityServicesAccountType;
- (void)_addLDAPAccountType;
- (void)_addLinkedInAccessKeys;
- (void)_addLinkedInAccountType;
- (void)_addLiverpoolAccessKeys;
- (void)_addLiverpoolAccountType;
- (void)_addMSOAccountType;
- (void)_addMadridAccountType;
- (void)_addMissingAccountTypes;
- (void)_addNotesDataclassToAASupportedDataclasses;
- (void)_addObsoleteAttributeToAccountTypes;
- (void)_addOnMyDeviceAccountType;
- (void)_addPOPAccountType;
- (void)_addPasswordCredentialTypeToGmailAccountType;
- (void)_addPasswordCredentialTypeToSMTPAccountType;
- (void)_addRemindersDataclassToCalDAVAccountType;
- (void)_addSMTPAccountType;
- (void)_addSingleSignOnAccountType;
- (void)_addSubscribedCalendarAccountType;
- (void)_addSupportsAuthenticationAttributeToAccountTypes;
- (void)_addSupportsAuthenticationAttributeToAccounts;
- (void)_addSupportsMultipleAccountsAttributeToAccountTypes;
- (void)_addSyncableDataclassesToCardAndCalDAV;
- (void)_addTencentWeiboAccessKeys;
- (void)_addTencentWeiboAccountType;
- (void)_addTokenCredentialTypeToYahooAccountType;
- (void)_addTudouAccountType;
- (void)_addTwitterAccountType;
- (void)_addVimeoAccountType;
- (void)_addWeiboAccountType;
- (void)_addYahooAccountType;
- (void)_addYelpAccountType;
- (void)_addYoukuAccountType;
- (void)_addiTunesStoreAccountType;
- (void)_allowMultipleAppleIDAuthenticationAccounts;
- (void)_changeFacebookAccountAccountType;
- (void)_configureSMTPAccountType;
- (void)_createLiverpoolDataclasses;
- (id)_dataclassWithName:(id)arg1;
- (id)_dataclasses;
- (void)_ensureAccountTypeWithIdentifier:(id)arg1 supportsDataclasses:(id)arg2 syncsDataclasses:(id)arg3;
- (void)_ensureDataclassesAllExist;
- (void)_ensurePresenceOfNewsDataclass;
- (void)_ensureProperAccountTypeDataclasses;
- (void)_limitFlickrToOneAccount;
- (void)_limitLinkedInToOneAccount;
- (void)_limitVimeoToOneAccount;
- (void)_makeTencentWeiboSingleton;
- (void)_makeTudouYoukuSingletons;
- (void)_removeAIMAccounts;
- (void)_removeFacebookAppVersionAccessKey;
- (void)_removeFacebookPermissionGroupAccessKey;
- (void)_removeLiverpoolTypes;
- (void)_removeMessagesFromAOLSupportedDataclasses;
- (void)_removeMessagesFromGoogleSupportedDataclasses;
- (void)_removeMessengerFromYahooSupportedDataclasses;
- (id)_resultsForEntityNamed:(id)arg1;
- (void)_setCloudKitAllowsMultipleAccounts;
- (void)_setCloudKitCredentialType;
- (void)_setOwningBundleIDForNativeAccountTypes;
- (void)_setSupportedDataclassesForAOLAccountType;
- (void)_setYahooAccountsProvisionedDataclassesToSupportedOnes;
- (void)_supportiCloudKeychainSyncDataclass;
- (void)_supportiCloudNewsDataclass;
- (void)_switchGoogleToOAuthAuthentication;
- (void)_switchHotmailToOAuthAuthentication;
- (void)_switchYahooToOAuthAuthentication;
- (void)_switchYahooToPasswordAuthentication;
- (void)_updateAOLAndAddNotificationsDataclass;
- (void)_updateFlickrCredentialTypeToOAuth;
- (void)_updateIdentityServicesAccountDescription;
- (void)_updateIdentityServicesAccountTypeToSupportAuthenticationAndMultipleAccounts;
- (void)_updateMacOSServerAccountDescription;
- (void)_updateOSXServerAccountDescription;
- (void)_updateTencentWeiboCredentialTypeToOAuth2;
- (void)_updateVimeoCredentialTypeToOAuth;
- (void)_updateWeiboAccountTypeIfNecessary;
- (void)_upgradeLinkedInAccountType;
- (id)initWithDatabase:(id)arg1;
- (void)insertAllDefaultContent;
- (void)updateDefaultContent;

@end
