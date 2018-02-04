/* made by EzioChiu.
 */

@protocol CHVisualizationManagerDelegate <NSObject>

@required

- (void)visualizationManager:(CHVisualizationManager *)arg1 needsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)visualizationManagerNeedsDisplay:(CHVisualizationManager *)arg1;

@optional

- (void)visualizationManagerDidUpdateSessionStatus:(CHVisualizationManager *)arg1;

@end
