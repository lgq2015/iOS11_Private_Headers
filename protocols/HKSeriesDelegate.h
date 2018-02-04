/* made by EzioChiu.
 */

@protocol HKSeriesDelegate

@required

- (void)seriesDidInvalidatePaths:(HKGraphSeries *)arg1 newDataArrived:(bool)arg2;
- (bool)seriesDrawingDuringScrolling;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })virtualMarginInsets;

@end
