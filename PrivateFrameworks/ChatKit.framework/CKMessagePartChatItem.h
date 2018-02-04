/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessagePartChatItem : CKBalloonChatItem {
    NSArray * _visibleAssociatedMessageChatItems;
}

@property (nonatomic, readonly) bool canSendMessageAcknowledgment;
@property (nonatomic, readonly) BOOL color;
@property (nonatomic, readonly) UIItemProvider *dragItemProvider;
@property (nonatomic, readonly) bool hasMessageAcknowledgment;
@property (nonatomic, readonly) bool hasStickers;
@property (nonatomic, readonly) IMMessage *message;
@property (nonatomic, readonly, copy) NSArray *messageAcknowledgments;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } messagePartRange;
@property (nonatomic, readonly, copy) NSArray *pasteboardItems;
@property (nonatomic, readonly) NSArray *visibleAssociatedMessageChatItems;

- (void).cxx_destruct;
- (bool)_isSURFRelatedMessage;
- (id)aggregateAcknowledgmentChatItem;
- (bool)canAttachStickers;
- (bool)canCopy;
- (bool)canForward;
- (bool)canSendAsTextMessage;
- (bool)canSendMessageAcknowledgment;
- (BOOL)color;
- (id)composition;
- (void)configureBalloonView:(id)arg1;
- (id)description;
- (id)dragItemProvider;
- (bool)failed;
- (bool)hasMessageAcknowledgment;
- (bool)hasStickers;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (bool)isFromMe;
- (id)message;
- (id)messageAcknowledgments;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })messagePartRange;
- (id)pasteboardItems;
- (long long)selectedType;
- (id)sender;
- (bool)shouldShowVotingView;
- (bool)stickersSnapToPoint;
- (id)time;
- (id)visibleAssociatedMessageChatItems;
- (id)votingCounts;

@end
