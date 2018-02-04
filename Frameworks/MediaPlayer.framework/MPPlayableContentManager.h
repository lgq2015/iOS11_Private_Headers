/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlayableContentManager : NSObject {
    NSOperationQueue * _artworkUpdateQueue;
    bool  _coalescingUpdates;
    NSMutableSet * _contentItemIdentifiersSentToMediaRemote;
    MPPlayableContentManagerContext * _context;
    <MPPlayableContentDataSource> * _dataSource;
    <MPPlayableContentDelegate> * _delegate;
    AVExternalDevice * _externalDevice;
    NSMutableSet * _mutatedContentItems;
    NSArray * _nowPlayingIdentifiers;
    bool  _scheduledSupportedAPIsChange;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) MPPlayableContentManagerContext *context;
@property (nonatomic) <MPPlayableContentDataSource> *dataSource;
@property (nonatomic) <MPPlayableContentDelegate> *delegate;
@property (nonatomic, retain) NSArray *nowPlayingIdentifiers;

+ (bool)_deviceIsCarplayCapable;
+ (id)sharedContentManager;

- (void).cxx_destruct;
- (bool)_areContentLimitsEnforced;
- (void)_browsableContentEndpointChanged:(id)arg1;
- (void)_contentItemChangedNotification:(id)arg1;
- (bool)_contentItemWasSentToMediaRemote:(id)arg1;
- (void)_enqueueArtworkUpdate:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 withCompletion:(id /* block */)arg3;
- (void)_enqueueArtworkUpdate:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_handlePlaybackInitializationCompletedWithContext:(id)arg1 error:(id)arg2;
- (id)_init;
- (void)_limitedUIChanged:(id)arg1;
- (void)_markContentItemsAsSentToMediaRemote:(id)arg1;
- (bool)_musicListsLimited;
- (bool)_onQueueContentItemWasSentToMediaRemote:(id)arg1;
- (void)_pushContentItemsUpdate;
- (void)_scheduleUpdateSupportedAPIs;
- (void)_setupMediaRemoteEndpoint;
- (void)_setupNotifications;
- (void)_tearDownMediaRemoteEndpoint;
- (void)_tearDownNotifications;
- (void)_updateSupportedAPIs;
- (void)beginUpdates;
- (id)context;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)endUpdates;
- (id)init;
- (id)nowPlayingIdentifiers;
- (void)reloadData;
- (void)setContext:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNowPlayingIdentifiers:(id)arg1;

@end
