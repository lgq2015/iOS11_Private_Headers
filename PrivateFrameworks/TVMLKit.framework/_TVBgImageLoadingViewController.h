/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVBgImageLoadingViewController : UIViewController <TVAppTemplateController> {
    bool  _appliedNavigationItem;
    struct { 
        bool respondsToBackroundImageProxy; 
        bool respondsToBackgroundImageRequiresBlur; 
        bool respondsToBackdropNeeded; 
        bool respondsToImageProxySize; 
        bool respondsToBlurEffectStyle; 
        bool respondsToPurgeBgImages; 
        bool respondsToConfigureBgImageBackdropImage; 
    }  _bgImageLoadingOptions;
    TVImageProxy * _bgImageProxy;
    bool  _loaded;
    IKViewElement * _navigationItemElement;
    UIView * _rightLargeTitleButton;
}

@property (nonatomic) bool appliedNavigationItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IKViewElement *navigationItemElement;
@property (readonly) Class superclass;

+ (id)_decorateImage:(id)arg1 decorator:(id)arg2;

- (void).cxx_destruct;
- (id)_backgroundImageProxy;
- (struct CGSize { double x1; double x2; })_backgroundImageProxySize;
- (bool)_backgroundImageRequiresBlur;
- (long long)_blurEffectStyle;
- (bool)_isBackdropNeeded;
- (long long)_overrideLargeTitleDisplayMode;
- (void)_reparentNavigationItem:(id)arg1;
- (void)_updateNavigationBarPadding;
- (void)_updateNavigationItem;
- (bool)appliedNavigationItem;
- (void)configureAppearanceTransition;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadFromViewController:(id)arg1 completion:(id /* block */)arg2;
- (id)navigationItemElement;
- (long long)preferredStatusBarStyle;
- (void)setAppliedNavigationItem:(bool)arg1;
- (void)setNavigationItemElement:(id)arg1;
- (void)updateNavigationItem:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
