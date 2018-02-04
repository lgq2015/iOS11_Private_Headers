/* made by EzioChiu.
 */

@protocol MTSyncService <NSObject>

@required

- (void)performSyncOperation:(id <MTSyncOperation>)arg1;
- (void)setup;
- (void)start;
- (void)stop;
- (void)teardown;

@end
