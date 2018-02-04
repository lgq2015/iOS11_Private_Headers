/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILockupViewElement : SKUIViewElement {
    BOOL  _enabled;
    long long  _lockupViewType;
    bool  _selectable;
}

@property (nonatomic, readonly) bool containsElementGroups;
@property (nonatomic, readonly) SKUIFullscreenImageViewElement *fullscreenImage;
@property (nonatomic, readonly) long long lockupViewType;
@property (getter=isSelectable, nonatomic, readonly) bool selectable;

- (id)applyUpdatesWithElement:(id)arg1;
- (bool)containsElementGroups;
- (id)fullscreenImage;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isEnabled;
- (bool)isSelectable;
- (long long)lockupViewType;
- (long long)pageComponentType;

@end
