/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXFullscreenNavigationBarView : UIView {
    UIVisualEffectView * _backgroundView;
    UIButton * _button;
    <SXFullscreenNavigationBarViewDelegate> * _delegate;
    bool  _expanded;
}

@property (nonatomic, readonly) UIVisualEffectView *backgroundView;
@property (nonatomic, readonly) UIButton *button;
@property (nonatomic) <SXFullscreenNavigationBarViewDelegate> *delegate;
@property (nonatomic, readonly) bool expanded;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)button;
- (void)createBackgroundView;
- (void)createDoneButton;
- (id)delegate;
- (void)didMoveToSuperview;
- (void)doneButtonPressed:(id)arg1;
- (bool)expanded;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1 animated:(bool)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateFrameAnimated:(bool)arg1;

@end
