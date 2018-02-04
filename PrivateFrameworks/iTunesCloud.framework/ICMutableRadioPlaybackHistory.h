/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMutableRadioPlaybackHistory : ICRadioPlaybackHistory

@property (nonatomic, copy) ICRadioPlaybackHistoryItem *currentTrack;
@property (nonatomic) long long numberOfSkips;
@property (nonatomic, copy) NSArray *tracks;

- (void)_checkCurrentTrackIsPresent;
- (void)_updateTracksUsingBlock:(id /* block */)arg1;
- (void)addTrack:(id)arg1;
- (void)addTracks:(id)arg1;
- (void)removeExpiredTracks;
- (void)removeTracksAtIndexes:(id)arg1;
- (void)replaceTrackAtIndex:(long long)arg1 withTrack:(id)arg2;
- (void)setCurrentTrack:(id)arg1;
- (void)setNumberOfSkips:(long long)arg1;
- (void)setTracks:(id)arg1;

@end
