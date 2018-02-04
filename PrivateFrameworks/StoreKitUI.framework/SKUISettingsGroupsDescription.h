/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISettingsGroupsDescription : NSObject <SKUISettingsGroupControllerDelegate> {
    SKUIClientContext * _clientContext;
    NSMapTable * _controllers;
    <SKUISettingsGroupsDescriptionDelegate> * _delegate;
    SKUISettingsObjectStore * _groupDescriptions;
    SKUISettingsContext * _settingsContext;
}

@property (nonatomic) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUISettingsGroupsDescriptionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addSettingsGroupWithViewElement:(id)arg1 controller:(id)arg2;
- (id)_controllerForGroupElement:(id)arg1;
- (void)_dismissViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_dispatchUpdateForSettingsGroupDescription:(id)arg1 atIndex:(unsigned long long)arg2 withUpdateType:(long long)arg3;
- (id)_gatherEditableSettings;
- (void)_presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_updatedEditsValid;
- (void)addSettingsGroupWithViewElement:(id)arg1;
- (id)clientContext;
- (id)createEditTransaction;
- (id)delegate;
- (void)deleteSettingAtIndexPath:(id)arg1;
- (void)deleteSettingsGroupDescription:(id)arg1;
- (void)dispatchUpdate:(id)arg1;
- (id)footerDescriptionForGroupAtIndex:(unsigned long long)arg1;
- (bool)hasEditableSettingDescriptions;
- (id)headerDescriptionForGroupAtIndex:(unsigned long long)arg1;
- (void)hideSettingsGroupDescription:(id)arg1;
- (unsigned long long)indexOfSettingsGroupDescription:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 settingsContext:(id)arg2;
- (unsigned long long)numberOfGroups;
- (unsigned long long)numberOfSettingsInGroupAtIndex:(unsigned long long)arg1;
- (id)owningViewControllerForSettingsGroupController:(id)arg1;
- (void)recycle;
- (void)reloadData;
- (void)requestLayoutForWidth:(double)arg1 context:(id)arg2;
- (void)revealSettingsGroupDescription:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)settingDescriptionAtIndexPath:(id)arg1;
- (void)settingsGroupController:(id)arg1 reloadSettingDescription:(id)arg2;
- (id)settingsGroupController:(id)arg1 viewForSettingDescription:(id)arg2;
- (bool)shouldShowFooterForGroupAtIndex:(unsigned long long)arg1;
- (bool)shouldShowHeaderForGroupAtIndex:(unsigned long long)arg1;
- (id)viewElementForSettingAtIndexPath:(id)arg1;

@end
