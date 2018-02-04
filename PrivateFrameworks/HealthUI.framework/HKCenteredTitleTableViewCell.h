/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKCenteredTitleTableViewCell : UITableViewCell {
    NSLayoutConstraint * _contentViewBottomConstraint;
    UILabel * _subtitleLabel;
    NSLayoutConstraint * _subtitleLabelBaselineConstraint;
    NSString * _subtitleText;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleLabelBaselineConstraint;
    NSString * _titleText;
    NSLayoutConstraint * _topLayoutConstraint;
}

@property (nonatomic, copy) NSString *subtitleText;
@property (nonatomic, copy) NSString *titleText;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_setupUI;
- (double)_subtitleLabelBaselineToBottom;
- (id)_subtitleLabelFont;
- (double)_titleLabelBaselineToSubtitleBaseline;
- (id)_titleLabelFont;
- (double)_titleLabelTopToBaseline;
- (void)_updateForCurrentSizeCategory;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)subtitleText;
- (id)titleText;
- (void)traitCollectionDidChange:(id)arg1;

@end
