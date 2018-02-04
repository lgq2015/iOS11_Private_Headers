/* made by EzioChiu.
 */

@protocol TKVibrationRecorderViewDelegate <NSObject>

@required

- (void)vibrationComponentDidEndForVibrationRecorderView:(TKVibrationRecorderView *)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderView:(TKVibrationRecorderView *)arg1;
- (void)vibrationRecorderView:(TKVibrationRecorderView *)arg1 buttonTappedWithIdentifier:(int)arg2;
- (void)vibrationRecorderView:(TKVibrationRecorderView *)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (bool)vibrationRecorderViewDidEnterRecordingMode:(TKVibrationRecorderView *)arg1;
- (void)vibrationRecorderViewDidFinishReplayingVibration:(TKVibrationRecorderView *)arg1;
- (void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(TKVibrationRecorderView *)arg1;

@end
