/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISPlayerItem : ISObservable {
    bool  __loadingCancelled;
    ISAsset * _asset;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    void * _ivarQueueIdentifier;
    bool  _ivarQueue_aggressivelyCacheVideoFrames;
    NSError * _ivarQueue_error;
    struct { 
        bool videoPlayerItem; 
        bool status; 
        bool content; 
        bool minimumClientVersion; 
        bool playbackStyleIdentifier; 
    }  _ivarQueue_isValid;
    long long  _ivarQueue_loadingTarget;
    NSString * _ivarQueue_minimumClientVersion;
    ISPlayerContent * _ivarQueue_playerContent;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _ivarQueue_playerItemDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _ivarQueue_playerItemPhotoTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _ivarQueue_postPhotoTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _ivarQueue_prePhotoTime;
    bool  _ivarQueue_reversesMoreVideoFramesInMemory;
    long long  _ivarQueue_status;
    NSNumber * _ivarQueue_variationIdentifier;
    AVVideoComposition * _ivarQueue_videoComposition;
    AVPlayerItem * _ivarQueue_videoPlayerItem;
    long long  _ivarQueue_videoPlayerItemRequestID;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    NSObject<OS_dispatch_queue> * _workQueue;
    void * _workQueueIdentifier;
    AVAssetImageGenerator * _workQueue_imageGenerator;
    bool  _workQueue_isGeneratingOffsetImage;
}

@property (getter=_isLoadingCancelled, setter=_setLoadingCancelled:, nonatomic) bool _loadingCancelled;
@property (setter=_setMinimumClientVersion:, nonatomic, retain) NSString *_minimumClientVersion;
@property (setter=_setVariationIdentifier:, nonatomic, retain) NSNumber *_variationIdentifier;
@property (setter=_setVideoPlayerItemRequestID:, nonatomic) long long _videoPlayerItemRequestID;
@property (nonatomic) bool aggressivelyCacheVideoFrames;
@property (nonatomic, readonly) ISAsset *asset;
@property (setter=_setError:, nonatomic, retain) NSError *error;
@property (nonatomic) long long loadingTarget;
@property (setter=_setPlayerContent:, nonatomic, retain) ISPlayerContent *playerContent;
@property (nonatomic) bool reversesMoreVideoFramesInMemory;
@property (setter=_setStatus:, nonatomic) long long status;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;
@property (nonatomic, copy) AVVideoComposition *videoComposition;

+ (long long)currentClientVersion;
+ (id)playerItemWithAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (void)_assertOnIvarQueue;
- (void)_assertOnWorkQueue;
- (void)_cancelLoading;
- (void)_handleVideoPlayerItemLoadResultWithSuccess:(bool)arg1 playerItem:(id)arg2 prePhotoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 postPhotoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 videoDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5 error:(id)arg6;
- (void)_invalidateMinimumClientVersion;
- (void)_invalidatePlaybackStyleIdentifier;
- (void)_invalidatePlayerContent;
- (void)_invalidateStatus;
- (void)_invalidateVideoPlayerItem;
- (bool)_isLoadingCancelled;
- (bool)_isMinimumClientVersionValid;
- (bool)_isOnIvarQueue;
- (bool)_isOnWorkQueue;
- (bool)_isPlaybackStyleIdentifierValid;
- (bool)_isPlayerContentValid;
- (bool)_isStatusVaild;
- (bool)_isVideoPlayerItemValid;
- (id)_minimumClientVersion;
- (bool)_needsUpdate;
- (void)_performIvarRead:(id /* block */)arg1;
- (void)_performIvarWrite:(id /* block */)arg1;
- (void)_performWork:(id /* block */)arg1;
- (void)_performWork:(id /* block */)arg1 sync:(bool)arg2;
- (void)_reloadAllContent;
- (void)_setError:(id)arg1;
- (void)_setLoadingCancelled:(bool)arg1;
- (void)_setMinimumClientVersion:(id)arg1;
- (void)_setPlayerContent:(id)arg1;
- (void)_setStatus:(long long)arg1;
- (void)_setVariationIdentifier:(id)arg1;
- (void)_setVideoPlayerItem:(id)arg1 prePhotoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 postPhotoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 videoDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)_setVideoPlayerItemRequestID:(long long)arg1;
- (void)_updateIfNeeded;
- (void)_updateMinimumClientVersionIfNeeded;
- (void)_updatePlaybackStyleIdentifierIfNeeded;
- (void)_updatePlayerContentIfNeeded;
- (void)_updateStatusIfNeeded;
- (void)_updateVideoPlayerItemIfNeeded;
- (id)_variationIdentifier;
- (id)_videoPlayerItem;
- (long long)_videoPlayerItemRequestID;
- (bool)aggressivelyCacheVideoFrames;
- (id)asset;
- (void)cancelLoading;
- (void)dealloc;
- (void)didPerformChanges;
- (void)discardContentBelowLoadingTarget;
- (id)error;
- (id)init;
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;
- (long long)loadingTarget;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (id)playerContent;
- (void)resetAVObjects;
- (bool)reversesMoreVideoFramesInMemory;
- (void)setAggressivelyCacheVideoFrames:(bool)arg1;
- (void)setLoadingTarget:(long long)arg1;
- (void)setReversesMoreVideoFramesInMemory:(bool)arg1;
- (void)setVideoComposition:(id)arg1;
- (long long)status;
- (struct CGSize { double x1; double x2; })targetSize;
- (id)videoComposition;

@end
