/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIShelfViewElement : SKUIViewElement {
    long long  _numberOfRows;
    id /* block */  _shelfItemViewElementValidator;
    NSString * _slideshowTitle;
}

@property (nonatomic, readonly) long long numberOfRows;
@property (nonatomic, copy) id /* block */ shelfItemViewElementValidator;
@property (nonatomic, readonly) NSString *slideshowTitle;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)enumerateChildrenUsingBlock:(id /* block */)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)numberOfRows;
- (long long)pageComponentType;
- (void)setShelfItemViewElementValidator:(id /* block */)arg1;
- (id /* block */)shelfItemViewElementValidator;
- (id)slideshowTitle;

@end
