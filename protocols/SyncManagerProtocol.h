/* made by EzioChiu.
 */

@protocol SyncManagerProtocol <NSObject>

@required

- (void)deleteAllObjects;
- (void)deleteObjectWithUniqueId:(NSString *)arg1;
- (void)deleteObjectsWithLimits:(NSDictionary *)arg1;
- (void)deleteObjectsWithUniqueIds:(NSArray *)arg1;
- (NSArray *)fetchAllObjects;
- (CHRecentCall *)fetchObjectWithUniqueId:(NSString *)arg1;
- (NSArray *)fetchObjectsWithLimits:(NSDictionary *)arg1;
- (void)insert:(CHRecentCall *)arg1;
- (void)insertRecordsWithoutTransactions:(NSArray *)arg1;
- (void)insertWithoutTransaction:(CHRecentCall *)arg1;
- (void)resetTimers;
- (double)timerIncoming;
- (double)timerLifetime;
- (double)timerOutgoing;
- (void)updateAllObjects:(NSDictionary *)arg1;
- (void)updateObjects:(NSDictionary *)arg1;

@end
