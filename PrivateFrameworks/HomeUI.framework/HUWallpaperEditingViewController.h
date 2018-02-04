/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUWallpaperEditingViewController : UIViewController <UIScrollViewDelegate> {
    UIVisualEffectView * _buttonBackgroundView;
    UIView * _buttonContainerView;
    UIView * _buttonSeparatorView;
    UIButton * _cancelButton;
    <HUWallpaperEditingViewControllerDelegate> * _delegate;
    UIImage * _image;
    UIImageView * _imageView;
    UIScrollView * _scrollView;
    UIButton * _setButton;
    bool  _statusBarHidden;
    HFWallpaper * _wallpaper;
}

@property (nonatomic, retain) UIVisualEffectView *buttonBackgroundView;
@property (nonatomic, retain) UIView *buttonContainerView;
@property (nonatomic, retain) UIView *buttonSeparatorView;
@property (nonatomic, retain) UIButton *cancelButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUWallpaperEditingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UIButton *setButton;
@property (nonatomic) bool statusBarHidden;
@property (readonly) Class superclass;
@property (nonatomic, retain) HFWallpaper *wallpaper;

- (void).cxx_destruct;
- (id)_createButtonConstraints;
- (id)_createButtonViews;
- (id)buttonBackgroundView;
- (id)buttonContainerView;
- (void)buttonPressed:(id)arg1;
- (id)buttonSeparatorView;
- (void)buttonTouchFinished:(id)arg1;
- (void)buttonTouchStarted:(id)arg1;
- (id)cancelButton;
- (id)delegate;
- (id)image;
- (id)imageView;
- (id)initWithWallpaper:(id)arg1 image:(id)arg2 delegate:(id)arg3;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)prefersStatusBarHidden;
- (id)scrollView;
- (id)setButton;
- (void)setButtonBackgroundView:(id)arg1;
- (void)setButtonContainerView:(id)arg1;
- (void)setButtonSeparatorView:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSetButton:(id)arg1;
- (void)setStatusBarHidden:(bool)arg1;
- (void)setWallpaper:(id)arg1;
- (bool)statusBarHidden;
- (id)transparentButtonWithTitle:(id)arg1;
- (void)updateScrollViewScale;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)wallpaper;

@end
