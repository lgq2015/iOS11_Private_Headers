/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScalingFlipView : UIView {
    UIView * _backView;
    <SUScalingFlipViewDelegate> * _delegate;
    long long  _direction;
    double  _duration;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _fromFrame;
    UIView * _frontView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _toFrame;
}

@property (nonatomic) <SUScalingFlipViewDelegate> *delegate;
@property (nonatomic) long long direction;
@property (nonatomic) double duration;

- (id)_backLayerAnimation;
- (id)_fixedAnimationForAnimation:(id)arg1;
- (id)_frontLayerAnimation;
- (id)_inputColorAnimation;
- (id)_positionAnimation;
- (id)_transformAnimationWithStart:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1 middle:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg2 end:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg3;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)dealloc;
- (id)delegate;
- (long long)direction;
- (double)duration;
- (id)initWithFrontView:(id)arg1 backView:(id)arg2;
- (void)performFlip;
- (void)setDelegate:(id)arg1;
- (void)setDirection:(long long)arg1;
- (void)setDuration:(double)arg1;

@end
