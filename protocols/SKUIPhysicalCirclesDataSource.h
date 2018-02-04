/* made by EzioChiu.
 */

@protocol SKUIPhysicalCirclesDataSource <NSObject>

@required

- (UIView *)circlesView:(SKUIPhysicalCirclesView *)arg1 circleForIndex:(long long)arg2;
- (long long)numberOfCirclesInCircleView:(SKUIPhysicalCirclesView *)arg1;

@end
