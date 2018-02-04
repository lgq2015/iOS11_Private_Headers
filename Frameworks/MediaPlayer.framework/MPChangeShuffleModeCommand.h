/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPChangeShuffleModeCommand : MPRemoteCommand {
    long long  _currentShuffleType;
    NSArray * _supportedShuffleTypes;
}

@property (nonatomic) long long currentShuffleType;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (long long)currentShuffleType;
- (id)newCommandEventWithType:(long long)arg1;
- (id)newCommandEventWithType:(long long)arg1 preservesShuffleMode:(bool)arg2;
- (void)setCurrentShuffleType:(long long)arg1;
- (void)setSupportedShuffleTypes:(id)arg1;

@end
