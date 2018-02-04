/* made by EzioChiu.
 */

@protocol ECMessage <NSCopying, NSObject>

@required

- (bool)answered;
- (NSArray *)cc;
- (long long)conversationID;
- (bool)conversationMuted;
- (bool)conversationVIP;
- (NSDate *)dateReceived;
- (bool)flagged;
- (NSArray *)from;
- (bool)junk;
- (NSArray *)listUnsubscribe;
- (<ECMailbox> *)mailbox;
- (<ECMimePart> *)messageBody;
- (NSString *)persistentID;
- (NSString *)remoteID;
- (bool)senderVIP;
- (NSString *)subject;
- (NSArray *)to;

@end
