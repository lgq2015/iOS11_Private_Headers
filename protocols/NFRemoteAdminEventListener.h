/* made by EzioChiu.
 */

@protocol NFRemoteAdminEventListener <NSObject>

@optional

- (void)didReceiveFatalCommunicationError;
- (void)readerModeCardIngestionStatus:(unsigned long long)arg1;
- (void)readerModeCardSessionToken:(NSString *)arg1;
- (void)remoteAdminCleanupProgress:(double)arg1;

@end
