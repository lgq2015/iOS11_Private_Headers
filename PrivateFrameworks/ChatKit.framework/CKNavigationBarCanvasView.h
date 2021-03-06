/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKNavigationBarCanvasView : UIView {
    bool  _enforceLeftItemViewsAlignmentToCenter;
    UIView * _leftItemView;
    double  _preferredHeight;
    UIView * _rightItemView;
    UIView * _titleView;
}

@property (nonatomic) bool enforceLeftItemViewsAlignmentToCenter;
@property (nonatomic, retain) UIView *leftItemView;
@property (nonatomic) double preferredHeight;
@property (nonatomic, retain) UIView *rightItemView;
@property (nonatomic, retain) UIView *titleView;

+ (double)maxHeight;
+ (double)minHeight;
+ (double)preferredLandscapeHeightForCompactWidth;
+ (double)preferredLandscapeHeightForRegularWidth;

- (void).cxx_destruct;
- (bool)_shouldUseTallHeight;
- (void)clearAllItemViews;
- (bool)enforceLeftItemViewsAlignmentToCenter;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 preferredHeight:(double)arg2;
- (void)layoutSubviews;
- (id)leftItemView;
- (double)preferredHeight;
- (id)rightItemView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setEnforceLeftItemViewsAlignmentToCenter:(bool)arg1;
- (void)setLeftItemView:(id)arg1;
- (void)setPreferredHeight:(double)arg1;
- (void)setRightItemView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleView;

@end
