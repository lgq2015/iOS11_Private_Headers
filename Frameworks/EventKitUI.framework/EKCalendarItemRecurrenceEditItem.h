/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarItemRecurrenceEditItem : EKCalendarItemEditItem <EKCellShortener, EKRecurrenceTypeEditItemViewControllerDelegate> {
    NSString * _customRepeatDescription;
    unsigned long long  _disclosedSubitem;
    NSDate * _originalRepeatEnd;
    long long  _originalRepeatType;
    EKRecurrenceTypeEditItemViewController * _recurrenceTypeVC;
    NSDate * _repeatEnd;
    PreferencesValueCell * _repeatEndDateCell;
    EKCalendarItemRecurrenceEndCell * _repeatEndPickerCell;
    long long  _repeatType;
    int  _shorteningStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_neverLocalizedString;

- (void).cxx_destruct;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (void)_neverRepeatButtonTapped:(id)arg1;
- (id)_recurrenceTypeVC;
- (void)_repeatEndDateChanged:(id)arg1;
- (id)_repeatEndPickerCell;
- (void)_updateRepeatEndDateCell;
- (bool)_validateRecurrenceType:(id)arg1;
- (bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (bool)editItemViewControllerSave:(id)arg1;
- (bool)editItemViewControllerSave:(id)arg1 notify:(bool)arg2;
- (bool)forceRefreshStartAndEndDatesOnSave;
- (id)init;
- (id)minRecurrenceEndDate;
- (unsigned long long)numberOfSubitems;
- (id)recurrenceDate;
- (id)recurrenceTimeZone;
- (void)refreshFromCalendarItemAndStore;
- (long long)repeatTypeForRecurrenceRule:(id)arg1;
- (void)reset;
- (bool)saveAndDismissWithForce:(bool)arg1;
- (void)shortenCell:(id)arg1;
- (id)stringForDate:(id)arg1;

@end
