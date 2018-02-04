/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKRecurrenceTypeEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate> {
    EKCalendarItem * _calendarItem;
    NSIndexPath * _checkedItem;
    EKUICustomRecurrenceViewController * _customRecurrenceViewController;
    <EKRecurrenceTypeEditItemViewControllerDelegate> * _delegate;
    EKRecurrenceRule * _recurrenceRule;
    long long  _repeatType;
    NSDate * _suggestedStartDate;
    NSString * _summaryString;
    UITableView * _table;
}

@property (retain) EKCalendarItem *calendarItem;
@property (retain) EKUICustomRecurrenceViewController *customRecurrenceViewController;
@property (readonly, copy) NSString *debugDescription;
@property <EKRecurrenceTypeEditItemViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) EKRecurrenceRule *recurrenceRule;
@property (nonatomic) long long repeatType;
@property (nonatomic, retain) NSDate *suggestedStartDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkItemAtIndexPath:(id)arg1;
- (id)_recurrenceCellForIndexPath:(id)arg1;
- (id)calendarItem;
- (id)customRecurrenceViewController;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleProvider:(id)arg2 calendarItem:(id)arg3;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)recurrenceRule;
- (long long)repeatType;
- (void)setCalendarItem:(id)arg1;
- (void)setCustomRecurrenceViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRecurrenceRule:(id)arg1;
- (void)setRecurrenceRuleFromRepeatType:(long long)arg1;
- (void)setRepeatType:(long long)arg1;
- (void)setSuggestedStartDate:(id)arg1;
- (id)suggestedStartDate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewDidLoad;

@end
