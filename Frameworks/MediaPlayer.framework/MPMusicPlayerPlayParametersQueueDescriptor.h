/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerPlayParametersQueueDescriptor : MPMusicPlayerQueueDescriptor {
    NSArray * _playParametersQueue;
    MPMusicPlayerPlayParameters * _startItemPlayParameters;
}

@property (nonatomic, copy) NSArray *playParametersQueue;
@property (nonatomic, retain) MPMusicPlayerPlayParameters *startItemPlayParameters;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlayParametersQueue:(id)arg1;
- (id)playParametersQueue;
- (void)setEndTime:(double)arg1 forItemWithPlayParameters:(id)arg2;
- (void)setPlayParametersQueue:(id)arg1;
- (void)setStartItemPlayParameters:(id)arg1;
- (void)setStartTime:(double)arg1 forItemWithPlayParameters:(id)arg2;
- (id)startItemPlayParameters;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)playbackContext;

@end
