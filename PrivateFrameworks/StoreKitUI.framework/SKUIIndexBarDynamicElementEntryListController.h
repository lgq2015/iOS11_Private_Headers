/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIIndexBarDynamicElementEntryListController : SKUIIndexBarEntryListController {
    SKUIDynamicPageSectionIndexMapper * _dynamicIndexMapper;
    <SKUIEntityProviding> * _entityProvider;
    SKUIIndexBarEntryListViewElement * _entryListViewElement;
    SKUIIndexBarEntryViewElement * _indexBarEntryViewElement;
    SKUIViewElement * _templateElement;
}

@property (nonatomic, readonly) SKUIIndexBarEntryListViewElement *entryListViewElement;

- (void).cxx_destruct;
- (void)_entityProviderDidInvalidateNotification:(id)arg1;
- (void)dealloc;
- (id)entryDescriptorAtIndex:(long long)arg1;
- (id)entryListViewElement;
- (bool)hidesIndexBar;
- (id)initWithEntryListViewElement:(id)arg1;
- (bool)needsRootTargetViewElement;
- (long long)numberOfEntryDescriptors;
- (void)reloadViewElementData;
- (id)rootTargetIndexBarEntryID;
- (void)setRootTargetViewElement:(id)arg1;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long*)arg2;

@end
