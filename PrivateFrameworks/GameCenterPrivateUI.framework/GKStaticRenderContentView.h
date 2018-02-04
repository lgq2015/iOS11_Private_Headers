/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKStaticRenderContentView : UIView {
    UIView * _contentView;
}

@property (nonatomic, retain) UIView *contentView;

- (id)contentView;
- (void)dealloc;
- (id)description;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)prepareToReuseSubviewsOfView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setNeedsLayout;

@end
