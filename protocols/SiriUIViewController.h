/* made by EzioChiu.
 */

@protocol SiriUIViewController <NSObject>

@required

- (AceObject *)aceObject;
- (bool)isUtteranceUserInteractionEnabled;
- (void)setAceObject:(AceObject *)arg1;
- (void)setUtteranceUserInteractionEnabled:(bool)arg1;
- (void)siriDidDeactivate;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)wasAddedToTranscript;

@optional

- (double)baselineOffsetFromBottom;
- (double)desiredHeight;
- (double)desiredHeightForWidth:(double)arg1;
- (double)desiredTopPaddingBelowController:(id <SiriUIViewController>)arg1;
- (void)endEditingAndCorrect:(bool)arg1;
- (void)endEditingAndCorrectByTouchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)handleAceCommand:(AceObject *)arg1;
- (NSString *)navigationTitle;
- (void)siriDidScrollVisible:(bool)arg1;
- (void)siriDidStartSpeakingWithIdentifier:(NSString *)arg1;
- (void)siriDidStopSpeakingWithIdentifier:(NSString *)arg1 speechQueueIsEmpty:(bool)arg2;

@end
