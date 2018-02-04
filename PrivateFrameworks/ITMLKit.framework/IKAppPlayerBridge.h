/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppPlayerBridge : NSObject <IKDOMFeature> {
    IKAppContext * _appContext;
    IKAppDocument * _appInteractiveOverlayDocument;
    IKAppDocument * _appOverlayDocument;
    <IKAppPlayer> * _appPlayer;
    <IKAppPlaylist> * _appPlaylist;
    NSString * _featureName;
    bool  _interactiveOverlayDismissable;
    IKJSPlayer * _jsPlayer;
    NSArray * _observedMetadataKeys;
    NSMutableSet * _observedTimeBoundaries;
    NSMutableSet * _observedTimeIntervals;
    long long  _state;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (nonatomic) <IKAppPlayer> *appPlayer;
@property (nonatomic, readonly) IKAppMediaItemBridge *currentMediaItem;
@property (nonatomic, readonly) NSDate *currentMediaItemDate;
@property (nonatomic, readonly) NSNumber *currentMediaItemDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool interactiveOverlayDismissable;
@property (nonatomic, retain) IKDOMDocument *interactiveOverlayDocument;
@property (nonatomic) IKJSPlayer *jsPlayer;
@property (nonatomic, readonly) IKAppMediaItemBridge *nextMediaItem;
@property (nonatomic, retain) IKDOMDocument *overlayDocument;
@property (nonatomic, retain) IKAppPlaylistBridge *playlist;
@property (nonatomic, readonly) IKAppMediaItemBridge *previousMediaItem;
@property (nonatomic, readonly) double scanRate;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

+ (id)makeFeatureJSObjectForFeature:(id)arg1;

- (void).cxx_destruct;
- (void)addTimeIntervalObserver:(unsigned long long)arg1;
- (id)appContext;
- (id)appPlayer;
- (void)changeToMediaAtIndex:(unsigned long long)arg1 reason:(id)arg2;
- (void)cleanup;
- (id)currentMediaItem;
- (id)currentMediaItemDate;
- (id)currentMediaItemDuration;
- (void)currentMediaItemDurationDidChange:(double)arg1;
- (id)featureName;
- (id)initWithAppContext:(id)arg1 jsPlayer:(id)arg2;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
- (bool)interactiveOverlayDismissable;
- (id)interactiveOverlayDocument;
- (id)jsPlayer;
- (void)mediaItemDidChange:(long long)arg1;
- (void)mediaItemDidChange:(id)arg1 userInitiated:(bool)arg2;
- (void)mediaItemWillChange:(long long)arg1;
- (void)mediaItemWillChange:(id)arg1 userInitiated:(bool)arg2;
- (void)next;
- (id)nextMediaItem;
- (void)observeTimeBoundary:(double)arg1;
- (id)overlayDocument;
- (void)pause;
- (void)play;
- (void)playbackDidStall:(double)arg1;
- (void)playbackError:(id)arg1 shouldStopDueToError:(bool)arg2;
- (id)playlist;
- (void)present;
- (void)previous;
- (id)previousMediaItem;
- (void)removeTimeIntervalObserver:(unsigned long long)arg1;
- (bool)requestSeekToTime:(double*)arg1 currentTime:(double)arg2;
- (void)requestSeekToTime:(double)arg1 currentTime:(double)arg2 completion:(id /* block */)arg3;
- (void)scan:(double)arg1;
- (double)scanRate;
- (void)setAppPlayer:(id)arg1;
- (void)setElapsedTime:(double)arg1 precise:(bool)arg2;
- (void)setInteractiveOverlayDismissable:(bool)arg1;
- (void)setInteractiveOverlayDocument:(id)arg1;
- (void)setJsPlayer:(id)arg1;
- (void)setOverlayDocument:(id)arg1;
- (void)setPlaylist:(id)arg1;
- (void)setTimedMetadataKeysToObserve:(id)arg1;
- (void)shouldChangeToMediaAtIndex:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (bool)shouldHandleStateEvent:(id)arg1;
- (void)shouldHandleStateEvent:(id)arg1 completion:(id /* block */)arg2;
- (long long)state;
- (void)stateDidChange:(id)arg1;
- (void)stateWillChange:(id)arg1;
- (void)stop;
- (void)stopObservingTimeBoundary:(double)arg1;
- (void)timeBoundaryDidCross:(double)arg1;
- (void)timeIntervalElapsed:(double)arg1 time:(double)arg2;
- (void)timedMetadataDidChange:(id)arg1 value:(id)arg2;
- (void)transportBarVisibilityDidChange:(bool)arg1;

@end
