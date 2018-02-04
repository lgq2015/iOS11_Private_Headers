/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSwitchCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol> {
    <HUSwitchCellDelegate> * _delegate;
    bool  _disabled;
    HFItem * _item;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUSwitchCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (getter=isOn, nonatomic) bool on;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_switch;
- (void)_toggleOn:(id)arg1;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDisabled;
- (bool)isOn;
- (id)item;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setItem:(id)arg1;
- (void)setOn:(bool)arg1;
- (void)setOn:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)updateUIWithAnimation:(bool)arg1;

@end
