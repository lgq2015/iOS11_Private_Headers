/* made by EzioChiu.
 */

@protocol CABackdropLayerDelegate <CALayerDelegate>

@optional

- (void)backdropLayer:(CABackdropLayer *)arg1 didChangeLuma:(double)arg2;
- (void)backdropLayerStatisticsDidChange:(CABackdropLayer *)arg1;

@end
