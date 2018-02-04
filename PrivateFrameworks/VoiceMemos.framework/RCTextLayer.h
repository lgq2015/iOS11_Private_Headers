/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCTextLayer : CALayer {
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedSize;
    unsigned long long  _cachedSizeHash;
    UIFont * _font;
    long long  _preferredAlignment;
    NSString * _text;
    long long  _textAlignment;
    UIColor * _textColor;
}

@property (nonatomic, retain) UIFont *font;
@property (nonatomic) long long preferredAlignment;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;

- (void).cxx_destruct;
- (id)_attributes;
- (struct CGSize { double x1; double x2; })_displaySize;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)font;
- (id)init;
- (long long)preferredAlignment;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPreferredAlignment:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)sizeToFit;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectWithAlignment:(long long)arg1 inLayoutBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
