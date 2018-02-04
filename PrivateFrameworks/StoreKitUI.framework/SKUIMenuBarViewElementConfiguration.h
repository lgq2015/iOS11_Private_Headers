/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMenuBarViewElementConfiguration : NSObject <IKAppMenuBarDocumentDelegate> {
    <SKUIMenuBarViewElementConfigurationDelegate> * _delegate;
    IKAppMenuBarDocument * _menuBarDocument;
    long long  _menuBarStyle;
    NSArray * _menuItemViewElements;
    bool  _needsReload;
    <_SKUIMenuBarViewElementConfigurationReloadDelegate> * _reloadDelegate;
    bool  _scrollEnabled;
    SKUIMenuItemViewElement * _selectedMenuItemViewElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIMenuBarViewElementConfigurationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long menuBarStyle;
@property (getter=_needsReload, setter=_setNeedsReload:, nonatomic) bool needsReload;
@property (nonatomic, readonly) unsigned long long numberOfMenuItems;
@property (getter=_reloadDelegate, setter=_setReloadDelegate:, nonatomic) <_SKUIMenuBarViewElementConfigurationReloadDelegate> *reloadDelegate;
@property (nonatomic, readonly) bool scrollEnabled;
@property (nonatomic, readonly) SKUIMenuItemViewElement *selectedMenuItemViewElement;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_ensureDataLoaded;
- (id)_initWithMenuBarDocument:(id)arg1;
- (bool)_needsReload;
- (id)_reloadDelegate;
- (void)_reloadWithMenuBarStyle:(long long)arg1 menuItemViewElements:(id)arg2 scrollEnabled:(bool)arg3;
- (void)_setNeedsReload:(bool)arg1;
- (void)_setReloadDelegate:(id)arg1;
- (void)contentWillAppearForMenuItemAtIndex:(unsigned long long)arg1 withEntityValueProvider:(id)arg2 clientContext:(id)arg3;
- (id)delegate;
- (id)documentForEntityUniqueIdentifier:(id)arg1;
- (id)documentForMenuItemAtIndex:(unsigned long long)arg1;
- (id)documentOptionsForEntityUniqueIdentifier:(id)arg1;
- (id)documentOptionsForMenuItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfMenuItemViewElement:(id)arg1;
- (void)menuBarDocument:(id)arg1 didReplaceDocumentForEntityWithUniqueIdentifier:(id)arg2;
- (void)menuBarDocument:(id)arg1 didReplaceDocumentForMenuItem:(id)arg2;
- (void)menuBarDocument:(id)arg1 didSelectMenuItem:(id)arg2 animated:(bool)arg3;
- (long long)menuBarStyle;
- (unsigned long long)numberOfMenuItems;
- (bool)scrollEnabled;
- (id)selectedMenuItemViewElement;
- (void)setDelegate:(id)arg1;

@end
