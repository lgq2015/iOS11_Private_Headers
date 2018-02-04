/* made by EzioChiu.
 */

@protocol IXClientDelegateProtocol <NSObject>

@required

- (oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(NSUUID *)arg1;
- (oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(NSUUID *)arg1;
- (oneway void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(NSUUID *)arg1;
- (oneway void)_client_coordinatorShouldPauseWithUUID:(NSUUID *)arg1;
- (oneway void)_client_coordinatorShouldPrioritizeWithUUID:(NSUUID *)arg1;
- (oneway void)_client_coordinatorShouldResumeWithUUID:(NSUUID *)arg1;
- (oneway void)_client_coordinatorWithUUID:(NSUUID *)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
- (oneway void)_client_coordinatorWithUUID:(NSUUID *)arg1 didCancelWithReason:(NSError *)arg2 client:(unsigned long long)arg3;
- (oneway void)_client_promiseDidCompleteSuccessfullyWithUUID:(NSUUID *)arg1;
- (oneway void)_client_promiseWithUUID:(NSUUID *)arg1 didCancelWithReason:(NSError *)arg2 client:(unsigned long long)arg3;

@end
