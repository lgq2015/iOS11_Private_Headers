/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSEnrollContainerViewController : UIViewController {
    BiometricKitUIEnrollViewController * _enrollController;
}

@property (nonatomic, retain) BiometricKitUIEnrollViewController *enrollController;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (void)dealloc;
- (id)enrollController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForEnrollmentController;
- (void)setEnrollController:(id)arg1;
- (void)teardown;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
