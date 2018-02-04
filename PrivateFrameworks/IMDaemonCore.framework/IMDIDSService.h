/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDIDSService : IMDService <IDSAccountControllerDelegate, IDSAccountRegistrationDelegate> {
    IDSAccountController * _accountController;
    bool  _activatingAccount;
    bool  _deactivatingAccount;
    IMDIDSService * _mainService;
    IMDIDSService * _subService;
    NSString * _subServiceName;
}

@property (nonatomic, readonly, retain) NSArray *accountsLoadedFromIdentityServices;
@property (nonatomic, readonly) NSArray *activeAccountsFromIdentityServices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSubService;
@property (nonatomic) IMDIDSService *mainService;
@property (nonatomic, retain) IMDIDSService *subService;
@property (nonatomic, retain) NSString *subServiceName;
@property (readonly) Class superclass;

- (void)_loadIDSAccountController;
- (id)_serviceDomain;
- (void)account:(id)arg1 aliasesChanged:(id)arg2;
- (void)account:(id)arg1 displayNameChanged:(id)arg2;
- (void)account:(id)arg1 loginChanged:(id)arg2;
- (void)account:(id)arg1 profileChanged:(id)arg2;
- (void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
- (void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
- (void)accountAdded:(id)arg1;
- (Class)accountClass;
- (void)accountController:(id)arg1 accountAdded:(id)arg2;
- (void)accountController:(id)arg1 accountDisabled:(id)arg2;
- (void)accountController:(id)arg1 accountEnabled:(id)arg2;
- (void)accountController:(id)arg1 accountRemoved:(id)arg2;
- (void)accountController:(id)arg1 accountUpdated:(id)arg2;
- (id)accountFromIDSAccountWithUniqueID:(id)arg1;
- (void)accountRemoved:(id)arg1;
- (id)accountsLoadedFromIdentityServices;
- (id)activeAccountsFromIdentityServices;
- (void)dealloc;
- (void)disableAccount:(id)arg1;
- (void)enableAccount:(id)arg1;
- (id)imdAccountLoginFromIDSAccountWithType:(int)arg1 login:(id)arg2;
- (id)initWithBundle:(id)arg1;
- (id)initWithBundle:(id)arg1 isMainService:(bool)arg2;
- (id)initWithBundle:(id)arg1 subServiceName:(id)arg2;
- (bool)isSubService;
- (id)mainService;
- (id)mockAccountController;
- (id)newAccountWithAccountDefaults:(id)arg1 accountID:(id)arg2;
- (void)refreshRegistrationForAccount:(id)arg1;
- (void)registrationFailedForAccount:(id)arg1 needsDeletion:(id)arg2;
- (void)setMainService:(id)arg1;
- (void)setMockAccountController:(id)arg1;
- (void)setSubService:(id)arg1;
- (void)setSubServiceName:(id)arg1;
- (id)subService;
- (id)subServiceName;

@end
