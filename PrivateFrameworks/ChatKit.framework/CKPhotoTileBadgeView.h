/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPhotoTileBadgeView : UIView {
    UIView * __backgroundView;
    UIImageView * __badgeImageView;
    UILabel * __textLabel;
    UIButton * _actionButton;
    bool  _enabled;
    bool  _selected;
}

@property (nonatomic, readonly) UIView *_backgroundView;
@property (nonatomic, readonly) UIImageView *_badgeImageView;
@property (nonatomic, readonly) UILabel *_textLabel;
@property (nonatomic, retain) UIButton *actionButton;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (getter=isSelected, nonatomic) bool selected;

+ (double)horizontalBadgeInset;
+ (double)verticalBadgeInset;

- (void).cxx_destruct;
- (id)_backgroundView;
- (id)_badgeImageView;
- (id)_textLabel;
- (void)_updateBadgeImage;
- (void)_updateBadgeText;
- (id)actionButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (bool)isSelected;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })maximumSize;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setActionButton:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
