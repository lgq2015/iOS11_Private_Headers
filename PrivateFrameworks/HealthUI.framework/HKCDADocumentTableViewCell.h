/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKCDADocumentTableViewCell : UITableViewCell {
    NSArray * _cellLabels;
    HKAdjustableTapTargetButton * _checkboxButton;
    <HKCDADocumentTableViewCellDelegate> * _delegate;
    _HKDocumentImageView * _documentImageView;
    UIStackView * _imageLabelStack;
    bool  _showsCheckbox;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) HKAdjustableTapTargetButton *checkboxButton;
@property (getter=isChecked, nonatomic) bool checked;
@property (nonatomic, retain) <HKCDADocumentTableViewCellDelegate> *delegate;
@property (nonatomic) bool showsCheckbox;

- (void).cxx_destruct;
- (id)_createDocumentCellLabelWithTag:(long long)arg1 fontSizePts:(double)arg2 whiteLevel:(double)arg3 flexibleHeight:(bool)arg4;
- (void)_selectedCheckbox:(id)arg1;
- (void)_setDocumentLabelWithTag:(long long)arg1 text:(id)arg2 view:(id)arg3;
- (void)_setupCellStructure;
- (void)_updateForCurrentSizeCategory;
- (id)checkboxButton;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isChecked;
- (void)layoutSubviews;
- (void)setCellValuesForDocumentSample:(id)arg1;
- (void)setCheckboxButton:(id)arg1;
- (void)setChecked:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowsCheckbox:(bool)arg1;
- (bool)showsCheckbox;
- (void)traitCollectionDidChange:(id)arg1;

@end