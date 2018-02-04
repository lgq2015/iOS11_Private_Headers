/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISettingsDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUIDocumentViewController, SKUISettingsDocumentViewDelegate, SKUISettingsEditTransactionDelegate, SKUISettingsGroupsDescriptionDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIBarButtonItem * _barButtonItemCancel;
    UIBarButtonItem * _barButtonItemDone;
    UIBarButtonItem * _barButtonItemEdit;
    SKUISettingsEditTransaction * _editTransaction;
    SKUIViewElementLayoutContext * _layoutContext;
    SKUIResourceLoader * _resourceLoader;
    SKUISettingsContext * _settingsContext;
    SKUISettingsGroupsDescription * _settingsGroupsDescription;
    UITableView * _tableView;
    SKUISettingsTemplateViewElement * _templateElement;
    SKUIViewElementTextLayoutCache * _textLayoutCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)_heightThatFitsWidth:(double)arg1 withSettingsHeaderFooterDescription:(id)arg2 context:(id)arg3;
+ (id)_settingsGroupsFromTemplateElement:(id)arg1 withDelegate:(id)arg2 settingsContext:(id)arg3;

- (void).cxx_destruct;
- (id)_barButtonItemCancel;
- (id)_barButtonItemDone;
- (id)_barButtonItemEdit;
- (void)_cancelButtonAction:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_dequeueHeaderFooterViewWithReuseIdentifier:(id)arg1;
- (void)_deselectItemsAnimated:(bool)arg1;
- (void)_doneButtonAction:(id)arg1;
- (void)_editButtonAction:(id)arg1;
- (void)_invalidateLayout;
- (id)_layoutContext;
- (void)_reloadData;
- (id)_resourceLoader;
- (void)_showBarItemLeft:(id)arg1 right:(id)arg2 animated:(bool)arg3;
- (void)_showEditBarButtonItemAnimated:(bool)arg1;
- (void)_showEditingBarButtonItemsEnabled:(bool)arg1 animated:(bool)arg2;
- (id)_tableView;
- (id)_textLayoutCache;
- (id)_viewForSettingsHeaderFooterDescription:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)owningViewControllerForSettingsGroupsDescription:(id)arg1;
- (void)settingsDocumentViewDidChangeTintColor:(id)arg1;
- (void)settingsEditTransaction:(id)arg1 isValid:(bool)arg2;
- (void)settingsEditTransactionDidCompleteTransaction:(id)arg1;
- (void)settingsEditTransactionDidFailTransaction:(id)arg1;
- (void)settingsEditTransactionWillBeginTransaction:(id)arg1;
- (void)settingsEditTransactionWillCommitTransaction:(id)arg1;
- (void)settingsGroupsDescription:(id)arg1 deletedSettingAtIndexPath:(id)arg2;
- (void)settingsGroupsDescription:(id)arg1 deletedSettingsGroupAtIndex:(unsigned long long)arg2;
- (void)settingsGroupsDescription:(id)arg1 didUpdateSettingsDescription:(id)arg2;
- (void)settingsGroupsDescription:(id)arg1 dismissViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)settingsGroupsDescription:(id)arg1 presentViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (id)settingsGroupsDescription:(id)arg1 viewForSettingAtIndexPath:(id)arg2;
- (void)settingsGroupsDescriptionDidUpdateValidity:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
