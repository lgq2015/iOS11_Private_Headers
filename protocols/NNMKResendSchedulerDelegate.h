/* made by EzioChiu.
 */

@protocol NNMKResendSchedulerDelegate <NNMKDeviceRegistryHolder>

@required

- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestDequeueIDSIdentifierForResend:(NSString *)arg2;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestEnqueueIDSIdentifierForResend:(NSString *)arg2 date:(NSDate *)arg3 silent:(bool)arg4;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestEnqueueIDSIdentifiersForResend:(NSDictionary *)arg2;
- (unsigned long long)resendScheduler:(NNMKResendScheduler *)arg1 didRequestNewResendIntervalForPreviousResendInterval:(unsigned long long)arg2 errorCode:(long long)arg3;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestRetryFullSyncForMailboxes:(NSArray *)arg2;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestRetrySendingAccountWithId:(NSString *)arg2;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestRetrySendingComposeMessageProgress:(long long)arg2 messageId:(NSString *)arg3 resendInterval:(unsigned long long)arg4;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestRetrySendingContentForMessageId:(NSString *)arg2 highPriority:(bool)arg3;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestRetrySendingDeletionForAccountWithId:(NSString *)arg2 resendInterval:(unsigned long long)arg3;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestRetrySendingMessageDeletions:(NSDictionary *)arg2 deletionsMessageIds:(NSArray *)arg3 resendInterval:(unsigned long long)arg4;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestRetrySendingMessageWithIds:(NSArray *)arg2;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestToRetrySendMailboxSelectionWithResendInterval:(unsigned long long)arg2;

@end
