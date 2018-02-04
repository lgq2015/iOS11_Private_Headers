/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLRectangleObservation : CVMLDetectedObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _bottomLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  _bottomRight;
    struct CGPoint { 
        double x; 
        double y; 
    }  _topLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  _topRight;
}

@property struct CGPoint { double x1; double x2; } bottomLeft;
@property struct CGPoint { double x1; double x2; } bottomRight;
@property struct CGPoint { double x1; double x2; } topLeft;
@property struct CGPoint { double x1; double x2; } topRight;

- (struct CGPoint { double x1; double x2; })bottomLeft;
- (struct CGPoint { double x1; double x2; })bottomRight;
- (void)setBottomLeft:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBottomRight:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTopLeft:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTopRight:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })topLeft;
- (struct CGPoint { double x1; double x2; })topRight;

@end
