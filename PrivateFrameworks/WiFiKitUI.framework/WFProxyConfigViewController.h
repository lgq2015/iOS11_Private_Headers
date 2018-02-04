/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFProxyConfigViewController : UITableViewController {
    UISwitch * _authSwitch;
    WFNetworkSettingsConfig * _modifiedConfig;
    WFNetworkSettingsConfig * _originalConfig;
    WFTextFieldCell * _passwordCell;
    WFTextFieldCell * _portCell;
    id /* block */  _saveHandler;
    WFTextFieldCell * _serverCell;
    WFTextFieldCell * _urlCell;
    WFTextFieldCell * _userCell;
}

@property (nonatomic, retain) UISwitch *authSwitch;
@property (nonatomic, retain) WFNetworkSettingsConfig *modifiedConfig;
@property (nonatomic, retain) WFNetworkSettingsConfig *originalConfig;
@property (nonatomic, retain) WFTextFieldCell *passwordCell;
@property (nonatomic, retain) WFTextFieldCell *portCell;
@property (nonatomic, copy) id /* block */ saveHandler;
@property (nonatomic, retain) WFTextFieldCell *serverCell;
@property (nonatomic, retain) WFTextFieldCell *urlCell;
@property (nonatomic, retain) WFTextFieldCell *userCell;

- (void).cxx_destruct;
- (void)_changeProxyAuthentication:(id)arg1;
- (void)_setFirstResponderAfterCell:(id)arg1;
- (void)_updateSaveEnabled;
- (id)authSwitch;
- (id)initWithConfig:(id)arg1;
- (id)modifiedConfig;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)originalConfig;
- (id)passwordCell;
- (id)portCell;
- (void)save:(id)arg1;
- (id /* block */)saveHandler;
- (id)serverCell;
- (void)setAuthSwitch:(id)arg1;
- (void)setModifiedConfig:(id)arg1;
- (void)setOriginalConfig:(id)arg1;
- (void)setPasswordCell:(id)arg1;
- (void)setPortCell:(id)arg1;
- (void)setSaveHandler:(id /* block */)arg1;
- (void)setServerCell:(id)arg1;
- (void)setUrlCell:(id)arg1;
- (void)setUserCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)urlCell;
- (id)userCell;
- (void)viewDidLoad;

@end
