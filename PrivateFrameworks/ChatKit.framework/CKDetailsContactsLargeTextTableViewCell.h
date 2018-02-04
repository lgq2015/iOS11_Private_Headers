/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDetailsContactsLargeTextTableViewCell : CKDetailsContactsTableViewCell {
    UIStackView * _buttonStackView;
    NSLayoutConstraint * _buttonsTopConstraint;
}

@property (nonatomic, retain) UIStackView *buttonStackView;
@property (nonatomic, retain) NSLayoutConstraint *buttonsTopConstraint;

+ (double)estimatedHeight;
+ (double)preferredHeight;

- (void).cxx_destruct;
- (void)_initConstraints;
- (void)_updateVisibleButtons;
- (id)buttonStackView;
- (id)buttonsTopConstraint;
- (void)configureWithViewModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setButtonStackView:(id)arg1;
- (void)setButtonsTopConstraint:(id)arg1;
- (void)setShowsLocation:(bool)arg1;

@end
