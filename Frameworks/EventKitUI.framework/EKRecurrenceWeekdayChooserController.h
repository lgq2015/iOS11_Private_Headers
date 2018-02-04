/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKRecurrenceWeekdayChooserController : EKRecurrenceChooserController {
    NSMutableArray * _cells;
    NSArray * _daysOfTheWeek;
    NSMutableArray * _selectedRows;
}

@property (nonatomic, retain) NSMutableArray *cells;
@property (nonatomic, retain) NSArray *daysOfTheWeek;

- (void).cxx_destruct;
- (int)_dayMask;
- (void)_setCell:(id)arg1 selected:(bool)arg2;
- (id)cellForRow:(long long)arg1;
- (id)cells;
- (id)daysOfTheWeek;
- (long long)frequency;
- (double)heightForRow:(long long)arg1;
- (id)initWithDate:(id)arg1;
- (long long)numberOfRows;
- (void)rowTapped:(long long)arg1;
- (void)setCells:(id)arg1;
- (void)setDaysOfTheWeek:(id)arg1;
- (void)updateFromRecurrenceRule:(id)arg1;
- (void)updateRecurrenceRuleBuilder:(id)arg1;

@end
