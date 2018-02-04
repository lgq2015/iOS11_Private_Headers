/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDBackingiOSAccount : CKDBackingAccount {
    ACAccountStore * _accountStore;
    ACAccount * _parentAppleAccount;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, readonly) ACAccount *ckAccount;
@property (nonatomic, retain) ACAccount *parentAppleAccount;

+ (id)accountWithIdentifier:(id)arg1 inStore:(id)arg2;
+ (void)determineCloudKitInfoFromEmail:(id)arg1 password:(id)arg2 completion:(id /* block */)arg3;
+ (id)primaryAccountInStore:(id)arg1;

- (void).cxx_destruct;
- (id)_accountCredentialForAccount:(id)arg1 withError:(id*)arg2;
- (id)_initWithParentAccount:(id)arg1 inStore:(id)arg2;
- (id)accountPropertiesForDataclass:(id)arg1;
- (id)accountStore;
- (bool)canAuthWithCloudKit;
- (id)ckAccount;
- (id)cloudKitAuthTokenWithError:(id*)arg1;
- (id)dsid;
- (id)fullName;
- (id)iCloudAuthTokenWithError:(id*)arg1;
- (bool)iCloudDriveAllowsCellularAccess;
- (id)identifier;
- (bool)isDataclassEnabled:(id)arg1;
- (id)parentAppleAccount;
- (id)primaryEmail;
- (void)setParentAppleAccount:(id)arg1;
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)username;

@end
