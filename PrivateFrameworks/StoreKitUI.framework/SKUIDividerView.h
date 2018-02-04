/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIDividerView : UIView {
    long long  _dividerOrientation;
    double  _dividerSize;
}

@property (nonatomic, retain) UIColor *dividerColor;
@property (nonatomic) long long dividerOrientation;
@property (nonatomic) double dividerSize;

- (id)dividerColor;
- (long long)dividerOrientation;
- (double)dividerSize;
- (void)setBackgroundColor:(id)arg1;
- (void)setDividerColor:(id)arg1;
- (void)setDividerOrientation:(long long)arg1;
- (void)setDividerSize:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
