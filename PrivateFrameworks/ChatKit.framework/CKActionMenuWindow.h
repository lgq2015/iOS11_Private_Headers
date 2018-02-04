/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKActionMenuWindow : UIAutoRotatingWindow <CKDismissViewDelegate> {
    CKActionMenuView * _actionMenuView;
    CKDismissView * _dismissView;
}

@property (nonatomic, retain) CKActionMenuView *actionMenuView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKDismissView *dismissView;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *passthroughViews;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_canAffectStatusBarAppearance;
- (bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)actionMenuGestureRecognized:(id)arg1;
- (id)actionMenuView;
- (void)dismissActionMenuViewAnimated:(bool)arg1;
- (id)dismissView;
- (void)dismissViewWasTapped:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)passthroughViews;
- (void)presentActionMenuView:(id)arg1 fromPoint:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3 animated:(bool)arg4;
- (void)setActionMenuView:(id)arg1;
- (void)setDismissView:(id)arg1;
- (void)setPassthroughViews:(id)arg1;

@end
