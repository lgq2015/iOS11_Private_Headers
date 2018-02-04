/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBSUIWallpaperPreviewViewController : UIViewController <SBFLegibilitySettingsProvider, SBFLegibilitySettingsProviderDelegate, SBFWallpaperViewSettingsProvider> {
    bool  _allowScrolling;
    bool  _colorSamplingEnabled;
    NSTimer * _dateTimer;
    <SBFLegibilitySettingsProviderDelegate> * _delegate;
    SBFHomeScreenWallpaperParallaxSettings * _homeScreenParallaxSettings;
    SBFLockScreenWallpaperParallaxSettings * _lockScreenParallaxSettings;
    bool  _motionEnabled;
    NSString * _name;
    NSDictionary * _proceduralWallpaper;
    NSDictionary * _proceduralWallpaperOptions;
    double  _stillTimeInVideo;
    long long  _variant;
    AVURLAsset * _video;
    SBFWallpaperConfiguration * _wallpaperConfiguration;
    SBFWallpaperConfigurationManager * _wallpaperConfigurationManager;
    UIImage * _wallpaperImage;
    SBFWallpaperSettings * _wallpaperSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFLegibilitySettingsProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBFHomeScreenWallpaperParallaxSettings *homeScreenParallaxSettings;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) SBFLockScreenWallpaperParallaxSettings *lockScreenParallaxSettings;
@property (nonatomic) bool motionEnabled;
@property (readonly) Class superclass;
@property (nonatomic, copy) SBFWallpaperConfiguration *wallpaperConfiguration;
@property (readonly) UIImage *wallpaperImage;
@property (nonatomic, retain) SBFWallpaperSettings *wallpaperSettings;

- (void).cxx_destruct;
- (id)_colorWallpaperViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 variant:(long long)arg2 configuration:(id)arg3;
- (id)_dateView;
- (double)_parallaxFactor;
- (id)_previewView;
- (id)_proceduralWallpaperViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 variant:(long long)arg2;
- (void)_startDateTimer;
- (void)_stopDateTimer;
- (void)_updateDateView;
- (id)_wallpaperView;
- (id)_wallpaperViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_wallpaperViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 image:(id)arg2 video:(id)arg3 videoURL:(id)arg4 stillTimeInVideo:(double)arg5 supportsCropping:(bool)arg6 variant:(long long)arg7;
- (id)_wallpaperViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 variant:(long long)arg2 options:(id)arg3;
- (bool)colorSamplingEnabled;
- (void)dealloc;
- (id)delegate;
- (id)homeScreenParallaxSettings;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 name:(id)arg2;
- (id)initWithImage:(id)arg1 name:(id)arg2 video:(id)arg3 time:(double)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithProceduralWallpaper:(id)arg1 options:(id)arg2;
- (id)initWithScrollableImage:(id)arg1;
- (id)initWithScrollableImage:(id)arg1 video:(id)arg2 time:(double)arg3;
- (id)initWithWallpaperVariant:(long long)arg1;
- (id)legibilitySettings;
- (void)loadView;
- (id)lockScreenParallaxSettings;
- (bool)motionEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (void)setColorSamplingEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHomeScreenParallaxSettings:(id)arg1;
- (void)setImageWallpaperForLocations:(long long)arg1;
- (void)setLockScreenParallaxSettings:(id)arg1;
- (void)setMotionEnabled:(bool)arg1;
- (void)setMotionEnabled:(bool)arg1 updateParallaxOnWallpaperView:(bool)arg2;
- (void)setProceduralWallpaperForLocations:(long long)arg1;
- (void)setWallpaperConfiguration:(id)arg1;
- (void)setWallpaperForLocations:(long long)arg1;
- (void)setWallpaperSettings:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)wallpaperConfiguration;
- (id)wallpaperConfigurationManager;
- (id)wallpaperImage;
- (id)wallpaperParallaxSettingsForVariant:(long long)arg1;
- (id)wallpaperSettings;

@end
