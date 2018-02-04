/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVColor : NSObject <NSCopying> {
    IKColor * _ikColor;
}

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) long long colorType;
@property (nonatomic, readonly) NSArray *gradientColors;
@property (nonatomic, readonly) NSArray *gradientPoints;
@property (nonatomic, readonly) IKColor *ikColor;

- (void).cxx_destruct;
- (id)color;
- (long long)colorType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)gradientColors;
- (id)gradientPoints;
- (id)ikColor;
- (id)initWithColor:(id)arg1;

@end
