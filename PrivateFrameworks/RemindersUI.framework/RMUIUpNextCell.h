/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemindersUI.framework/RemindersUI
 */

@interface RMUIUpNextCell : UIView {
    UIImageView * _circleImageView;
    UIView * _contentView;
    RMUIUpNextLabel * _locationLabel;
    UIVisualEffectView * _primaryVibrantView;
    RMUIUpNextRowSeparator * _rowSeparator;
    UIVisualEffectView * _secondaryVibrantView;
    UIVisualEffectView * _tertiaryVibrantView;
    RMUIUpNextLabel * _timeLabel;
    RMUIUpNextLabel * _titleLabel;
}

@property (nonatomic, readonly) UIView *contentView;

- (void).cxx_destruct;
- (id)contentView;
- (id)initWithReminder:(id)arg1 showRowSeparator:(bool)arg2;
- (double)leftMarginForTimeViewWidth:(double)arg1;
- (id)priorityImageForLevel:(long long)arg1 withColor:(id)arg2;
- (double)rightMarginForTimeViewWidth:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setupConstraints;
- (double)timeViewWidth;
- (id)titleStringForReminder:(id)arg1;
- (void)updateMaxLayoutWidth;

@end
