/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAudioMessageChatItem : CKExpirableMessageChatItem

@property (nonatomic, readonly) CKAudioMediaObject *mediaObject;

- (unsigned long long)balloonCorners;
- (Class)balloonViewClass;
- (Class)cellClass;

@end
