/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITextLayoutRequest : NSObject <SKUILayoutRequest> {
    NSAttributedString * _attributedText;
    double  _fontSize;
    long long  _fontWeight;
    long long  _numberOfLines;
    NSString * _text;
    unsigned char  _textAlignment;
    double  _width;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double fontSize;
@property (nonatomic) long long fontWeight;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class layoutClass;
@property (nonatomic) long long numberOfLines;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) unsigned char textAlignment;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (id)attributedText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)fontSize;
- (long long)fontWeight;
- (id)init;
- (Class)layoutClass;
- (long long)numberOfLines;
- (void)setAttributedText:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)setFontWeight:(long long)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(unsigned char)arg1;
- (void)setWidth:(double)arg1;
- (id)text;
- (unsigned char)textAlignment;
- (double)width;

@end
