/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlaybackEngineMiddleware : NSObject <MPCPlayerResponseBuilder, MPMiddleware> {
    NSArray * _invalidationObservers;
    MPCPlaybackEngine * _playbackEngine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *invalidationObservers;
@property (nonatomic, retain) MPCPlaybackEngine *playbackEngine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)controller:(id)arg1 chain:(id)arg2;
- (id)invalidationObservers;
- (id)operationsForPlayerRequest:(id)arg1;
- (id)operationsForRequest:(id)arg1;
- (id)playbackEngine;
- (bool)playerCommandEnabled:(bool)arg1 command:(unsigned int)arg2 chain:(id)arg3;
- (id)playerCommandOptionValue:(id)arg1 forKey:(id)arg2 command:(unsigned int)arg3 chain:(id)arg4;
- (bool)playerCommandSupported:(bool)arg1 command:(unsigned int)arg2 chain:(id)arg3;
- (long long)playerGlobalItemCount:(long long)arg1 chain:(id)arg2;
- (struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; })playerItemDuration:(struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; })arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (long long)playerItemEditingStyleFlags:(long long)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (long long)playerLastChangeDirection:(long long)arg1 chain:(id)arg2;
- (id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4;
- (unsigned long long)playerNumberOfItems:(unsigned long long)arg1 inSection:(unsigned long long)arg2 chain:(id)arg3;
- (unsigned long long)playerNumberOfSections:(unsigned long long)arg1 chain:(id)arg2;
- (long long)playerPlayingItemGlobalIndex:(long long)arg1 chain:(id)arg2;
- (id)playerPlayingItemIndexPath:(id)arg1 chain:(id)arg2;
- (long long)playerRepeatType:(long long)arg1 chain:(id)arg2;
- (long long)playerShuffleType:(long long)arg1 chain:(id)arg2;
- (long long)playerState:(long long)arg1 chain:(id)arg2;
- (long long)playerUpNextItemCount:(long long)arg1 chain:(id)arg2;
- (id)playerVideoView:(id)arg1 chain:(id)arg2;
- (void)setInvalidationObservers:(id)arg1;
- (void)setPlaybackEngine:(id)arg1;

@end
