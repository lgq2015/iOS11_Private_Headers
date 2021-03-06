/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicRadioRemoteControlContext : NSObject {
    MPAVItem * _currentlyPlayingItem;
    MPAVController * _player;
    NSString * _stationHash;
    long long  _trackID;
}

@property (nonatomic, readonly) MPAVItem *currentlyPlayingItem;
@property (nonatomic, readonly) MPAVController *player;
@property (nonatomic, readonly, copy) NSString *stationHash;
@property (nonatomic, readonly) long long trackID;

- (void).cxx_destruct;
- (id)currentlyPlayingItem;
- (id)init;
- (id)initWithPlayer:(id)arg1 mediaRemoteOptions:(id)arg2;
- (id)player;
- (id)stationHash;
- (long long)trackID;

@end
