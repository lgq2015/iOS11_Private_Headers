/* made by EzioChiu.
 */

@protocol ETCanvasViewDelegate <NSObject>

@required

- (void)canvasView:(ETCanvasView *)arg1 didBeginComposingMessageType:(unsigned short)arg2;
- (void)canvasView:(ETCanvasView *)arg1 didBeginPlayingMessage:(ETMessage *)arg2;
- (void)canvasView:(ETCanvasView *)arg1 didEndComposingMessageType:(unsigned short)arg2;
- (void)canvasView:(ETCanvasView *)arg1 didEndPlayingMessage:(ETMessage *)arg2;
- (void)canvasView:(ETCanvasView *)arg1 didUpdateComposingMessageType:(unsigned short)arg2;
- (void)canvasView:(ETCanvasView *)arg1 sendMessage:(ETMessage *)arg2;
- (void)canvasView:(ETCanvasView *)arg1 willEndPlayingMessage:(ETMessage *)arg2;
- (void)canvasViewDidBeginStroke:(ETCanvasView *)arg1;
- (void)canvasViewDidEndStroke:(ETCanvasView *)arg1;
- (bool)canvasViewShouldSendWithTimer:(ETCanvasView *)arg1;
- (void)canvasViewWillReachComposingSizeLimit:(ETCanvasView *)arg1;
- (long long)recentHeartRate;

@optional

- (void)canvasView:(ETCanvasView *)arg1 angerUsesForceTouch:(bool)arg2;
- (bool)canvasView:(ETCanvasView *)arg1 tapRecognizerShouldBegin:(UITapGestureRecognizer *)arg2;
- (void)canvasViewDidEndMediaAppearance:(ETCanvasView *)arg1;
- (void)canvasViewDidPause:(ETCanvasView *)arg1;
- (void)canvasViewDidStartMediaAppearance:(ETCanvasView *)arg1;
- (void)canvasViewDidUnpause:(ETCanvasView *)arg1;
- (bool)canvasViewShouldUseFastVerticalWisp:(ETCanvasView *)arg1;

@end
