/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMenuBarViewElement : SKUIViewElement <SKUIMenuBarViewElement, _SKUIMenuBarViewElementConfigurationReloadDelegate> {
    SKUIMenuBarViewElementConfiguration * _configuration;
    NSArray * _titleViewElements;
}

@property (nonatomic, retain) SKUIMenuBarViewElementConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)_shelfMenuBarViewElementClass;
+ (Class)_titlesMenuBarViewElementClass;
+ (id)supportedFeatures;

- (void).cxx_destruct;
- (void)_menuBarViewElementConfigurationRequestsReload:(id)arg1;
- (void)_reloadMenuItems;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)configuration;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (void)setConfiguration:(id)arg1;
- (id)titleForMenuItemAtIndex:(unsigned long long)arg1;

@end
