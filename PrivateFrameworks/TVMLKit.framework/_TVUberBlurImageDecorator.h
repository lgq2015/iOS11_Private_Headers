/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVUberBlurImageDecorator : TVImageDecorator {
    unsigned long long  _blurStyle;
    unsigned long long  _blurType;
    UIColor * _gradientColor;
}

@property (nonatomic) unsigned long long blurStyle;
@property (nonatomic) unsigned long long blurType;
@property (nonatomic, retain) UIColor *gradientColor;

- (void).cxx_destruct;
- (unsigned long long)blurStyle;
- (unsigned long long)blurType;
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize { double x1; double x2; })arg2 croppedToFit:(bool)arg3;
- (id)decoratorIdentifier;
- (id)gradientColor;
- (void)setBlurStyle:(unsigned long long)arg1;
- (void)setBlurType:(unsigned long long)arg1;
- (void)setGradientColor:(id)arg1;

@end
