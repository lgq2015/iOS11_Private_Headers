/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCTrimSavedRecordingOperation : RCTrimCompositionOperation {
    RCSavedRecording * _destinationRecording;
    RCSavedRecording * _sourceRecording;
}

@property (nonatomic, readonly) RCSavedRecording *destinationRecording;
@property (nonatomic, readonly) RCSavedRecording *sourceRecording;

- (void).cxx_destruct;
- (id)destinationRecording;
- (id)initWithSourceRecording:(id)arg1 destinationRecording:(id)arg2 timeRange:(struct { double x1; double x2; })arg3 trimMode:(long long)arg4;
- (void)main;
- (id)sourceRecording;

@end
