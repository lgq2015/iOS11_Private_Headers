/* made by EzioChiu.
 */

@protocol RCUIServiceCurrentRecordingViewController <NSObject>

@required

- (void)dismissLockscreenInterface;
- (void)loadCaptureStateWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RCAVState *, void*
- (void)presentLockscreenInterfaceWithBackgroundColor:(UIColor *)arg1 waveformForegroundColor:(UIColor *)arg2 waveformBackgroundColor:(UIColor *)arg3;
- (void)setScreenUpdatesDisabled:(bool)arg1;

@end
