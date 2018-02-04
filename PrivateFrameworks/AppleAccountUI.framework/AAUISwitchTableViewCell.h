/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUISwitchTableViewCell : UITableViewCell {
    UISwitch * _control;
    <AAUISwitchTableViewCellDelegate> * _delegate;
}

@property (nonatomic, readonly) UISwitch *control;
@property (nonatomic) <AAUISwitchTableViewCellDelegate> *delegate;

- (void).cxx_destruct;
- (void)_controlValueChanged:(id)arg1;
- (void)_delegate_switchTableViewCellDidUpdateValue;
- (id)control;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
