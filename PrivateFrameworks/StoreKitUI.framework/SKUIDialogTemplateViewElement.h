/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIDialogTemplateViewElement : SKUIViewElement {
    long long  _dialogType;
}

@property (nonatomic, readonly) NSArray *buttons;
@property (nonatomic, readonly) long long dialogType;
@property (nonatomic, readonly) SKUIImageViewElement *image;
@property (nonatomic, readonly) SKUILabelViewElement *message;
@property (nonatomic, readonly) SKUILabelViewElement *title;

- (id)applyUpdatesWithElement:(id)arg1;
- (id)buttons;
- (long long)dialogType;
- (id)image;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)message;
- (id)title;

@end
