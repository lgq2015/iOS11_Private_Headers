/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMMessageAcknowledgmentChatItem : IMAssociatedMessageChatItem {
    long long  _messageAcknowledgmentType;
}

@property (nonatomic, readonly) long long messageAcknowledgmentType;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (id)_initWithItem:(id)arg1 sender:(id)arg2 messageAcknowledgmentType:(long long)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)messageAcknowledgmentType;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
