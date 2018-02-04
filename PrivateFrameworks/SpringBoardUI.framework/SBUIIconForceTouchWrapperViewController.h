/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIIconForceTouchWrapperViewController : UIViewController {
    UIViewController * _childViewController;
    UIView * _containerView;
    double  _contentAlpha;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentNativeSize;
    NSMutableArray * _mutableLayoutConstraints;
}

@property (nonatomic, readonly) UIViewController *childViewController;
@property (nonatomic) double contentAlpha;
@property (nonatomic) struct CGSize { double x1; double x2; } contentNativeSize;

- (void).cxx_destruct;
- (void)_updateChildViewTransform;
- (void)_updateLayoutConstraints;
- (id)childViewController;
- (double)contentAlpha;
- (struct CGSize { double x1; double x2; })contentNativeSize;
- (id)initWithChildViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)setContentAlpha:(double)arg1;
- (void)setContentNativeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewDidLayoutSubviews;

@end
