/* made by EzioChiu.
 */

@protocol MTTaskScheduler <NSObject>

@required

- (void)scheduleTask:(MTTask *)arg1;
- (void)scheduleTaskGroup:(MTTaskGroup *)arg1;

@end
