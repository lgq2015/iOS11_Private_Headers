/* made by EzioChiu.
 */

@protocol CKConversationListCell <NSObject>

@required

+ (double)cellHeight;
+ (NSString *)identifierForConversation:(CKConversation *)arg1;

- (void)updateContentsForConversation:(CKConversation *)arg1;

@end
