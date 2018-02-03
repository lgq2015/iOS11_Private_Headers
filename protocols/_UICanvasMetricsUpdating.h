/* made by EzioChiu.
 */

@protocol _UICanvasMetricsUpdating <NSObject>

@required

- (_UICanvas *)canvas;
- (void)setCanvas:(_UICanvas *)arg1;
- (void)updateMetricsOnWindows:(NSArray *)arg1 animated:(bool)arg2;

@end