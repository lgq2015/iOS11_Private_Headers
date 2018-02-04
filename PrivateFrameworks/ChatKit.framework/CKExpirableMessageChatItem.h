/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKExpirableMessageChatItem : CKAttachmentMessagePartChatItem

@property (nonatomic, readonly) bool isPlayed;
@property (nonatomic, readonly) bool isSaved;

- (bool)canCopy;
- (bool)canExport;
- (bool)canForward;
- (bool)canSendAsTextMessage;
- (bool)isPlayed;
- (bool)isSaved;

@end
