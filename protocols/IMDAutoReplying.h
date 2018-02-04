/* made by EzioChiu.
 */

@protocol IMDAutoReplying <NSObject>

@required

- (void)processMessages:(NSArray *)arg1 inChat:(IMDChat *)arg2;
- (<IMDAutoReplyDelegate> *)replyDelegate;
- (void)setReplyDelegate:(id <IMDAutoReplyDelegate>)arg1;

@end
