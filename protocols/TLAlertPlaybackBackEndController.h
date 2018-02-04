/* made by EzioChiu.
 */

@protocol TLAlertPlaybackBackEndController <NSObject>

@required

- (void)playAlert:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: TLAlert *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)stopPlayingAlerts:(void *)arg1 withOptions:(void *)arg2 playbackCompletionType:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSArray *, TLAlertStoppingOptions *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@optional

- (void)handleActivationAssertionStatusChangeForAlert:(TLAlert *)arg1 updatedStatus:(bool)arg2;
- (void)updateAudioVolumeDynamicallyForAlert:(TLAlert *)arg1 toValue:(float)arg2;

@end
