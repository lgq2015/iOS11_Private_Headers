/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPreviewControlViewElement : SKUIViewElement {
    BOOL  _enabled;
    long long  _itemIdentifier;
    NSString * _mediaURLString;
}

@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly) NSString *mediaURLString;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isEnabled;
- (long long)itemIdentifier;
- (id)mediaURLString;

@end
