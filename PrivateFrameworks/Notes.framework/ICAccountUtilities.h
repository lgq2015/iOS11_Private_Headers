/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICAccountUtilities : NSObject {
    ACAccountStore * _accountStore;
    NSDictionary * _currentICloudAccountState;
    ACAccount * _primaryICloudACAccount;
    bool  _primaryICloudACAccountValid;
}

@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, copy) NSDictionary *currentICloudAccountState;
@property (nonatomic, readonly) bool didChooseToMigratePrimaryICloudAccount;
@property (readonly) ACAccount *primaryICloudACAccount;
@property (getter=isPrimaryICloudACAccountValid, nonatomic) bool primaryICloudACAccountValid;
@property (nonatomic, readonly) bool primaryICloudAccountEnabled;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)accountStore;
- (void)accountStoreDidChange:(id)arg1;
- (id)allICloudACAccounts;
- (id)currentICloudAccountState;
- (void)dealloc;
- (bool)didChooseToMigratePrimaryICloudAccount;
- (id)init;
- (id)initForObservingAccountStoreChanges:(bool)arg1;
- (void)internalInvalidatePrimaryICloudACAccount;
- (void)invalidatePrimaryICloudACAccount;
- (bool)isPrimaryICloudACAccountValid;
- (id)primaryICloudACAccount;
- (bool)primaryICloudAccountEnabled;
- (void)setAccountStore:(id)arg1;
- (void)setCurrentICloudAccountState:(id)arg1;
- (void)setPrimaryICloudACAccountValid:(bool)arg1;
- (void)updateICloudACAccountFromStore;

@end
