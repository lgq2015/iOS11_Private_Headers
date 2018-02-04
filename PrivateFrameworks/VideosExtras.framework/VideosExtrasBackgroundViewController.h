/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasBackgroundViewController : UIViewController {
    NSArray * _backgroundElements;
    IKImageElement * _displayedImageElement;
    NSArray * _imageConstraints;
    MPUArtworkView * _imageView;
    NSTimer * _updateTimer;
    unsigned long long  _vignetteType;
    UIImageView * _vignetteView;
}

@property (nonatomic, readonly) NSArray *backgroundElements;
@property (nonatomic) unsigned long long vignetteType;

+ (id)vignetteImageForType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_didReceiveImage:(id)arg1;
- (void)_initVignette;
- (void)_invalidateTimer;
- (void)_scheduleTimerIfNeeded;
- (void)_updateConstraintsForImageSize:(struct CGSize { double x1; double x2; })arg1 position:(unsigned long long)arg2;
- (void)_updateImage;
- (id)backgroundElements;
- (void)dealloc;
- (id)initWithBackgroundElement:(id)arg1;
- (id)initWithBackgroundElements:(id)arg1;
- (void)setVignetteType:(unsigned long long)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (unsigned long long)vignetteType;

@end
