/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMedicalIDEditorCell : UITableViewCell <UITextFieldDelegate> {
    <HKMedicalIDEditorCellEditDelegate> * _editDelegate;
    HKCaretOptionalTextField * _inputTextField;
    UILabel * _labelLabel;
    double  _minimumLabelWidth;
    UIStackView * _stackView;
    UIView * _verticalSeparatorView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <HKMedicalIDEditorCellEditDelegate> *editDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKCaretOptionalTextField *inputTextField;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) UILabel *labelLabel;
@property (nonatomic) double minimumLabelWidth;
@property (nonatomic, retain) UIStackView *stackView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *verticalSeparatorView;

+ (bool)showsLabelAndValue;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (void)beginEditing;
- (void)commitEditing;
- (id)editDelegate;
- (id)formattedValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)inputTextField;
- (id)label;
- (id)labelLabel;
- (double)minimumLabelWidth;
- (void)setEditDelegate:(id)arg1;
- (void)setInputTextField:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelLabel:(id)arg1;
- (void)setMinimumLabelWidth:(double)arg1;
- (void)setStackView:(id)arg1;
- (void)setVerticalSeparatorView:(id)arg1;
- (void)setupStackView;
- (void)setupSubviews;
- (id)stackView;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (void)updateValueLabel;
- (void)valueDidChange;
- (id)verticalSeparatorView;

@end
