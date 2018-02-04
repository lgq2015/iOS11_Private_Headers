/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLManageAccountViewController : SKUIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    MSCLAccount * _account;
    MSCLAccountStore * _accountStore;
    MSCLSettingsTableViewCell * _deleteAccountButtonCell;
    bool  _isVerifying;
    MSCLSettingsTextFieldTableViewCell * _passwordCell;
    UITableView * _tableView;
    MSCLSettingsTextFieldTableViewCell * _userNameCell;
}

@property (nonatomic, readonly) MSCLAccount *account;
@property (nonatomic, readonly) MSCLAccountStore *accountStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonAction:(id)arg1;
- (void)_deleteAccount;
- (id)_deleteConfirmationMessage;
- (void)_doneButtonAction:(id)arg1;
- (void)_finishVerifyWithAccount:(id)arg1 error:(id)arg2;
- (void)_setVerifying:(bool)arg1;
- (void)_textFieldDidChangeNotification:(id)arg1;
- (void)_verifyPassword:(id)arg1;
- (id)account;
- (id)accountStore;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewWillLayoutSubviews;

@end
