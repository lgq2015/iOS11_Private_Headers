/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXPlaybackCoordinator : NSObject <SXMediaSelectionControllerDataSource, SXMediaSelectionControllerDelegate, SXVideoMetadataProviding, SXVolumeObserver> {
    id /* block */  _cancelHandler;
    struct CGSize { 
        double width; 
        double height; 
    }  _dimensions;
    bool  _hasMediaSelectionOptions;
    NSObject<SXVideoPlaybackHost> * _host;
    bool  _initiatedPlayback;
    bool  _muted;
    NSHashTable * _observers;
    bool  _playbackRequested;
    SXAVPlayer * _player;
    SXKeyValueObserver * _playerItemTracksObserver;
    SXKeyValueObserver * _readyForDisplayObserver;
    bool  _requiresReadyToDisplay;
    unsigned long long  _state;
    <SXVideoProviding> * _video;
}

@property (nonatomic, copy) id /* block */ cancelHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } dimensions;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double framerate;
@property (nonatomic) bool hasMediaSelectionOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSObject<SXVideoPlaybackHost> *host;
@property (nonatomic) bool initiatedPlayback;
@property (nonatomic, readonly) NSArray *loadedTimeRanges;
@property (nonatomic) bool muted;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, readonly) bool playbackBufferFull;
@property (nonatomic, readonly) bool playbackLikelyToKeepUp;
@property (nonatomic) bool playbackRequested;
@property (nonatomic, retain) SXAVPlayer *player;
@property (nonatomic, retain) SXKeyValueObserver *playerItemTracksObserver;
@property (nonatomic, retain) SXKeyValueObserver *readyForDisplayObserver;
@property (nonatomic) bool requiresReadyToDisplay;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double time;
@property (nonatomic, readonly) double timePlayed;
@property (nonatomic, readonly) <SXVideoProviding> *video;
@property (nonatomic, readonly) double volume;

- (void).cxx_destruct;
- (void)addPlaybackObserver:(id)arg1;
- (void)addPlayerItemTracksObserver;
- (void)addReadyForDisplayObserver;
- (id /* block */)cancelHandler;
- (struct CGSize { double x1; double x2; })dimensions;
- (double)duration;
- (double)framerate;
- (bool)hasMediaSelectionOptions;
- (id)host;
- (id)initWithVideo:(id)arg1;
- (bool)initiatedPlayback;
- (void)loadAvailableMediaCharacteristics;
- (void)loadVideoDimensions;
- (void)loadVideoIfNeeded;
- (id)loadedTimeRanges;
- (void)loadedTimeRangesChanged;
- (id)mediaSelectionController:(id)arg1 mediaSelectionGroupWithCharacteristic:(id)arg2;
- (id)mediaSelectionController:(id)arg1 preferredMediaSelectionOptionInMediaSelectionGroup:(id)arg2;
- (void)mediaSelectionController:(id)arg1 selectMediaSelectionOption:(id)arg2 inMediaSelectionGroup:(id)arg3;
- (id)mediaSelectionController:(id)arg1 selectedMediaSelectionOptionInMediaSelectionGroup:(id)arg2;
- (void)muteStateChanged:(bool)arg1;
- (bool)muted;
- (id)observers;
- (void)pause;
- (void)play;
- (void)playIfReady;
- (bool)playbackBufferFull;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackInitiated;
- (bool)playbackLikelyToKeepUp;
- (void)playbackPaused;
- (bool)playbackRequested;
- (void)playbackResumed;
- (void)playbackStarted;
- (id)player;
- (id)playerItemTracksObserver;
- (void)prefetch;
- (id)readyForDisplayObserver;
- (void)removePlaybackObserver:(id)arg1;
- (void)removePlayerItemTracksObserver;
- (void)removeReadyForDisplayObserver;
- (bool)requiresReadyToDisplay;
- (void)seekToTime:(double)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setHasMediaSelectionOptions:(bool)arg1;
- (void)setHost:(id)arg1;
- (void)setInitiatedPlayback:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)setPlaybackRequested:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerItemTracksObserver:(id)arg1;
- (void)setReadyForDisplayObserver:(id)arg1;
- (void)setRequiresReadyToDisplay:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setupPlayerWithURL:(id)arg1;
- (unsigned long long)state;
- (void)stateChanged;
- (double)time;
- (void)timeElapsed:(double)arg1 duration:(double)arg2;
- (double)timePlayed;
- (void)updateMediaSelectionOptionAvailability;
- (id)video;
- (double)volume;

@end
