/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPlayButtonImageCache : NSObject {
    NSBundle * _bundle;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _imageLock;
    UIImage * _pauseImage;
    NSString * _pauseImageName;
    UIImage * _playImage;
    NSString * _playImageName;
    UIImage * _stopImage;
    NSString * _stopImageName;
}

@property (readonly) UIImage *pauseImage;
@property (readonly) UIImage *playImage;
@property (readonly) UIImage *stopImage;

+ (id)imageCacheForStyle:(long long)arg1;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1;
- (id)pauseImage;
- (id)playImage;
- (void)preloadImages;
- (id)stopImage;

@end
