/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioPlaybackTimeoutInfo : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary * _playbackTimeoutIdentifierToTimeoutNumber;
}

- (void).cxx_destruct;
- (id)_playbackTimeoutIdentifierForBase:(id)arg1 playbackType:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dockedPlaybackTimeoutForPlaybackType:(long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (double)lockedPlaybackTimeoutForPlaybackType:(long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)pausedPlaybackTimeoutForPlaybackType:(long long)arg1;
- (double)unlockedPlaybackTimeoutForPlaybackType:(long long)arg1;

@end
