/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoEditToolbar : UIView <PUPhotoEditLayoutStaticAdaptable> {
    UILongPressGestureRecognizer * _accessibilityLongPressGestureRecognizer;
    _UIBackdropView * _backdropBackgroundView;
    NSArray * _basicViewsConstraints;
    long long  _buttonSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentPadding;
    <PUPhotoEditToolbarDelegate> * _delegate;
    long long  _layoutOrientation;
    double  _longSideMargin;
    UIButton * _mainActionButton;
    NSArray * _mainActionButtonConstraints;
    UIView * _mainToolbarContainer;
    UIButton * _secondaryActionButton;
    NSArray * _secondaryActionButtonConstraints;
    UIView * _solidBackgroundView;
    UIView * _stretchableView;
    NSArray * _toolButtonLayoutGuides;
    NSArray * _toolButtons;
    NSArray * _toolButtonsConstraints;
    bool  _useLargeShortSideHeight;
    bool  _useTranslucentBackground;
}

@property (nonatomic, readonly) long long buttonSpacing;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentPadding;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPhotoEditToolbarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long layoutOrientation;
@property (nonatomic) double longSideMargin;
@property (nonatomic, readonly) UIButton *mainActionButton;
@property (nonatomic, readonly) UIButton *secondaryActionButton;
@property (nonatomic, readonly) double shortSideSize;
@property (nonatomic, readonly) UIView *stretchableView;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *toolButtons;
@property (nonatomic) bool useLargeShortSideHeight;
@property (nonatomic) bool useTranslucentBackground;

- (void).cxx_destruct;
- (void)_invalidateAllConstraints;
- (void)_setToolButtons:(id)arg1 buttonSpacing:(long long)arg2 mainActionButton:(id)arg3 secondaryActionButton:(id)arg4 stretchableView:(id)arg5;
- (void)_updateBackgroundAnimated:(bool)arg1;
- (void)accessibilityLongPressChanged:(id)arg1;
- (long long)buttonSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentPadding;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)layoutOrientation;
- (double)longSideMargin;
- (id)mainActionButton;
- (id)secondaryActionButton;
- (void)setContentPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setLongSideMargin:(double)arg1;
- (void)setToolButtons:(id)arg1 buttonSpacing:(long long)arg2 mainActionButton:(id)arg3 secondaryActionButton:(id)arg4;
- (void)setToolButtons:(id)arg1 mainActionButton:(id)arg2 secondaryActionButton:(id)arg3 stretchableView:(id)arg4;
- (void)setUseLargeShortSideHeight:(bool)arg1;
- (void)setUseTranslucentBackground:(bool)arg1;
- (void)setUseTranslucentBackground:(bool)arg1 animated:(bool)arg2;
- (void)setupWithLayoutOrientation:(long long)arg1;
- (double)shortSideSize;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stretchableView;
- (id)toolButtons;
- (void)updateConstraints;
- (bool)useLargeShortSideHeight;
- (bool)useTranslucentBackground;
- (void)willMoveToWindow:(id)arg1;

@end
