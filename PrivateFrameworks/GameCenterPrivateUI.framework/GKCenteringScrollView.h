/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKCenteringScrollView : UIScrollView {
    UIView * _contentView;
    UIView * _footerView;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIView *footerView;

- (void)centerContentViewIfDesirable;
- (id)contentView;
- (void)dealloc;
- (id)footerView;
- (void)layoutSubviews;
- (void)setContentView:(id)arg1;
- (void)setFooterView:(id)arg1;

@end
