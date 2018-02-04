/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUMarqueeView : UIView <CAAnimationDelegate> {
    long long  _animationDirection;
    double  _contentGap;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    UIView * _contentView;
    NSPointerArray * _coordinatedMarqueeViews;
    NSUUID * _currentAnimationID;
    <MPUMarqueeViewDelegate> * _delegate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _fadeEdgeInsets;
    double  _marqueeDelay;
    bool  _marqueeEnabled;
    double  _marqueeScrollRate;
    long long  _options;
    MPUMarqueeView * _primaryMarqueeView;
    UIView * _viewForContentSize;
}

@property (nonatomic) long long animationDirection;
@property (nonatomic) double contentGap;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) NSArray *coordinatedMarqueeViews;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPUMarqueeViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } fadeEdgeInsets;
@property (readonly) unsigned long long hash;
@property (nonatomic) double marqueeDelay;
@property (getter=isMarqueeEnabled, nonatomic) bool marqueeEnabled;
@property (nonatomic) double marqueeScrollRate;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *viewForContentSize;

- (void).cxx_destruct;
- (void)_applyMarqueeFade;
- (void)_createMarqueeAnimationIfNeeded;
- (void)_createMarqueeAnimationIfNeededWithMaximumDuration:(double)arg1 beginTime:(double)arg2;
- (double)_duration;
- (void)_tearDownMarqueeAnimation;
- (void)addCoordinatedMarqueeView:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (long long)animationDirection;
- (double)contentGap;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)contentView;
- (id)coordinatedMarqueeViews;
- (id)delegate;
- (void)didMoveToWindow;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })fadeEdgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (bool)isMarqueeEnabled;
- (void)layoutSubviews;
- (double)marqueeDelay;
- (double)marqueeScrollRate;
- (void)resetMarqueePosition;
- (void)setAnimationDirection:(long long)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentGap:(double)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFadeEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMarqueeDelay:(double)arg1;
- (void)setMarqueeEnabled:(bool)arg1;
- (void)setMarqueeEnabled:(bool)arg1 withOptions:(long long)arg2;
- (void)setMarqueeScrollRate:(double)arg1;
- (void)setViewForContentSize:(id)arg1;
- (id)viewForContentSize;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
