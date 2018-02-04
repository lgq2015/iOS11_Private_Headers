/* made by EzioChiu.
 */

@protocol TSDTilingLayerDelegate <CALayerDelegate>

@optional

- (bool)canDrawTilingLayerInBackground:(TSDTilingLayer *)arg1;
- (void)didEndDrawingTilingLayerInBackground:(TSDTilingLayer *)arg1 withToken:(id)arg2;
- (bool)mustDrawTilingLayerOnMainThread:(TSDTilingLayer *)arg1;
- (TSDTileProvider *)providerForTilingLayer:(TSDTilingLayer *)arg1;
- (TSDTilingBackgroundQueue *)queueForDrawingTilingLayerInBackground:(TSDTilingLayer *)arg1;
- (bool)shouldBeginDrawingTilingLayerInBackground:(TSDTilingLayer *)arg1 returningToken:(id*)arg2 andQueue:(id*)arg3;
- (bool)shouldLayoutTilingLayer:(TSDTilingLayer *)arg1;
- (void)tilingLayerWillSetNeedsDisplay:(TSDTilingLayer *)arg1;
- (void)tilingLayerWillSetNeedsDisplayForDirtyTiles:(TSDTilingLayer *)arg1;
- (void)tilingLayerWillSetNeedsLayout:(TSDTilingLayer *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBoundsForTilingLayer:(TSDTilingLayer *)arg1;

@end
