/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKLocatingChatItem : CKBalloonChatItem

@property (nonatomic, readonly, copy) NSString *locationText;

- (Class)balloonViewClass;
- (void)configureBalloonView:(id)arg1;
- (id)description;
- (bool)failed;
- (bool)isFromMe;
- (id)locationText;
- (id)message;
- (id)sender;
- (id)time;

@end
