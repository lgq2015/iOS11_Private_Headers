/* made by EzioChiu.
 */

@protocol HKActivityStatisticsQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverActivityMoveStatistics:(NSArray *)arg1 exerciseStatistics:(NSArray *)arg2 standHoursInfo:(NSArray *)arg3 workouts:(NSArray *)arg4 query:(NSUUID *)arg5;

@end
