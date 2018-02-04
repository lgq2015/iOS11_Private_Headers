/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCPlayerSeekCommand : _MPCPlayerItemCommand <MPCPlayerSeekCommand> {
    NSArray * _preferredBackwardJumpIntervals;
    NSArray * _preferredForwardJumpIntervals;
    bool  _prefersNegativeBackwardSkipIntervals;
    bool  _supportsBeginFastForward;
    bool  _supportsBeginRewind;
    bool  _supportsEndFastForward;
    bool  _supportsEndRewind;
    bool  _supportsSeekToPlaybackPosition;
    bool  _supportsSkipBackward;
    bool  _supportsSkipForward;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *preferredBackwardJumpIntervals;
@property (nonatomic, copy) NSArray *preferredForwardJumpIntervals;
@property (nonatomic) bool prefersNegativeBackwardSkipIntervals;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsBeginFastForward;
@property (nonatomic) bool supportsBeginRewind;
@property (nonatomic) bool supportsEndFastForward;
@property (nonatomic) bool supportsEndRewind;
@property (nonatomic) bool supportsSeekToPlaybackPosition;
@property (nonatomic) bool supportsSkipBackward;
@property (nonatomic) bool supportsSkipForward;

- (void).cxx_destruct;
- (id)_seekCommandWithMediaRemoteCommand:(unsigned int)arg1 options:(id)arg2;
- (id)beginSeekWithDirection:(long long)arg1;
- (id)changePositionToElapsedInterval:(double)arg1;
- (id)endSeek;
- (id)jumpByInterval:(double)arg1;
- (id)preferredBackwardJumpIntervals;
- (id)preferredForwardJumpIntervals;
- (bool)prefersNegativeBackwardSkipIntervals;
- (void)setPreferredBackwardJumpIntervals:(id)arg1;
- (void)setPreferredForwardJumpIntervals:(id)arg1;
- (void)setPrefersNegativeBackwardSkipIntervals:(bool)arg1;
- (void)setSupportsBeginFastForward:(bool)arg1;
- (void)setSupportsBeginRewind:(bool)arg1;
- (void)setSupportsEndFastForward:(bool)arg1;
- (void)setSupportsEndRewind:(bool)arg1;
- (void)setSupportsSeekToPlaybackPosition:(bool)arg1;
- (void)setSupportsSkipBackward:(bool)arg1;
- (void)setSupportsSkipForward:(bool)arg1;
- (bool)supportsBeginFastForward;
- (bool)supportsBeginRewind;
- (bool)supportsEndFastForward;
- (bool)supportsEndRewind;
- (bool)supportsSeekToPlaybackPosition;
- (bool)supportsSkipBackward;
- (bool)supportsSkipForward;

@end
