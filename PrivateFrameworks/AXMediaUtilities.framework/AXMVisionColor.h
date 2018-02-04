/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMVisionColor : NSObject <NSSecureCoding> {
    unsigned char  _blue;
    unsigned char  _brightness;
    unsigned char  _green;
    unsigned char  _hue;
    unsigned char  _red;
    unsigned char  _saturation;
}

@property (nonatomic, readonly) double blueFloat;
@property (nonatomic, readonly) double brightnessFloat;
@property (nonatomic, readonly) double greenFloat;
@property (nonatomic, readonly) double hueFloat;
@property (nonatomic, readonly) double redFloat;
@property (nonatomic, readonly) double saturationFloat;

+ (id)colorWithHue:(unsigned char)arg1 saturation:(unsigned char)arg2 brightness:(unsigned char)arg3;
+ (id)colorWithHueDegrees:(double)arg1 saturation:(double)arg2 brightness:(double)arg3;
+ (id)colorWithRed:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3;
+ (bool)supportsSecureCoding;

- (void)_getHue:(char *)arg1 saturation:(char *)arg2 brightness:(char *)arg3;
- (void)_getRed:(char *)arg1 green:(char *)arg2 blue:(char *)arg3;
- (double)blueFloat;
- (double)brightnessFloat;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)euclidianDistanceHS:(id)arg1;
- (double)euclidianDistanceHSV:(id)arg1;
- (double)greenFloat;
- (unsigned long long)hash;
- (double)hueFloat;
- (double)hueRadians;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAXMVisionColor:(id)arg1;
- (double)redFloat;
- (double)saturationFloat;

@end
