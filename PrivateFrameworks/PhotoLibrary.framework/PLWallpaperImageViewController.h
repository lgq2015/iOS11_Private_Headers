/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLWallpaperImageViewController : PLUIEditImageViewController <SBFLegibilitySettingsProviderDelegate> {
    bool  __statusBarHidden;
    long long  __statusBarStyle;
    unsigned int  _didSetImageMode;
    bool  _isWallpaperEdit;
    PLWallpaperNavigationItem * _navItem;
    NSArray * _navigationToolbarItems;
    long long  _previewType;
    long long  _previewVariant;
    bool  _saveWallpaperData;
    int  _wallpaperMode;
    SBSUIWallpaperPreviewViewController * _wallpaperPreviewViewController;
    NSString * _wallpaperTitle;
}

@property (setter=_setStatusBarHidden:, nonatomic) bool _statusBarHidden;
@property (setter=_setStatusBarStyle:, nonatomic) long long _statusBarStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isWallpaperEdit;
@property (nonatomic) long long previewType;
@property (nonatomic) long long previewVariant;
@property (nonatomic) bool saveWallpaperData;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBSUIWallpaperPreviewViewController *wallpaperPreviewViewController;
@property (nonatomic, copy) NSString *wallpaperTitle;

- (void)_adjustScrollViewGeometry;
- (void)_backgroundCropWallpaper;
- (unsigned long long)_contentAutoresizingMask;
- (void)_cropWallpaperFinished:(id)arg1;
- (void)_displayWallpaperOptionsSheet;
- (void)_savePhoto;
- (void)_setStatusBarHidden:(bool)arg1;
- (void)_setStatusBarStyle:(long long)arg1;
- (bool)_statusBarHidden;
- (long long)_statusBarStyle;
- (unsigned long long)_tileAutoresizingMask;
- (void)_updatePreviewFrame:(id)arg1;
- (void)_updateTitles;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewFrame;
- (bool)clientIsWallpaper;
- (int)cropOverlayMode;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)dealloc;
- (long long)desiredStatusBarAnimation;
- (int)imageFormat;
- (id)init;
- (id)initWithUIImage:(id)arg1;
- (id)initWithWallpaperVariant:(long long)arg1;
- (bool)isWallpaperEdit;
- (void)loadView;
- (void)motionToggledManually:(bool)arg1;
- (id)navigationItem;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (void)prepareForBackground:(id)arg1;
- (void)prepareForForeground:(id)arg1;
- (long long)previewType;
- (long long)previewVariant;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (bool)saveWallpaperData;
- (void)setImageAsHomeScreenAndLockScreenClicked:(id)arg1;
- (void)setImageAsHomeScreenClicked:(id)arg1;
- (void)setImageAsLockScreenClicked:(id)arg1;
- (void)setIsWallpaperEdit:(bool)arg1;
- (void)setPreviewType:(long long)arg1;
- (void)setPreviewVariant:(long long)arg1;
- (void)setSaveWallpaperData:(bool)arg1;
- (void)setWallpaperFromArgs:(id)arg1;
- (void)setWallpaperPreviewViewController:(id)arg1;
- (void)setWallpaperSynchronouslyFromArgs:(id)arg1;
- (void)setWallpaperTitle:(id)arg1;
- (void)setupNavigationItem;
- (void)setupWallpaperPreview;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)uiipc_useTelephonyUI;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)wallpaperPreviewViewController;
- (id)wallpaperTitle;
- (bool)wantsStatusBarVisible;

@end
