/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUDayOfWeekPickerCell : UITableViewCell <HUCellProtocol> {
    UIStackView * _buttonStackView;
    NSArray * _buttons;
    <HUDayOfWeekPickerCellDelegate> * _delegate;
    HFItem * _item;
    NSSet * _selectedRecurrences;
}

@property (nonatomic, retain) UIStackView *buttonStackView;
@property (nonatomic, retain) NSArray *buttons;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUDayOfWeekPickerCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic, retain) NSSet *selectedRecurrences;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_toggleWeekdayButton:(id)arg1;
- (void)_updateSelectedDays;
- (id)buttonStackView;
- (id)buttons;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)item;
- (id)selectedRecurrences;
- (void)setButtonStackView:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setSelectedRecurrences:(id)arg1;
- (void)tintColorDidChange;
- (void)updateUIWithAnimation:(bool)arg1;

@end
