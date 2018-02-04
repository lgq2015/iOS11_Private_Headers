/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICompressedImage : UIImage {
    UIColor * _borderColor;
    double  _borderWidth;
    double  _cornerRadius;
    long long  _cornerType;
}

@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) long long cornerType;

- (void).cxx_destruct;
- (id)borderColor;
- (double)borderWidth;
- (double)cornerRadius;
- (long long)cornerType;
- (id)description;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setCornerType:(long long)arg1;

@end
