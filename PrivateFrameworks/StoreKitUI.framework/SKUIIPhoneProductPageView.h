/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIIPhoneProductPageView : UIView {
    double  _bannerOffset;
    UIView * _bannerView;
    UIView * _view;
}

@property (nonatomic) double bannerOffset;
@property (nonatomic, retain) UIView *bannerView;
@property (nonatomic, retain) UIView *view;

- (void).cxx_destruct;
- (void)animateYPosition:(double)arg1;
- (double)bannerOffset;
- (id)bannerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBannerOffset:(double)arg1;
- (void)setBannerView:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;

@end
