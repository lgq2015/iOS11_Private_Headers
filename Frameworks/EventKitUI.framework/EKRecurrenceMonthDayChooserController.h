/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKRecurrenceMonthDayChooserController : EKRecurrenceGridChooserController {
    NSMutableSet * _daysOfTheMonthSet;
    bool  _prohibitsMultipleDaysInMonthlyRecurrence;
}

@property (nonatomic) bool prohibitsMultipleDaysInMonthlyRecurrence;

- (void).cxx_destruct;
- (id)cellLabels;
- (id)daysOfTheMonth;
- (long long)frequency;
- (long long)gridViewType;
- (id)initWithDate:(id)arg1;
- (void)prepareForDisplay;
- (bool)prohibitsMultipleDaysInMonthlyRecurrence;
- (void)refreshCells;
- (void)selectCell:(id)arg1 atIndex:(long long)arg2;
- (void)setDaysOfTheMonth:(id)arg1;
- (void)setProhibitsMultipleDaysInMonthlyRecurrence:(bool)arg1;
- (void)updateFromRecurrenceRule:(id)arg1;
- (void)updateRecurrenceRuleBuilder:(id)arg1;

@end
