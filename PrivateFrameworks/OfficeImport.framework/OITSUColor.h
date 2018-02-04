/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUColor : NSObject <NSCopying> {
    struct CGColor { } * mCGColor;
    unsigned long long  mColorRGBSpace;
}

@property (readonly) struct CGColor { }*CGColor;
@property (nonatomic, readonly) double alphaComponent;
@property (nonatomic, readonly) double blueComponent;
@property (nonatomic, readonly) unsigned long long colorRGBSpace;
@property (nonatomic, readonly) double greenComponent;
@property (nonatomic, readonly) double redComponent;

+ (id)blackColor;
+ (id)blueColor;
+ (id)brownColor;
+ (id)clearColor;
+ (id)colorWithBGR:(unsigned int)arg1;
+ (id)colorWithBGRValue:(long long)arg1;
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3;
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 alpha:(int)arg4;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithCalibratedHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCsColour:(const struct CsColour { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; }*)arg1;
+ (id)colorWithEshColor:(const struct EshColor { struct Data { int x_1_1_1; union Value { struct RGB { unsigned char x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct AdjustedColor { unsigned char x_4_3_1; unsigned char x_4_3_2; unsigned int x_4_3_3 : 4; unsigned int x_4_3_4 : 1; unsigned int x_4_3_5 : 1; unsigned int x_4_3_6 : 1; } x_2_2_4; } x_1_1_2; } x1; }*)arg1;
+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithRGBBytes:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3;
+ (id)colorWithRGBValue:(long long)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithSystemColorID:(int)arg1;
+ (id)colorWithUIColor:(id)arg1;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)cyanColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)lightGrayColor;
+ (id)magentaColor;
+ (id)orangeColor;
+ (id)purpleColor;
+ (id)randomColor;
+ (id)redColor;
+ (id)stringForColor:(id)arg1;
+ (id)stringForSystemColorID:(int)arg1;
+ (id)whiteColor;
+ (id)yellowColor;

- (struct CGColor { }*)CGColor;
- (id)UIColor;
- (double)alphaComponent;
- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (double)blueComponent;
- (double)brightnessComponent;
- (unsigned long long)colorRGBSpace;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)colorWithShadeValue:(double)arg1;
- (id)colorWithTintValue:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CsColour { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; })csColour;
- (void)dealloc;
- (struct EshColor { struct Data { int x_1_1_1; union Value { struct RGB { unsigned char x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct AdjustedColor { unsigned char x_4_3_1; unsigned char x_4_3_2; unsigned int x_4_3_3 : 4; unsigned int x_4_3_4 : 1; unsigned int x_4_3_5 : 1; unsigned int x_4_3_6 : 1; } x_2_2_4; } x_1_1_2; } x1; })eshColor;
- (void)getRGBAComponents:(double*)arg1;
- (void)getRGBBytes:(char *)arg1 green:(char *)arg2 blue:(char *)arg3;
- (id)grayscaleColor;
- (double)greenComponent;
- (unsigned long long)hash;
- (id)hexString;
- (double)hueComponent;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithCGColor:(struct CGColor { }*)arg1 colorSpace:(unsigned long long)arg2;
- (id)initWithHexString:(id)arg1;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5;
- (id)initWithUIColor:(id)arg1;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)invertedColor;
- (bool)isAlmostEqualToColor:(id)arg1;
- (bool)isBlack;
- (bool)isEqual:(id)arg1;
- (bool)isEqualWithTolerance:(id)arg1;
- (bool)isNearlyWhite;
- (bool)isOpaque;
- (double)luminance;
- (id)newBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (id)newSolidColoredBitmap:(struct CGSize { double x1; double x2; })arg1;
- (bool)p_isEqualToColor:(id)arg1 withTolerance:(double)arg2;
- (double)p_rgbComponentWithIndex:(unsigned char)arg1;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (double)redComponent;
- (double)saturationComponent;
- (void)set;
- (id)solidColoredPngImage;
- (unsigned int)toBGR;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })ttColor;
- (bool)wantsHighContrastBackgroundForDarkMode:(id)arg1;

@end
