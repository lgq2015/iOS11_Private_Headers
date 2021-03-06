/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRPlaybackQueueRequestMessage : MRProtocolMessage

@property (nonatomic, readonly) void*playerPath;
@property (nonatomic, readonly) void*request;

- (id)initWithRequest:(void*)arg1 forPlayerPath:(void*)arg2;
- (void*)playerPath;
- (void*)request;
- (unsigned long long)type;

@end
