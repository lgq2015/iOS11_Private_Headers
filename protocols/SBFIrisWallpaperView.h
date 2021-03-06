/* made by EzioChiu.
 */

@protocol SBFIrisWallpaperView <NSObject>

@required

- (<SBFIrisWallpaperViewDelegate> *)irisDelegate;
- (UIGestureRecognizer *)irisGestureRecognizer;
- (long long)irisPlaybackState;
- (bool)isIrisInteracting;
- (void)setIrisDelegate:(id <SBFIrisWallpaperViewDelegate>)arg1;
- (double)stillTimeInVideo;
- (NSURL *)videoFileURL;

@end
