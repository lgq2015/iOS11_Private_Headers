/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

@interface ICQUpgradeCompleteView : ICQPageView {
    UILayoutGuide * _aboveCheckLayoutGuide;
    NSArray * _activeConstraints;
    UILayoutGuide * _belowDoneLayoutGuide;
    UILayoutGuide * _betweenCheckDoneLayoutGuide;
    UIButton * _checkmarkButton;
    <ICQPageDelegate> * _delegate;
    UIButton * _doneButton;
    ICQLink * _doneLink;
    bool  _layoutGuideProblem;
    UILabel * _messageLabel;
    UILayoutGuide * _navigationBarLayoutGuide;
    UILabel * _titleLabel;
    _ICQUpgradeCompletePageSpecification * _upgradeCompletePageSpecification;
}

@property (nonatomic, readonly) UILayoutGuide *aboveCheckLayoutGuide;
@property (nonatomic, retain) NSArray *activeConstraints;
@property (nonatomic, readonly) UILayoutGuide *belowDoneLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *betweenCheckDoneLayoutGuide;
@property (nonatomic, retain) UIButton *checkmarkButton;
@property (nonatomic) <ICQPageDelegate> *delegate;
@property (nonatomic, retain) UIButton *doneButton;
@property (nonatomic, readonly) ICQLink *doneLink;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, readonly) UILayoutGuide *navigationBarLayoutGuide;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) _ICQUpgradeCompletePageSpecification *upgradeCompletePageSpecification;

- (void).cxx_destruct;
- (double)_superGetTopMargin;
- (id)aboveCheckLayoutGuide;
- (id)activeConstraints;
- (id)belowDoneLayoutGuide;
- (id)betweenCheckDoneLayoutGuide;
- (id)checkmarkButton;
- (id)delegate;
- (id)doneButton;
- (void)doneButtonTapped:(id)arg1;
- (id)doneLink;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)messageLabel;
- (id)navigationBarLayoutGuide;
- (void)setActiveConstraints:(id)arg1;
- (void)setCheckmarkButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUpgradeCompletePageSpecification:(id)arg1;
- (id)titleLabel;
- (void)updateConstraints;
- (id)upgradeCompletePageSpecification;
- (id)upgradeCompleteSpecification;

@end
