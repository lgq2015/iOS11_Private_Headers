/* made by EzioChiu.
 */

@protocol DAMessageSendConsumer <DAActionConsumer>

@optional

- (void)messageDidSendWithContext:(id)arg1;
- (void)messageDidSendWithContext:(id)arg1 sentBytesCount:(unsigned long long)arg2 receivedBytesCount:(unsigned long long)arg3;

@end
