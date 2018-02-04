/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISearchBar : UISearchBar {
    double  _intrinsicWidth;
}

@property (nonatomic) double intrinsicWidth;

- (id)init;
- (double)intrinsicWidth;
- (void)setIntrinsicWidth:(double)arg1;
- (void)setShowsCancelButton:(bool)arg1;
- (void)setShowsCancelButton:(bool)arg1 animated:(bool)arg2;
- (bool)showsCancelButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
