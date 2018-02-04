/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIAddOtherAccountsViewController : PSListController <ACUISetupViewControllerDelegate> {
    NSString * _filteredDataclass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_specifiersForOtherCalendarAccounts;
- (id)_specifiersForOtherContactsAccounts;
- (id)_specifiersForOtherMailAccounts;
- (id)_specifiersForOtherServerAccounts;
- (id)_viewProvidersManager;
- (void)setSpecifier:(id)arg1;
- (void)setupViewControllerDidDismiss:(id)arg1;
- (id)specifiers;

@end
