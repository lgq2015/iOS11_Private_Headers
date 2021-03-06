/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUMediaAccessControlEditorTableViewController : HUItemTableViewController <HUMediaAccessControlEditorModuleControllerDelegate> {
    HUMediaAccessControlEditorModuleController * _accessControlEditorModuleController;
    HMHome * _home;
}

@property (nonatomic, readonly) HUMediaAccessControlEditorModuleController *accessControlEditorModuleController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_passwordSectionFooterTitle;
- (void)_updateHeaderFooterView:(id)arg1 forSection:(long long)arg2;
- (id)accessControlEditorModuleController;
- (void)accessControlEditorModuleController:(id)arg1 didUpdateAccessControl:(id)arg2;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)itemModuleControllers;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidLoad;

@end
