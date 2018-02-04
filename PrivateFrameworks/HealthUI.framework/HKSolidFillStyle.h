/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSolidFillStyle : HKFillStyle {
    UIColor * _color;
}

@property (nonatomic, copy) UIColor *color;

- (void).cxx_destruct;
- (void)_renderInContext:(struct CGContext { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setColor:(id)arg1;

@end
