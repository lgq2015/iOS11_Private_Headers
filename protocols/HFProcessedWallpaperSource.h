/* made by EzioChiu.
 */

@protocol HFProcessedWallpaperSource <NSObject>

@required

- (unsigned long long)processVersionNumber;
- (UIImage *)processedImageForVariant:(long long)arg1 wallpaper:(HFWallpaper *)arg2 image:(UIImage *)arg3;
- (NSArray *)supportedVariants;

@end
