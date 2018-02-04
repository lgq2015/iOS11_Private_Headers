/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIBrowseItemCell : UICollectionViewCell {
    UIView * _borderView;
    UIImage * _decorationImage;
    UIImageView * _decorationImageView;
    bool  _hasBlueBackgroundWhenSelected;
    bool  _showTopBorder;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    UIView * _topBorderView;
}

@property (nonatomic, retain) UIImage *decorationImage;
@property (nonatomic) bool hasBlueBackgroundWhenSelected;
@property (nonatomic) bool showTopBorder;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (void)_reloadHighlightState;
- (id)decorationImage;
- (bool)hasBlueBackgroundWhenSelected;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDecorationImage:(id)arg1;
- (void)setHasBlueBackgroundWhenSelected:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShowTopBorder:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)showTopBorder;
- (id)subtitle;
- (id)title;

@end
