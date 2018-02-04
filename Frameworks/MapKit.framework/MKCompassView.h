/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCompassView : UIView {
    long long  _compassViewSize;
    long long  _compassViewStyle;
    UIImageView * _imageView;
}

@property (nonatomic, readonly) long long compassViewSize;
@property (nonatomic, readonly) long long compassViewStyle;
@property (nonatomic) double yaw;

+ (id)_parameterForSize:(long long)arg1;
+ (id)_parameterForStyle:(long long)arg1;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_updateLayerForCurrentSizeAndStyle;
- (long long)compassViewSize;
- (long long)compassViewStyle;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setCompassViewSize:(long long)arg1 style:(long long)arg2;
- (void)setYaw:(double)arg1;
- (void)updateLocale:(id)arg1;
- (double)yaw;

@end
