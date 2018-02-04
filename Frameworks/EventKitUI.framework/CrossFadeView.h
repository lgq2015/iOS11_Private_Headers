/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface CrossFadeView : UIView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _endFrame;
    UIView * _endView;
    bool  _scaleSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _startFrame;
    UIView * _startView;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endFrame;
@property (nonatomic, readonly) UIView *endView;
@property (nonatomic) bool scaleSize;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } startFrame;
@property (nonatomic, readonly) UIView *startView;

- (void).cxx_destruct;
- (void)animateToEndStateWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)animateToStartStateWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endFrame;
- (id)endView;
- (void)haltAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStartView:(id)arg1 endView:(id)arg2 startFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 endFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)scaleSize;
- (void)setEndView:(id)arg1;
- (void)setScaleSize:(bool)arg1;
- (void)setStartView:(id)arg1;
- (void)setToEndState;
- (void)setToStartState;
- (void)springAnimateToEndStateWithTimingFunction:(int)arg1;
- (void)springAnimateToEndStateWithTimingFunction:(int)arg1 completion:(id /* block */)arg2;
- (void)springAnimateToStartStateWithTimingFunction:(int)arg1;
- (void)springAnimateToStartStateWithTimingFunction:(int)arg1 completion:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startFrame;
- (id)startView;

@end
