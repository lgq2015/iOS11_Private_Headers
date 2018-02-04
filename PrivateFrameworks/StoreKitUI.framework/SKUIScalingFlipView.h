/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIScalingFlipView : UIView {
    UIView * _backView;
    id /* block */  _completionBlock;
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

@property (nonatomic) long long direction;
@property (nonatomic) double duration;

- (void).cxx_destruct;
- (id)_backLayerAnimation;
- (id)_frontLayerAnimation;
- (id)_inputColorAnimation;
- (id)_positionAnimation;
- (id)_timingFunction;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (long long)direction;
- (double)duration;
- (id)initWithFrontView:(id)arg1 backView:(id)arg2;
- (void)performFlipWithCompletionBlock:(id /* block */)arg1;
- (void)setDirection:(long long)arg1;
- (void)setDuration:(double)arg1;

@end
