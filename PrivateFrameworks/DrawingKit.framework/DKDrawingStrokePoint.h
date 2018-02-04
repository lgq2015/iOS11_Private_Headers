/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
 */

@interface DKDrawingStrokePoint : NSObject <NSCopying> {
    double  _force;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    double  _velocity;
}

@property (nonatomic) double force;
@property (nonatomic) struct CGPoint { double x1; double x2; } location;
@property (nonatomic) double velocity;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)force;
- (id)init;
- (struct CGPoint { double x1; double x2; })location;
- (void)setForce:(double)arg1;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setVelocity:(double)arg1;
- (double)velocity;

@end
