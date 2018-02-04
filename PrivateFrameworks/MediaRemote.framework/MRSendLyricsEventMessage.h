/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRSendLyricsEventMessage : MRProtocolMessage

@property (nonatomic, readonly) void*event;

- (void*)event;
- (id)initWithEvent:(void*)arg1;
- (unsigned long long)type;

@end
