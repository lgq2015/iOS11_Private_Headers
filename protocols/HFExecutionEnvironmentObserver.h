/* made by EzioChiu.
 */

@protocol HFExecutionEnvironmentObserver <NSObject>

@optional

- (void)executionEnvironmentDidBecomeActive:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentDidEnterBackground:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentRunningStateDidChange:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentWillEnterForeground:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentWillResignActive:(HFExecutionEnvironment *)arg1;

@end
