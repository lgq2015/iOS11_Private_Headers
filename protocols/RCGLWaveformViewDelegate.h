/* made by EzioChiu.
 */

@protocol RCGLWaveformViewDelegate <NSObject>

@required

- (void)waveformViewController:(RCGLWaveformViewController *)arg1 didChangeToSelectedTimeRange:(struct { double x1; double x2; })arg2;
- (void)waveformViewController:(RCGLWaveformViewController *)arg1 didScrubToTime:(double)arg2 finished:(bool)arg3;
- (void)waveformViewControllerDidEndEditingSelectedTimeRange:(RCGLWaveformViewController *)arg1;
- (void)waveformViewControllerWillBeginEditingSelectedTimeRange:(RCGLWaveformViewController *)arg1;

@end
