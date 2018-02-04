/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVLoadingViewController : _TVBgImageLoadingViewController {
    IKImageElement * _bgImageElement;
    IKImageElement * _heroImgElement;
    IKViewElement * _loadingTemplateElement;
    double  _spinnerDelay;
}

- (void).cxx_destruct;
- (id)_backgroundImageProxy;
- (struct CGSize { double x1; double x2; })_backgroundImageProxySize;
- (bool)_backgroundImageRequiresBlur;
- (long long)_blurEffectStyle;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (id)init;
- (void)loadView;
- (void)setSpinnerDelay:(double)arg1;
- (void)updateWithLoadingTemplate:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
