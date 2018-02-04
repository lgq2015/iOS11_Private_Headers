/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMenuViewElement : SKUIViewElement {
    BOOL  _enabled;
    SKUILabelViewElement * _menuLabel;
}

@property (nonatomic, readonly) NSArray *menuItemTitles;
@property (nonatomic, readonly) SKUILabelViewElement *menuLabel;
@property (nonatomic, readonly) long long selectedItemIndex;
@property (nonatomic, readonly) SKUIItemViewElement *titleItem;

- (void).cxx_destruct;
- (void)_enumerateItemElementsUsingBlock:(id /* block */)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)dispatchEventOfType:(unsigned long long)arg1 forItemAtIndex:(long long)arg2;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isEnabled;
- (id)menuItemTitles;
- (id)menuLabel;
- (long long)selectedItemIndex;
- (id)titleItem;

@end
