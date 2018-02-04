/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKToolbar : UINavigationBar {
    double  _leftToolbarItemsInset;
    double  _leftToolbarItemsMaximumWidth;
    UINavigationItem * _navigationItem;
    TSKToolbarTitleView * _navigationTitleView;
    double  _rightToolbarItemsInset;
    double  _rightToolbarItemsMaximumWidth;
    bool  _shadowEnabled;
    CALayer * _shadowLayer;
}

@property (nonatomic) double leftToolbarItemsInset;
@property (nonatomic) double leftToolbarItemsMaximumWidth;
@property (nonatomic, retain) TSKToolbarTitleView *navigationTitleView;
@property (nonatomic) double rightToolbarItemsInset;
@property (nonatomic) double rightToolbarItemsMaximumWidth;
@property (nonatomic) bool shadowEnabled;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIColor *titleColor;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)itemWithTag:(long long)arg1;
- (void)layoutSubviews;
- (double)leftToolbarItemsInset;
- (double)leftToolbarItemsMaximumWidth;
- (id)navigationTitleView;
- (double)rightToolbarItemsInset;
- (double)rightToolbarItemsMaximumWidth;
- (void)setItems:(id)arg1 animated:(bool)arg2 height:(double)arg3 isLeft:(bool)arg4;
- (void)setLeftItems:(id)arg1 title:(id)arg2 rightItems:(id)arg3 duration:(double)arg4;
- (void)setLeftToolbarItemsInset:(double)arg1;
- (void)setLeftToolbarItemsMaximumWidth:(double)arg1;
- (void)setNavigationTitleView:(id)arg1;
- (void)setRightToolbarItemsInset:(double)arg1;
- (void)setRightToolbarItemsMaximumWidth:(double)arg1;
- (void)setShadowEnabled:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (bool)shadowEnabled;
- (id)title;
- (id)titleColor;

@end
