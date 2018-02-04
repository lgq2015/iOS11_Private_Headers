/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingClientRequests : NSObject <MRNowPlayingClientState> {
    void * _client;
    NSArray * _nowPlayingClients;
    NSMutableArray * _playerClients;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) void*client;
@property (nonatomic, readonly) NSArray *nowPlayingClients;

- (void*)client;
- (void)dealloc;
- (id)initWithClient:(void*)arg1;
- (id)nowPlayingClients;
- (id)nowPlayingPlayerClientRequestsForPlayerPath:(void*)arg1;
- (id)playerClients;
- (void)removePlayer:(void*)arg1;
- (void)restoreNowPlayingClientState;

@end
