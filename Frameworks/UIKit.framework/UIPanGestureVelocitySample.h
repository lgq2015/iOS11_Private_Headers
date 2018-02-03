/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPanGestureVelocitySample : NSObject {
    double  dt;
    struct CGPoint { 
        double x; 
        double y; 
    }  end;
    struct CGPoint { 
        double x; 
        double y; 
    }  start;
}

@property double dt;
@property struct CGPoint { double x1; double x2; } end;
@property struct CGPoint { double x1; double x2; } start;

- (double)dt;
- (struct CGPoint { double x1; double x2; })end;
- (void)setDt:(double)arg1;
- (void)setEnd:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStart:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })start;

@end