/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKEmergencyCardTableItem : NSObject {
    _HKMedicalIDData * _data;
    bool  _isInEditMode;
    UIViewController * _owningViewController;
    bool  _shouldShowHints;
}

@property (nonatomic, retain) _HKMedicalIDData *data;
@property (nonatomic, readonly) bool isInEditMode;
@property (nonatomic) UIViewController *owningViewController;
@property (nonatomic) bool shouldShowHints;

- (void).cxx_destruct;
- (id)_dequeueNoValueCellInTableView:(id)arg1 withTitle:(id)arg2;
- (bool)canEditRowAtIndex:(long long)arg1;
- (void)commitEditing;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (id)data;
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (bool)hasPresentableData;
- (id)init;
- (id)initInEditMode:(bool)arg1;
- (bool)isInEditMode;
- (void)localeDidChange:(id)arg1;
- (long long)numberOfRows;
- (id)owningViewController;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (void)setData:(id)arg1;
- (void)setOwningViewController:(id)arg1;
- (void)setShouldShowHints:(bool)arg1;
- (bool)shouldHighlightRowAtIndex:(long long)arg1;
- (bool)shouldShowHints;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (void)timeZoneDidChange:(id)arg1;
- (id)title;
- (id)titleForFooter;
- (id)titleForHeader;

@end
