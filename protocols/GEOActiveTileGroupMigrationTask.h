/* made by EzioChiu.
 */

@protocol GEOActiveTileGroupMigrationTask <NSProgressReporting>

@required

- (void)cancel;
- (long long)estimatedWeight;
- (void)populateTileGroup:(GEOActiveTileGroup *)arg1;
- (void)removeOldData:(GEOActiveTileGroup *)arg1;
- (void)setTransaction:(id <NSObject>)arg1;
- (void)startWithCompletionHandler:(void *)arg1 callbackQueue:(void *)arg2; // needs 2 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, NSObject<OS_dispatch_queue> *
- (<NSObject> *)transaction;

@optional

- (NSDictionary *)stateWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;

@end
