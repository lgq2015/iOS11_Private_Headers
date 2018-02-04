/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKNavigationController : UINavigationController <UINavigationControllerDelegate> {
    UIView * _backgroundView;
    UIColor * _barBackgroundColor;
    UIVisualEffectView * _blurView;
    unsigned long long  _explicitlyDefinedSupportedInterfaceOrientations;
    bool  _hasExplicitlyDefinedSupportedInterfaceOrientations;
    long long  _shadowStyle;
    UIImageView * _wallpaperView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyShadowStyleForViewController:(id)arg1;
- (void)_updateBarTintColorForViewController:(id)arg1;
- (void)_updateWithWallpaperImage:(id)arg1;
- (void)dealloc;
- (id)initWithBarBackgroundColor:(id)arg1 barShadowStyle:(long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (void)setupBackgroundViewWithBlurEffect:(long long)arg1;
- (void)setupWallpaper;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
