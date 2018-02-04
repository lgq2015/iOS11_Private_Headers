/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICrossFadingTabBar : UIView {
    SKUIScrollingTabBarBackgroundView * _backgroundView;
    NSArray * _tabBarButtons;
}

@property (nonatomic, readonly) SKUIScrollingTabBarBackgroundView *backgroundView;
@property (nonatomic, copy) NSArray *tabBarButtons;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setTabBarButtons:(id)arg1;
- (id)tabBarButtons;
- (void)traitCollectionDidChange:(id)arg1;

@end
