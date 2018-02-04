/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUAdBannerView : ADBannerView

@property (nonatomic, readonly) unsigned long long skipThreshold;
@property (nonatomic, readonly) NSURL *videoURL;

- (id)initWithAdCreativeType:(int)arg1;
- (unsigned long long)skipThreshold;
- (id)videoURL;

@end
