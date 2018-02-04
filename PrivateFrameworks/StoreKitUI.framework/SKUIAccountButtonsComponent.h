/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIAccountButtonsComponent : SKUIPageComponent {
    SKUILink * _ecommerceLink;
    bool  _hidesTermsAndConditions;
}

@property (nonatomic, retain) SKUILink *ECommerceLink;
@property (nonatomic) bool hidesTermsAndConditions;
@property (nonatomic, readonly) SKUIAccountButtonsViewElement *viewElement;

- (void).cxx_destruct;
- (id)ECommerceLink;
- (long long)componentType;
- (bool)hidesTermsAndConditions;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)initWithViewElement:(id)arg1;
- (void)setECommerceLink:(id)arg1;
- (void)setHidesTermsAndConditions:(bool)arg1;

@end
