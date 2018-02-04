/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVListTemplateController : _TVBgImageLoadingViewController <TVAppTemplateController, TVAppTemplateImpressionable, _TVListViewControllerDelegate> {
    IKViewElement * _bannerElement;
    IKAudioElement * _bgAudioElement;
    IKImageElement * _bgImageElement;
    _TVFocusCaptureView * _disabledTemplateFocusCaptureView;
    UIViewController * _focusedController;
    IKImageElement * _heroImageElement;
    double  _impressionThreshold;
    IKCollectionElement * _listElement;
    _TVListViewController * _listViewController;
    UIView * _overlayView;
    UIViewController * _previewViewController;
    IKViewElement * _templateElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIViewController *focusedController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _TVListViewController *listViewController;
@property (nonatomic, retain) UIViewController *previewViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backgroundImageProxy;
- (struct CGSize { double x1; double x2; })_backgroundImageProxySize;
- (bool)_backgroundImageRequiresBlur;
- (long long)_blurEffectStyle;
- (void)_configureWithBgElement:(id)arg1;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (void)_configureWithListElement:(id)arg1;
- (id)_listTemplateView;
- (void)_updateView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusedController;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)listViewController;
- (void)listViewController:(id)arg1 didScrollWithScrollView:(id)arg2;
- (void)listViewController:(id)arg1 updatePreviewViewController:(id)arg2;
- (void)loadView;
- (id)preferredFocusEnvironments;
- (id)previewViewController;
- (void)setFocusedController:(id)arg1;
- (void)setListViewController:(id)arg1;
- (bool)setNeedsFocusUpdateToList;
- (void)setPreviewViewController:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidAppear:(bool)arg1;

@end
