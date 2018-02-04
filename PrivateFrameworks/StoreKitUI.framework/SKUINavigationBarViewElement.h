/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUINavigationBarViewElement : SKUIViewElement {
    bool  _hidesBackButton;
    bool  _hidesShadow;
}

@property (nonatomic, readonly) bool hidesBackButton;
@property (nonatomic, readonly) bool hidesShadow;
@property (nonatomic, readonly) bool isTransparent;
@property (nonatomic, readonly) NSArray *mainViewElements;
@property (nonatomic, readonly) NSArray *navigationPalettes;
@property (nonatomic, readonly) UIColor *tintColor;

- (id)applyUpdatesWithElement:(id)arg1;
- (bool)hidesBackButton;
- (bool)hidesShadow;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isTransparent;
- (id)mainViewElements;
- (id)navigationPalettes;
- (id)tintColor;

@end
