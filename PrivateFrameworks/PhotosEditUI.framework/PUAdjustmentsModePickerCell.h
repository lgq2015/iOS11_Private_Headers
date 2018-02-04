/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUAdjustmentsModePickerCell : UITableViewCell {
    UIButton * _accessoryButton;
    NSArray * _accessoryButtonConstraints;
    id /* block */  _buttonAction;
    long long  _buttonType;
    NSString * _currentDisplayValue;
    UILabel * _displayLabel;
    UILabel * _displayValueLabel;
    NSArray * _displayValueLabelConstraints;
    bool  _isSubMode;
    NSString * _localizedModeName;
    UIImage * _modeIcon;
    NSLayoutConstraint * _standardLeadingConstraint;
    NSLayoutConstraint * _subLeadingConstraint;
}

@property (nonatomic, copy) id /* block */ buttonAction;
@property (nonatomic) long long buttonType;
@property (nonatomic, copy) NSString *currentDisplayValue;
@property (nonatomic) bool isSubMode;
@property (nonatomic, copy) NSString *localizedModeName;
@property (nonatomic, retain) UIImage *modeIcon;

+ (void)configureModePickerCellLabel:(id)arg1;

- (void).cxx_destruct;
- (void)_handleAccessoryButton:(id)arg1;
- (void)_preferredContentSizeCategoryChanged;
- (void)_updateButton;
- (void)_updateDisplayLabel;
- (void)_updateDisplayValueLabel;
- (id /* block */)buttonAction;
- (long long)buttonType;
- (id)currentDisplayValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isSubMode;
- (id)localizedModeName;
- (id)modeIcon;
- (void)prepareForReuse;
- (void)setButtonAction:(id /* block */)arg1;
- (void)setButtonType:(long long)arg1;
- (void)setCurrentDisplayValue:(id)arg1;
- (void)setIsSubMode:(bool)arg1;
- (void)setLocalizedModeName:(id)arg1;
- (void)setModeIcon:(id)arg1;

@end
