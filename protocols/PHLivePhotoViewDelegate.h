/* made by EzioChiu.
 */

@protocol PHLivePhotoViewDelegate <NSObject>

@optional

- (void)livePhotoView:(PHLivePhotoView *)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(PHLivePhotoView *)arg1 willBeginPlaybackWithStyle:(long long)arg2;

@end
