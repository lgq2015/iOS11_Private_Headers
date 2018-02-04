/* made by EzioChiu.
 */

@protocol _HKActiveWorkoutClient <NSObject>

@required

- (void)clientRemote_receivedWorkoutEvent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: _HKWorkoutEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)clientRemote_serverFailedWithError:(NSError *)arg1;
- (void)clientRemote_serverPausedWithDate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)clientRemote_serverStoppedWithDate:(NSDate *)arg1;
- (void)clientRemote_updateElevationChange:(NSNumber *)arg1;
- (void)clientRemote_updateMetrics:(NSDictionary *)arg1;
- (void)clientRemote_updateTotalsWithQuantities:(NSDictionary *)arg1 resumeData:(NSDictionary *)arg2 UUIDs:(NSArray *)arg3;

@optional

- (void)clientRemote_updateLocationSeriesSample:(HKLocationSeriesSample *)arg1;
- (void)clientRemote_updateWorkoutRoute:(HKWorkoutRoute *)arg1;

@end
