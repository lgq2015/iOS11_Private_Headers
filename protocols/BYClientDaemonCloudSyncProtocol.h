/* made by EzioChiu.
 */

@protocol BYClientDaemonCloudSyncProtocol <NSObject>

@required

- (void)syncCompletedWithErrors:(NSArray *)arg1;
- (void)syncProgress:(double)arg1;

@end
