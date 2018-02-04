/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAlarmTableViewCell : UITableViewCell {
    MTUIAlarmView * _alarmView;
    <HUAlarmTableViewCellDelegate> * _delegate;
    bool  _enabled;
    UISwitch * _enabledSwitch;
}

@property (nonatomic, retain) MTUIAlarmView *alarmView;
@property (nonatomic) <HUAlarmTableViewCellDelegate> *delegate;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) UISwitch *enabledSwitch;

- (void).cxx_destruct;
- (void)_alarmActiveChanged:(id)arg1;
- (id)alarmView;
- (id)delegate;
- (bool)enabled;
- (id)enabledSwitch;
- (id)init;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)internalSetBackgroundColor:(id)arg1;
- (void)refreshUI:(id)arg1 animated:(bool)arg2;
- (void)setAlarmActiveDelegate:(id)arg1;
- (void)setAlarmView:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setEnabledSwitch:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setupAsTemplateLayoutCell:(bool)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;

@end
