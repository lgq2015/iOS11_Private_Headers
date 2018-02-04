/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKIDUpdatedAndEditCell : UITableViewCell {
    UILabel * _dateLabel;
    NSDate * _dateSaved;
    <HKIDUpdatedAndEditCellDelegate> * _delegate;
    UIButton * _editButton;
    NSLayoutConstraint * _editFirstBaseLineAnchorConstraint;
    bool  _hideEditButton;
    NSArray * _largeTextLayoutConstraints;
    NSArray * _regularLayoutConstraints;
    UIStackView * _stackView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *dateLabel;
@property (nonatomic, retain) NSDate *dateSaved;
@property (nonatomic) <HKIDUpdatedAndEditCellDelegate> *delegate;
@property (getter=isEditButtonDisabled, nonatomic) bool disableEditButton;
@property (nonatomic, retain) UIButton *editButton;
@property (getter=isEditButtonHidden, nonatomic) bool hideEditButton;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSString *titleText;

- (void).cxx_destruct;
- (void)_editButtonTapped:(id)arg1;
- (void)_updateFont;
- (void)_updateForCurrentSizeCategory;
- (id)dateLabel;
- (id)dateSaved;
- (id)delegate;
- (id)editButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isEditButtonDisabled;
- (bool)isEditButtonHidden;
- (void)setDateLabel:(id)arg1;
- (void)setDateSaved:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableEditButton:(bool)arg1;
- (void)setEditButton:(id)arg1;
- (void)setHideEditButton:(bool)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleLabel;
- (id)titleText;
- (void)traitCollectionDidChange:(id)arg1;

@end