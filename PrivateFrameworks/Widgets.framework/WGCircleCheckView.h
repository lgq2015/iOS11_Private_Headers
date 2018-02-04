/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGCircleCheckView : UIView {
    WGCheckView * _checkView;
    UIImageView * _circleView;
}

@property (getter=_checkView, nonatomic, retain) WGCheckView *checkView;
@property (getter=isChecked, nonatomic) bool checked;
@property (getter=_circleView, nonatomic, retain) UIImageView *circleView;

- (void).cxx_destruct;
- (id)_checkView;
- (id)_circleView;
- (void)_configureCheckViewIfNecessary;
- (id)_configureCircleViewIfNecessary;
- (bool)_isFrozen;
- (void)_setChecked:(bool)arg1 completion:(id /* block */)arg2;
- (void)_setFrozen:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isChecked;
- (void)layoutSubviews;
- (void)setCheckView:(id)arg1;
- (void)setChecked:(bool)arg1;
- (void)setCircleView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
