/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCLeaseManager : NSObject {
    MPCPlaybackEngine * _playbackEngine;
}

@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;

- (void).cxx_destruct;
- (void)_playerDidPauseForPlaybackPreventionNotification:(id)arg1;
- (void)dealloc;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)playbackEngine;

@end
