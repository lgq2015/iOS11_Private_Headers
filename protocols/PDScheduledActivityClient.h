/* made by EzioChiu.
 */

@protocol PDScheduledActivityClient <NSObject>

@required

- (void)performScheduledActivityWithIdentifier:(NSString *)arg1 activityCriteria:(PDScheduledActivityCriteria *)arg2 activityContext:(id <NSCoding>)arg3;

@end
