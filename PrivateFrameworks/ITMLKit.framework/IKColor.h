/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKColor : NSObject <NSCopying> {
    UIColor * _color;
    long long  _colorType;
    NSArray * _gradientColors;
    long long  _gradientDirectionType;
    NSArray * _gradientPoints;
    long long  _gradientType;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) long long colorType;
@property (nonatomic, copy) NSArray *gradientColors;
@property (nonatomic) long long gradientDirectionType;
@property (nonatomic, readonly, copy) NSArray *gradientPoints;
@property (nonatomic) long long gradientType;

+ (id)colorMap;
+ (void)registerColorNameMap:(id)arg1;

- (void).cxx_destruct;
- (id)color;
- (long long)colorType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)gradientColors;
- (long long)gradientDirectionType;
- (id)gradientPoints;
- (long long)gradientType;
- (id)initWithColor:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setColorType:(long long)arg1;
- (void)setGradientColors:(id)arg1;
- (void)setGradientColors:(id)arg1 andPoints:(id)arg2;
- (void)setGradientDirectionType:(long long)arg1;
- (void)setGradientType:(long long)arg1;

@end
