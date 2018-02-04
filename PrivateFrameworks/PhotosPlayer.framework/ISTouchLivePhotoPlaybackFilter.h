/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISTouchLivePhotoPlaybackFilter : ISLivePhotoPlaybackFilter {
    ISDisplayLink * __displayLink;
    long long  __playbackRequestID;
    NSDate * __playbackStartDate;
    bool  _touchActive;
}

@property (setter=_setDisplayLink:, nonatomic) ISDisplayLink *_displayLink;
@property (setter=_setPlaybackReaquestID:, nonatomic) long long _playbackRequestID;
@property (setter=_setPlaybackStartDate:, nonatomic, retain) NSDate *_playbackStartDate;
@property (getter=isTouchActive, nonatomic) bool touchActive;

- (void).cxx_destruct;
- (id)_displayLink;
- (void)_handleDisplayLink;
- (long long)_nextPlaybackRequestID;
- (long long)_playbackRequestID;
- (id)_playbackStartDate;
- (void)_setDisplayLink:(id)arg1;
- (void)_setPlaybackReaquestID:(long long)arg1;
- (void)_setPlaybackStartDate:(id)arg1;
- (void)didPerformChanges;
- (bool)isTouchActive;
- (void)reset;
- (void)setTouchActive:(bool)arg1;

@end
