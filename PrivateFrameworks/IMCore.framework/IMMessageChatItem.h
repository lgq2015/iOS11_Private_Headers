/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMMessageChatItem : IMTranscriptChatItem <IMMessageChatItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool failed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFromMe;
@property (nonatomic, readonly) IMMessage *message;
@property (nonatomic, readonly) IMHandle *sender;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *time;

- (bool)failed;
- (bool)isFromMe;
- (id)message;
- (id)sender;
- (id)time;

@end
