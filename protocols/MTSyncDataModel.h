/* made by EzioChiu.
 */

@protocol MTSyncDataModel <NSObject>

@required

- (NSArray *)changes;
- (NSArray *)everything;
- (void)handleIncomingAdd:(id <SYChange>)arg1;
- (void)handleIncomingDelete:(id <SYChange>)arg1;
- (void)handleIncomingReset;
- (void)handleIncomingUpdate:(id <SYChange>)arg1;
- (void)handleSentChanges:(NSArray *)arg1;
- (long long)supportedDataClasses;

@end
