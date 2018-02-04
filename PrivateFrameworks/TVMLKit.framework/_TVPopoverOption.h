/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVPopoverOption : NSObject {
    IKViewElement * _cardElement;
    UIColor * _highlightColor;
    IKImageElement * _imageElement;
    IKViewElement * _optionElement;
    IKTextElement * _titleElement;
    unsigned long long  _type;
}

@property (nonatomic, readonly) IKViewElement *cardElement;
@property (nonatomic, readonly) UIColor *highlightColor;
@property (nonatomic, readonly) IKImageElement *imageElement;
@property (nonatomic, readonly) TVImageProxy *imageProxy;
@property (nonatomic, readonly) IKViewElement *optionElement;
@property (nonatomic, readonly) IKTextElement *titleElement;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)_init;
- (void)_populateWithElement:(id)arg1;
- (id)cardElement;
- (id)highlightColor;
- (id)imageElement;
- (id)imageProxy;
- (id)init;
- (id)initWithViewElement:(id)arg1;
- (id)optionElement;
- (id)titleElement;
- (unsigned long long)type;

@end
