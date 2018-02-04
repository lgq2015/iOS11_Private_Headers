/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPLocalMediaQueryRemotePlaybackQueue : MPRemotePlaybackQueue {
    MPMediaItem * _firstItem;
    MPMediaQuery * _mediaQuery;
    long long  _repeatType;
    long long  _shuffleType;
}

@property (nonatomic, readonly) MPMediaItem *firstItem;
@property (nonatomic, readonly) MPMediaQuery *mediaQuery;
@property (nonatomic, readonly) long long repeatType;
@property (nonatomic, readonly) long long shuffleType;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (void).cxx_destruct;
- (id)description;
- (id)firstItem;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1;
- (id)mediaQuery;
- (id)playbackItemMetadataForMediaItem:(id)arg1;
- (long long)repeatType;
- (long long)shuffleType;
- (bool)verifyWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (void)getPlaybackContextWithCompletion:(id /* block */)arg1;

@end
