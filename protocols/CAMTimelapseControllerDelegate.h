/* made by EzioChiu.
 */

@protocol CAMTimelapseControllerDelegate <NSObject>

@required

- (void)timelapseController:(CAMTimelapseController *)arg1 generatedPlaceholderResult:(CAMTimelapsePlaceholderResult *)arg2 withThumbnailImage:(UIImage *)arg3 forAssetUUID:(NSString *)arg4 inCaptureSession:(unsigned short)arg5;
- (void)timelapseController:(CAMTimelapseController *)arg1 persistedPlaceholderResult:(CAMTimelapsePlaceholderResult *)arg2 error:(NSError *)arg3;
- (void)timelapseController:(CAMTimelapseController *)arg1 startedWithCaptureOrientation:(long long)arg2;
- (void)timelapseControllerStopped:(CAMTimelapseController *)arg1;

@end
