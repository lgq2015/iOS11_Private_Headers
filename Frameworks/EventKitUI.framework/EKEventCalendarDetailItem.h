/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventCalendarDetailItem : EKEventDetailItem {
    EKCalendar * _calendar;
    UITableViewCell * _cell;
}

- (void).cxx_destruct;
- (bool)_calendarCanBeChanged;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (void)dealloc;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (bool)editItemViewControllerSave:(id)arg1;
- (bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (id)init;
- (void)reset;

@end
