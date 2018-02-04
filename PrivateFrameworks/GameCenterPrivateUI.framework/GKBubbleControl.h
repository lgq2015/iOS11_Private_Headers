/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKBubbleControl : UIControl <NSCopying> {
    bool  _animateOnTouch;
    bool  _animatingIn;
    GKBubbleView * _bubbleView;
    UIView * _contentView;
    NSLayoutConstraint * _contentViewHeightConstraint;
    NSLayoutConstraint * _contentViewWidthConstraint;
    NSString * _debuggingTag;
    NSLayoutConstraint * _maxHeightConstraint;
    NSLayoutConstraint * _maxWidthConstraint;
    double  _maximumDimension;
}

@property (nonatomic) bool animateOnTouch;
@property (nonatomic) long long bubbleType;
@property (nonatomic, retain) GKBubbleView *bubbleView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) NSLayoutConstraint *contentViewHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *contentViewWidthConstraint;
@property (nonatomic, retain) NSString *debuggingTag;
@property (nonatomic, retain) NSLayoutConstraint *maxHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *maxWidthConstraint;
@property (nonatomic) double maximumDimension;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } projectedContentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } screenFrame;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } screenPosition;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } screenSize;
@property (getter=isSharedBubble, nonatomic, readonly) bool sharedBubble;
@property (nonatomic) union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; } worldPosition;
@property (nonatomic, readonly) union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; } worldSize;

+ (void)initialize;
+ (double)maximumDimensionBasedOnDeviceAdjustForTallness:(bool)arg1;
+ (double)maximumDimensionWhenContainedInViewWithSize:(struct CGSize { double x1; double x2; })arg1;

- (bool)animateOnTouch;
- (void)bounceAfterDelay:(double)arg1 fromZ:(double)arg2 toZ:(double)arg3;
- (bool)bouncing;
- (long long)bubbleType;
- (id)bubbleView;
- (id)contentView;
- (id)contentViewHeightConstraint;
- (id)contentViewWidthConstraint;
- (id)contentsWrapperView;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debuggingTag;
- (id)description;
- (void)didTouchDown;
- (void)didTouchUp;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSharedBubble;
- (id)maxHeightConstraint;
- (id)maxWidthConstraint;
- (double)maximumDimension;
- (id)pathForHitTesting;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct CGSize { double x1; double x2; })projectedContentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenFrame;
- (struct CGPoint { double x1; double x2; })screenPosition;
- (struct CGSize { double x1; double x2; })screenSize;
- (void)setAnimateOnTouch:(bool)arg1;
- (void)setBubbleType:(long long)arg1;
- (void)setBubbleView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewHeightConstraint:(id)arg1;
- (void)setContentViewWidthConstraint:(id)arg1;
- (void)setDebuggingTag:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setMaxHeightConstraint:(id)arg1;
- (void)setMaxWidthConstraint:(id)arg1;
- (void)setMaximumDimension:(double)arg1;
- (void)setScreenFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScreenPosition:(struct CGPoint { double x1; double x2; })arg1 andScreenSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setWorldPosition:(union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })arg1;
- (union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })worldPosition;
- (union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })worldPositionForScreenFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })worldPositionForScreenFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 assumingSuperviewSize:(struct CGSize { double x1; double x2; })arg2;
- (union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })worldPositionForScreenPosition:(struct CGPoint { double x1; double x2; })arg1 andScreenSize:(struct CGSize { double x1; double x2; })arg2;
- (union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })worldPositionForScreenPosition:(struct CGPoint { double x1; double x2; })arg1 andScreenSize:(struct CGSize { double x1; double x2; })arg2 andSuperviewSize:(struct CGSize { double x1; double x2; })arg3;
- (union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })worldSize;

@end
