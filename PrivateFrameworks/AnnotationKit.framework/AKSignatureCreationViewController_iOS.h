/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKSignatureCreationViewController_iOS : UIViewController <UINavigationBarDelegate> {
    AKSignatureBaselineView * _baselineView;
    AKController * _controller;
    <AKSignatureCreationControllerDelegate> * _delegate;
    UILabel * _label;
    UINavigationBar * _navBar;
    AKSmoothPathView * _pathView;
    AKInkSignatureView * _signatureView;
}

@property (nonatomic, retain) AKSignatureBaselineView *baselineView;
@property (nonatomic) AKController *controller;
@property (readonly, copy) NSString *debugDescription;
@property <AKSignatureCreationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) UINavigationBar *navBar;
@property (nonatomic, retain) AKSmoothPathView *pathView;
@property (nonatomic, retain) AKInkSignatureView *signatureView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (void)_clear:(id)arg1;
- (void)_done:(id)arg1;
- (void)_validateButtons;
- (id)baselineView;
- (id)controller;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (id)initWithController:(id)arg1;
- (id)label;
- (void)loadView;
- (id)navBar;
- (id)pathView;
- (long long)positionForBar:(id)arg1;
- (bool)prefersStatusBarHidden;
- (void)setBaselineView:(id)arg1;
- (void)setController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setNavBar:(id)arg1;
- (void)setPathView:(id)arg1;
- (void)setSignatureView:(id)arg1;
- (id)signatureView;
- (void)viewDidLoad;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
