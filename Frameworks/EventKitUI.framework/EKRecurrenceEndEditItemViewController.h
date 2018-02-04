/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKRecurrenceEndEditItemViewController : EKEditItemViewController <EKCellShortener, UITableViewDataSource, UITableViewDelegate> {
    NSDate * _bestInitialDate;
    PreferencesValueCell * _dateCell;
    UIDatePicker * _datePicker;
    UITableViewCell * _datePickerCell;
    NSDate * _minimumEndDate;
    NSDate * _preNeverEndDate;
    NSDate * _repeatEndDate;
    int  _shorteningStatus;
    UITableView * _table;
    unsigned int  _updatingPicker;
}

@property (nonatomic, copy) NSDate *bestInitialDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *repeatEndDate;
@property (readonly) Class superclass;

+ (id)_neverLocalizedString;

- (void).cxx_destruct;
- (id)_cellForRow:(long long)arg1;
- (id)_endDateStringForCurrentShorteningStatus;
- (void)_localeChanged;
- (id)_stringForEndDate;
- (void)_updateSelectionForCell:(id)arg1 atRow:(long long)arg2;
- (void)applyMinimumEndDateToPicker;
- (id)bestInitialDate;
- (void)datePickerChanged:(id)arg1;
- (void)dealloc;
- (bool)fitsPopoverWhenKeyboardActive;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)repeatEndDate;
- (void)setBestInitialDate:(id)arg1;
- (void)setMinimumEndDate:(id)arg1;
- (void)setRepeatEndDate:(id)arg1;
- (void)shortenCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updatePicker;
- (void)viewDidLoad;

@end
