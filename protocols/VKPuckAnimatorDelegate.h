/* made by EzioChiu.
 */

@protocol VKPuckAnimatorDelegate <NSObject>

@required

- (void)puckAnimator:(VKPuckAnimator *)arg1 runAnimation:(VKAnimation *)arg2;
- (void)puckAnimator:(VKPuckAnimator *)arg1 updatedPosition:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg2 course:(const struct Unit<RadianUnitDescription, double> { double x1; }*)arg3;
- (void)puckAnimator:(VKPuckAnimator *)arg1 updatedTargetPosition:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg2;
- (void)puckAnimatorDidStop:(VKPuckAnimator *)arg1;

@end
