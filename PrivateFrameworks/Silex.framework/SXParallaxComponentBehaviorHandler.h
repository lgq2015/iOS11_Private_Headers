/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXParallaxComponentBehaviorHandler : SXComponentBehaviorHandler {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _absoluteContentViewFrame;
    int  _direction;
    double  _factor;
    bool  _inFirstViewport;
    bool  _inLastViewport;
    bool  _isRotating;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } absoluteContentViewFrame;
@property (nonatomic) int direction;
@property (nonatomic, readonly) double factor;
@property (nonatomic) bool inFirstViewport;
@property (nonatomic) bool inLastViewport;
@property (nonatomic, readonly) bool isRotating;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })absoluteContentViewFrame;
- (void)destroyWithBehaviorController:(id)arg1;
- (int)direction;
- (double)factor;
- (bool)inFirstViewport;
- (bool)inLastViewport;
- (id)initWithComponentView:(id)arg1 withBehavior:(id)arg2;
- (bool)isRotating;
- (void)setAbsoluteContentViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDirection:(int)arg1;
- (void)setInFirstViewport:(bool)arg1;
- (void)setInLastViewport:(bool)arg1;
- (void)setupWithBehaviorController:(id)arg1;
- (void)updateWithBehaviorController:(id)arg1;

@end
