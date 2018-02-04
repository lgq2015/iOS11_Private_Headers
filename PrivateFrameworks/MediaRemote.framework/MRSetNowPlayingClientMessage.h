/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRSetNowPlayingClientMessage : MRProtocolMessage

@property (nonatomic, readonly) void*client;

- (void*)client;
- (id)initWithClient:(void*)arg1;
- (unsigned long long)type;

@end
