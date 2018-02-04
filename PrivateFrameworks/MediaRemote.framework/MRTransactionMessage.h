/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTransactionMessage : MRProtocolMessage {
    NSMutableArray * _packets;
}

@property (nonatomic, readonly) unsigned long long name;
@property (nonatomic, readonly) NSArray *packets;
@property (nonatomic, readonly) void*playerPath;

- (void)dealloc;
- (id)initWithName:(unsigned long long)arg1 packets:(id)arg2 playerPath:(void*)arg3;
- (id)initWithPlaybackQueue:(void*)arg1 forPlayerPath:(void*)arg2;
- (unsigned long long)name;
- (id)packets;
- (void*)playerPath;
- (unsigned long long)type;

@end
