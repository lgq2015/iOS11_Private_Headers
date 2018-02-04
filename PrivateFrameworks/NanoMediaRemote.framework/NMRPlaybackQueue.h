/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRPlaybackQueue : NSObject {
    <NMRPlaybackQueueDelegate> * _delegate;
    NSDictionary * _nowPlayingInfo;
    struct { 
        long long location; 
        long long length; 
    }  _observedRange;
    bool  _observingMediaRemote;
    NMROrigin * _origin;
    NMRMediaRemoteUpdater * _playbackQueueUpdater;
    NSObject<OS_dispatch_queue> * _serialQueue;
    _NMRPlaybackQueue * _upNextPlaybackQueue;
}

@property (nonatomic) <NMRPlaybackQueueDelegate> *delegate;
@property (nonatomic, readonly) NSData *fullPlaybackQueueData;
@property (nonatomic) struct { long long x1; long long x2; } observedRange;
@property (nonatomic, retain) NMROrigin *origin;

- (void).cxx_destruct;
- (id)_contentItemIdentifiers;
- (id)_itemWithIdentifier:(id)arg1;
- (void*)_mediaRemotePlaybackQueueWithRange:(struct { long long x1; long long x2; })arg1 includeMetadata:(bool)arg2;
- (id)_metadataForItemWithIdentifier:(id)arg1;
- (bool)_needsMetadataForMediaRemoteItem:(void*)arg1;
- (bool)_needsUpdateForMediaRemoteQueue:(void*)arg1;
- (struct { long long x1; long long x2; })_rangeOfItemsNeedingMetadataForMediaRemoteQueue:(void*)arg1;
- (void)_refreshCurrentPlaybackQueueFromMediaRemoteWithCompletion:(id /* block */)arg1;
- (void)_updateMetadataWithMediaRemoteItems:(id)arg1;
- (void)_updateWithMediaRemoteQueue:(void*)arg1;
- (void)beginObservingMediaRemotePlaybackQueueForOrigin:(id)arg1;
- (void*)copyFullMediaRemotePlaybackQueueIncludingMetadata:(bool)arg1;
- (void*)copyMediaRemotePlaybackQueueWithRange:(struct { long long x1; long long x2; })arg1 includeMetadata:(bool)arg2;
- (void)dealloc;
- (id)delegate;
- (id)deltaPlaybackQueueDataFromPreviousData:(id)arg1 invalidatedMetadataIdentifiers:(id)arg2;
- (id)fullPlaybackQueueData;
- (id)init;
- (struct { long long x1; long long x2; })observedRange;
- (id)origin;
- (void)setDelegate:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setObservedRange:(struct { long long x1; long long x2; })arg1;
- (void)setOrigin:(id)arg1;
- (void)updateWithData:(id)arg1;

@end
