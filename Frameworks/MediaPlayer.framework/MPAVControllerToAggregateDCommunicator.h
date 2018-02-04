/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVControllerToAggregateDCommunicator : NSObject {
    MPAVItem * _item;
    long long  _lastMediaType;
    double  _playbackStartTime;
    bool  _playbackStartTimeIsValid;
}

- (void).cxx_destruct;
- (void)_handleItemChangedNotification:(id)arg1;
- (void)_handleItemTypeAvailableNotification:(id)arg1;
- (void)_handlePlaybackStateChangedNotification:(id)arg1;
- (void)_startPlaybackTimer;
- (void)_stopPlaybackTimer;
- (void)_updateLastMediaTypeForItem;
- (void)dealloc;
- (id)init;

@end
