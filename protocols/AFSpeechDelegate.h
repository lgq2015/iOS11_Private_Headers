/* made by EzioChiu.
 */

@protocol AFSpeechDelegate <NSObject>

@optional

- (void)assistantConnection:(AFConnection *)arg1 recognitionUpdateDidFinishWithError:(NSError *)arg2;
- (void)assistantConnection:(AFConnection *)arg1 recognitionUpdateWillBeginForTask:(NSString *)arg2;
- (void)assistantConnection:(AFConnection *)arg1 recognitionUpdateWithPhrases:(NSArray *)arg2 utterances:(NSArray *)arg3 refId:(NSString *)arg4;
- (void)assistantConnection:(AFConnection *)arg1 recognitionWithPhrases:(NSArray *)arg2 utterances:(NSArray *)arg3;
- (void)assistantConnection:(AFConnection *)arg1 recognizedAdditionalSpeechInterpretation:(AFSpeechInterpretation *)arg2 refId:(NSString *)arg3;
- (void)assistantConnection:(AFConnection *)arg1 speechRecognitionDidFail:(NSError *)arg2;
- (void)assistantConnection:(AFConnection *)arg1 speechRecognized:(SASSpeechRecognized *)arg2;
- (void)assistantConnection:(AFConnection *)arg1 speechRecognizedPartialResult:(SASSpeechPartialResult *)arg2;
- (void)assistantConnection:(AFConnection *)arg1 speechRecordingDidBeginOnAVRecordRoute:(NSString *)arg2;
- (void)assistantConnection:(AFConnection *)arg1 speechRecordingDidBeginOnAVRecordRoute:(NSString *)arg2 audioSessionID:(unsigned int)arg3;
- (void)assistantConnection:(AFConnection *)arg1 speechRecordingDidChangeAVRecordRoute:(NSString *)arg2;
- (void)assistantConnection:(AFConnection *)arg1 speechRecordingDidFail:(NSError *)arg2;
- (void)assistantConnection:(void *)arg1 speechRecordingPerformTwoShotPromptWithType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: AFConnection *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, double, NSError *, void*
- (void)assistantConnection:(AFConnection *)arg1 speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(AFXPCWrapper *)arg2;
- (void)assistantConnectionDidChangeAudioRecordingPower:(AFConnection *)arg1;
- (void)assistantConnectionSpeechRecordingDidCancel:(AFConnection *)arg1;
- (void)assistantConnectionSpeechRecordingDidDetectStartpoint:(AFConnection *)arg1;
- (void)assistantConnectionSpeechRecordingDidEnd:(AFConnection *)arg1;
- (void)assistantConnectionSpeechRecordingWillBegin:(AFConnection *)arg1;

@end
