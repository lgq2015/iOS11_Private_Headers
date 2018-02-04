/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIHeaderView : AAUIBuddyView {
    UILabel * _messageLabel;
    UIStackView * _stackView;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UILabel *messageLabel;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_updateLabelFonts;
- (void)_updateStackViewSpacing;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)messageLabel;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
