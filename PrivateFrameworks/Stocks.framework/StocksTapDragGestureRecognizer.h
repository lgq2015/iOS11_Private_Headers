/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StocksTapDragGestureRecognizer : UIGestureRecognizer {
    unsigned long long  _maximumNumberOfTouches;
    unsigned long long  _minimumNumberOfTouches;
    double  _requiredPressDelay;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startingPosition;
    NSTimer * _touchDelayTimer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _touchableBounds;
    NSMutableSet * _touches;
}

@property (nonatomic) unsigned long long maximumNumberOfTouches;
@property (nonatomic) unsigned long long minimumNumberOfTouches;
@property (nonatomic) double requiredPressDelay;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } touchableBounds;
@property (nonatomic, readonly) NSSet *touches;

- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (unsigned long long)maximumNumberOfTouches;
- (unsigned long long)minimumNumberOfTouches;
- (double)requiredPressDelay;
- (void)reset;
- (void)setMaximumNumberOfTouches:(unsigned long long)arg1;
- (void)setMinimumNumberOfTouches:(unsigned long long)arg1;
- (void)setRequiredPressDelay:(double)arg1;
- (void)setTouchableBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)touchDelayTimerFired:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })touchableBounds;
- (id)touches;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
