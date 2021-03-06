/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStackItemViewElement : SKUIItemViewElement

@property (nonatomic, readonly) NSArray *imageElements;
@property (nonatomic, readonly) SKUILabelViewElement *textElement;

- (id)imageElements;
- (long long)pageComponentType;
- (id)textElement;

@end
