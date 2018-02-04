/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelRadioPlaybackContext : MPPlaybackContext {
    MPCModelRadioContentReference * _nowPlayingContentReference;
    MPCPlaybackRequestEnvironment * _playbackRequestEnvironment;
    MPCModelRadioContentReference * _seedContentReference;
    NSString * _stationHash;
    long long  _stationID;
    NSString * _stationName;
    NSString * _stationStringID;
    NSURL * _stationURL;
}

@property (nonatomic, copy) MPCModelRadioContentReference *nowPlayingContentReference;
@property (nonatomic, copy) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (nonatomic, readonly) MPAVItem *prefixItem;
@property (nonatomic, copy) MPCModelRadioContentReference *seedContentReference;
@property (nonatomic, copy) NSString *stationHash;
@property (nonatomic) long long stationID;
@property (nonatomic, copy) NSString *stationName;
@property (nonatomic, copy) NSString *stationStringID;
@property (nonatomic, copy) NSURL *stationURL;

+ (Class)queueFeederClass;

- (void).cxx_destruct;
- (id)descriptionComponents;
- (id)init;
- (id)nowPlayingContentReference;
- (id)playbackRequestEnvironment;
- (id)prefixItem;
- (id)seedContentReference;
- (void)setNowPlayingContentReference:(id)arg1;
- (void)setPlaybackRequestEnvironment:(id)arg1;
- (void)setSeedContentReference:(id)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (void)setStationName:(id)arg1;
- (void)setStationStringID:(id)arg1;
- (void)setStationURL:(id)arg1;
- (id)stationHash;
- (long long)stationID;
- (id)stationName;
- (id)stationStringID;
- (id)stationURL;

@end
