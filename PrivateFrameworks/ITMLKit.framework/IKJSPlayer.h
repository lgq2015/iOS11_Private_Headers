/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSPlayer : IKJSEventListenerObject <IKJSPlayer> {
    NSMutableDictionary * _boundaryListeners;
    IKAppPlayerBridge * _bridge;
    bool  _holdingSelfReference;
    NSMutableDictionary * _observedMetadataKeys;
    long long  _playerState;
    IKJSPlaylist * _playlist;
    NSMutableDictionary * _timeListeners;
}

@property (nonatomic, readonly) IKAppPlayerBridge *bridge;
@property (nonatomic, readonly) IKJSMediaItem *currentMediaItem;
@property (nonatomic, readonly) NSDate *currentMediaItemDate;
@property (nonatomic, readonly) NSNumber *currentMediaItemDuration;
@property (nonatomic) bool interactiveOverlayDismissable;
@property (nonatomic, retain) IKDOMDocument *interactiveOverlayDocument;
@property (nonatomic, readonly) IKJSMediaItem *nextMediaItem;
@property (nonatomic, retain) IKDOMDocument *overlayDocument;
@property (nonatomic) double playbackRate;
@property (nonatomic, readonly) NSString *playbackState;
@property (nonatomic, retain) IKJSPlaylist *playlist;
@property (nonatomic, readonly) IKJSMediaItem *previousMediaItem;

- (void).cxx_destruct;
- (void)_addManagedReference;
- (void)_removeManagedReference;
- (void)addEventListener:(id)arg1 :(id)arg2 :(id)arg3;
- (id)bridge;
- (void)changeToMediaAtIndex:(unsigned long long)arg1;
- (id)currentMediaItem;
- (id)currentMediaItemDate;
- (id)currentMediaItemDuration;
- (void)currentMediaItemDurationDidChange:(double)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithAppContext:(id)arg1 bridge:(id)arg2;
- (bool)interactiveOverlayDismissable;
- (id)interactiveOverlayDocument;
- (void)mediaItemDidChange:(long long)arg1;
- (void)mediaItemWillChange:(long long)arg1;
- (void)next;
- (id)nextMediaItem;
- (id)overlayDocument;
- (void)pause;
- (void)play;
- (void)playbackDidStall:(double)arg1;
- (void)playbackError:(id)arg1 shouldStopDueToError:(bool)arg2;
- (double)playbackRate;
- (id)playbackState;
- (id)playlist;
- (void)present;
- (void)previous;
- (id)previousMediaItem;
- (void)removeEventListener:(id)arg1 :(id)arg2;
- (bool)requestSeekToTime:(double*)arg1 currentTime:(double)arg2;
- (void)seekToTime:(double)arg1;
- (void)setInteractiveOverlayDismissable:(bool)arg1;
- (void)setInteractiveOverlayDocument:(id)arg1;
- (void)setOverlayDocument:(id)arg1;
- (void)setPlaybackRate:(double)arg1;
- (void)setPlaylist:(id)arg1;
- (bool)shouldChangeToMediaAtIndex:(unsigned long long)arg1;
- (bool)shouldHandleStateEvent:(id)arg1;
- (long long)state;
- (void)stateDidChange:(id)arg1;
- (void)stateWillChange:(id)arg1;
- (void)stop;
- (void)timeBoundaryDidCross:(double)arg1;
- (void)timeIntervalElapsed:(double)arg1 time:(double)arg2;
- (void)timedMetadataDidChange:(id)arg1 value:(id)arg2;
- (void)transportBarVisibilityDidChange:(bool)arg1;

@end
