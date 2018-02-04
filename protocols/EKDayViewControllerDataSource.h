/* made by EzioChiu.
 */

@protocol EKDayViewControllerDataSource <NSObject>

@required

- (CalendarOccurrencesCollection *)dayViewController:(EKDayViewController *)arg1 eventsForStartDate:(NSDate *)arg2 endDate:(NSDate *)arg3;
- (bool)dayViewControllerShouldRespondToApplicationDidBecomeActiveStateChange:(EKDayViewController *)arg1;

@end
