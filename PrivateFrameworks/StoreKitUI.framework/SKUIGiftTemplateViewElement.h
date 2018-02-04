/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftTemplateViewElement : SKUIViewElement {
    long long  _giftType;
    NSString * _productBuyParams;
    long long  _productItemIdentifier;
}

@property (nonatomic, readonly) long long giftType;
@property (nonatomic, readonly) SKUIItem *productItem;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)giftType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)productItem;

@end
