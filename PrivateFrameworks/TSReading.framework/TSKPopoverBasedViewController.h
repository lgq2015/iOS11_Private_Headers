/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKPopoverBasedViewController : UIViewController <TSKKeyboardObserver, TSKModalShieldDelegate, TSKPopoverBasedViewControllerDismissible, UINavigationControllerDelegate, UIPopoverControllerDelegate> {
    bool  mAllowsOutsideTouch;
    bool  mDismissOnUndo;
    bool  mHalfHeightAnimated;
    id /* block */  mHalfHeightCloseBlock;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mHalfHeightOriginalFrame;
    UIView * mHalfHeightParentView;
    TSKModalShieldView * mHalfHeightTapShield;
    UIViewController * mHalfHeightViewController;
    TSKHideOnTouchOutsideViewGestureRecognizer * mHideOnTouchGestureRecognizer;
    bool  mImposeContentSizeOnViewControllers;
    TSKPopoverController * mPopoverController;
    <TSKPopoverBasedViewControllerDelegate> * mPopoverDelegate;
    UIView * mPopoverToggleView;
    bool  mStaysOpenOnOutsideTouches;
    bool  mUndoManagerNotificationsRegistered;
    bool  mUseDoneButton;
    bool  mViewControllerVisible;
    bool  mViewResizesWithKeyboard;
    bool  mWrapInNavigationController;
}

@property (nonatomic) bool allowsOutsideTouch;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dismissOnUndo;
@property (nonatomic, retain) UIViewController *halfHeightViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool imposeContentSizeOnViewControllers;
@property (nonatomic, readonly) bool isPopoverGestureInFlight;
@property (nonatomic, readonly, retain) TSKPopoverController *popoverController;
@property (nonatomic) <TSKPopoverBasedViewControllerDelegate> *popoverDelegate;
@property (nonatomic, retain) UIView *popoverToggleView;
@property (nonatomic, readonly) bool shouldHideToolbar;
@property (nonatomic) bool staysOpenOnOutsideTouches;
@property (readonly) Class superclass;
@property (nonatomic) bool useDoneButton;
@property (nonatomic) bool viewResizesWithKeyboard;
@property (nonatomic) bool wrapInNavigationController;

- (bool)allowsOutsideTouch;
- (void)clearOutsideTouchWatchView;
- (void)closeButtonPressed;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)dealloc;
- (void)dismissAnimated:(bool)arg1;
- (bool)dismissOnUndo;
- (void)dismissPopoverAnimated:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForCurrentiPhoneOrientation;
- (id)halfHeightViewController;
- (void)i_configureCloseItem:(id)arg1;
- (id)i_contentViewController;
- (bool)imposeContentSizeOnViewControllers;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isPopoverGestureInFlight;
- (bool)isPopoverVisible;
- (bool)isVisible;
- (void)keyboardDidHideOrUndock:(id)arg1;
- (void)keyboardWillHideOrUndock:(id)arg1;
- (void)keyboardWillShowOrDock:(id)arg1;
- (id)navigationBar;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)outsideTouch:(id)arg1;
- (void)p_applicationWillEnterFullScreen:(id)arg1;
- (void)p_didDismissPopover:(id)arg1;
- (void)p_dismissFullscreenModalAnimated:(bool)arg1;
- (void)p_dismissFullscreenModalFromCloseButton;
- (void)p_dismissHalfHeight;
- (void)p_dismissHalfHeightFromCloseButton;
- (void)p_dismissPopoverAnimated:(bool)arg1;
- (void)p_informDelegateOfDidDismiss;
- (void)p_informDelegateOfWillDismiss;
- (void)p_informDelegateOfWillShow;
- (void)p_installHideOnTouchGesture;
- (void)p_keyboardWillHide:(bool)arg1 withNotification:(id)arg2;
- (id)p_newCloseImageBarButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (id)p_newRootViewController;
- (double)p_originOffsetForKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)p_outsideTouchWatchView;
- (void)p_registerPopoverBasedViewControllerNotifications;
- (void)p_removeHideOnTouchGesture;
- (bool)p_shouldResizeViewWithKeyboard;
- (void)p_showModalInViewController:(id)arg1 withTitle:(id)arg2 animated:(bool)arg3 withDoneButton:(bool)arg4;
- (id)p_topParentViewController;
- (void)p_willPresentPopover;
- (id)popoverController;
- (id)popoverDelegate;
- (id)popoverToggleView;
- (void)presentInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(bool)arg3 modal:(bool)arg4 closeBlock:(id /* block */)arg5;
- (void)presentInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(bool)arg3 modal:(bool)arg4 closeBlock:(id /* block */)arg5 animations:(id /* block */)arg6;
- (void)presentModallyFromBarItem:(id)arg1 viewController:(id)arg2;
- (void)presentModallyFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 viewController:(id)arg3;
- (void)presentModallyFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 viewController:(id)arg3 arrowDirection:(unsigned long long)arg4 animated:(bool)arg5;
- (void)presentModallyFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 viewController:(id)arg3 arrowDirection:(unsigned long long)arg4 animated:(bool)arg5 withDoneButton:(bool)arg6;
- (void)presentModallyFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 viewController:(id)arg3 arrowDirection:(unsigned long long)arg4 animated:(bool)arg5 withDoneButton:(bool)arg6 constrainToView:(bool)arg7 withPadding:(double)arg8 fromToolbar:(bool)arg9;
- (void)presentModallyFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 viewController:(id)arg3 withDoneButton:(bool)arg4;
- (void)presentModallyWithTitle:(id)arg1 viewController:(id)arg2 animated:(bool)arg3 withDoneButton:(bool)arg4;
- (void)resetOutsideTouchWatchView;
- (void)setAllowsOutsideTouch:(bool)arg1;
- (void)setDismissOnUndo:(bool)arg1;
- (void)setHalfHeightViewController:(id)arg1;
- (void)setImposeContentSizeOnViewControllers:(bool)arg1;
- (void)setPopoverDelegate:(id)arg1;
- (void)setPopoverToggleView:(id)arg1;
- (void)setStaysOpenOnOutsideTouches:(bool)arg1;
- (void)setUseDoneButton:(bool)arg1;
- (void)setViewResizesWithKeyboard:(bool)arg1;
- (void)setWrapInNavigationController:(bool)arg1;
- (void)shieldViewReceivedTap;
- (bool)shouldHideToolbar;
- (void)showPopoverFromBarItem:(id)arg1;
- (void)showPopoverFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)showPopoverFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 arrowDirection:(unsigned long long)arg3 animated:(bool)arg4;
- (void)showPopoverFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 arrowDirection:(unsigned long long)arg3 animated:(bool)arg4 constrainToView:(bool)arg5 withPadding:(double)arg6 fromToolbar:(bool)arg7;
- (bool)staysOpenOnOutsideTouches;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)useDoneButton;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (bool)viewResizesWithKeyboard;
- (void)viewWillAppear:(bool)arg1;
- (bool)wantsDismissButton;
- (bool)wrapInNavigationController;

@end
