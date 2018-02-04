/* made by EzioChiu.
 */

@protocol ASTConnectionManagerDelegate <NSObject>

@required

- (void)connectionManager:(ASTConnectionManager *)arg1 pausedSendingResultForTest:(NSNumber *)arg2 reason:(long long)arg3;
- (void)connectionManager:(ASTConnectionManager *)arg1 resumedSendingResultForTest:(NSNumber *)arg2;
- (void)connectionManagerRequestPaused:(ASTConnectionManager *)arg1;
- (void)connectionManagerRequestResumed:(ASTConnectionManager *)arg1;

@end
