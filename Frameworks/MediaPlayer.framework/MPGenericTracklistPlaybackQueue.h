/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPGenericTracklistPlaybackQueue : MPRemotePlaybackQueue {
    NSString * _firstTrackIdentifier;
    long long  _repeatType;
    long long  _shuffleType;
    NSArray * _trackIdentifiers;
}

@property (nonatomic, readonly) NSString *firstTrackIdentifier;
@property (nonatomic, readonly) long long repeatType;
@property (nonatomic, readonly) long long shuffleType;
@property (nonatomic, readonly) NSArray *trackIdentifiers;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (void).cxx_destruct;
- (id)description;
- (id)firstTrackIdentifier;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1;
- (long long)repeatType;
- (long long)shuffleType;
- (id)trackIdentifiers;
- (bool)verifyWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (void)getPlaybackContextWithCompletion:(id /* block */)arg1;

@end
