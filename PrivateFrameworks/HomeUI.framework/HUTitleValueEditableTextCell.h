/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUTitleValueEditableTextCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol> {
    long long  _compressionResistancePolicy;
    bool  _disabled;
    bool  _hideTitle;
    HFItem * _item;
    NSLayoutConstraint * _labelsSpacingConstraint;
    NSLayoutConstraint * _minimumHeightConstraint;
    UIFont * _titleFont;
    UILabel * _titleLabel;
    NSArray * _titleLabelConstraints;
    NSString * _titleText;
    UITextField * _valueTextField;
    NSArray * _valueTextFieldConstraints;
}

@property (nonatomic) long long compressionResistancePolicy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideTitle;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) NSLayoutConstraint *labelsSpacingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *minimumHeightConstraint;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, retain) NSArray *titleLabelConstraints;
@property (nonatomic, retain) NSString *titleText;
@property (nonatomic, readonly) UITextField *valueTextField;
@property (nonatomic, retain) NSArray *valueTextFieldConstraints;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_addTitleLabel;
- (void)_addValueTextField;
- (void)_updateCompressionResistance;
- (void)_updateTitle;
- (long long)compressionResistancePolicy;
- (bool)hideTitle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDisabled;
- (id)item;
- (id)labelsSpacingConstraint;
- (id)minimumHeightConstraint;
- (void)prepareForReuse;
- (void)setCompressionResistancePolicy:(long long)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setHideTitle:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setItem:(id)arg1;
- (void)setLabelsSpacingConstraint:(id)arg1;
- (void)setMinimumHeightConstraint:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setTitleFont:(id)arg1;
- (void)setTitleLabelConstraints:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setValueTextFieldConstraints:(id)arg1;
- (id)titleFont;
- (id)titleLabel;
- (id)titleLabelConstraints;
- (id)titleText;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;
- (id)valueTextField;
- (id)valueTextFieldConstraints;

@end
