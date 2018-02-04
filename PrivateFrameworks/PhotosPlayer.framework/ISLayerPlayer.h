/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISLayerPlayer : NSObject {
    NSHashTable * _layers;
}

- (void).cxx_destruct;
- (void)_enumerateLayersWithBlock:(id /* block */)arg1;
- (void)addLayer:(id)arg1;
- (double)currentTime;
- (id)init;
- (void)pause;
- (void)play;
- (void)removeLayer:(id)arg1;
- (void)seekToTime:(double)arg1;
- (void)setRate:(float)arg1;

@end
